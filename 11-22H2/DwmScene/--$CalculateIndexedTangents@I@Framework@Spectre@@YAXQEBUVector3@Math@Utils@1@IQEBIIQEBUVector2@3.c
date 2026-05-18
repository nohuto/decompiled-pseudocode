/*
 * XREFs of ??$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1450
 * Callers:
 *     ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0 (-ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800E1A7C (--0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z @ 0x1800E2ED0 (-ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Framework::CalculateIndexedTangents<unsigned int>(
        Spectre *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        const struct Spectre::Utils::Math::Vector3 *a5,
        int a6,
        _QWORD *a7,
        _BOOL8 a8,
        struct Spectre::Utils::Math::Vector3 *a9)
{
  Spectre *v11; // r11
  _QWORD *v12; // r9
  unsigned __int8 v13; // di
  int v14; // r15d
  __int64 v15; // rbx
  unsigned int v16; // r14d
  unsigned int v17; // esi
  unsigned int v18; // r10d
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  char v21; // al
  struct Spectre::Utils::Math::Vector3 *v22; // [rsp+40h] [rbp-D8h]
  __int64 v24; // [rsp+68h] [rbp-B0h]
  _QWORD v25[4]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+98h] [rbp-80h] BYREF

  v24 = a3;
  v11 = this;
  v12 = a7;
  if ( a6 == 1 )
  {
    v13 = 1;
    v14 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 3;
  }
  v15 = 0LL;
  v16 = 0;
  v17 = a4 - 2 * v13;
  while ( (unsigned int)v15 < v17 )
  {
    v18 = *(_DWORD *)(a3 + 4 * v15);
    LODWORD(v22) = v18;
    v19 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 1));
    v20 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 2));
    if ( v18 >= a2 || v19 >= a2 || v20 >= a2 )
    {
      std::string::string(v25, (__int64)"Index out of range while computing tangents");
      Spectre::Framework::GeometryProcessingException::GeometryProcessingException(pExceptionObject, v25);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v12 && v16 == 100 * (v16 / 0x64) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 40LL))(*v12);
      v18 = (unsigned int)v22;
      v11 = this;
    }
    v21 = v13 && (v15 & 1) != 0;
    Spectre::ComputeTriangleTangents(
      v11,
      a5,
      (const struct Spectre::Utils::Math::Vector2 *)v18,
      v19,
      v20,
      v21,
      a8,
      a9,
      v22);
    v15 = (unsigned int)(v14 + v15);
    ++v16;
    a3 = v24;
    v12 = a7;
    v11 = this;
  }
}
