/*
 * XREFs of ??$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1274
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
void __fastcall Spectre::Framework::CalculateIndexedTangents<unsigned short>(
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
  __int64 v10; // r9
  Spectre *v12; // r11
  _QWORD *v13; // r10
  unsigned __int8 v14; // di
  int v15; // r12d
  __int64 v16; // rbx
  unsigned int v17; // r14d
  unsigned int v18; // esi
  unsigned int v19; // edx
  unsigned int v20; // r13d
  unsigned int v21; // ebp
  char v22; // al
  struct Spectre::Utils::Math::Vector3 *v23; // [rsp+40h] [rbp-D8h]
  _QWORD v26[4]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+98h] [rbp-80h] BYREF

  v10 = a3;
  v12 = this;
  v13 = a7;
  if ( a6 == 1 )
  {
    v14 = 1;
    v15 = 1;
  }
  else
  {
    v14 = 0;
    v15 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = a4 - 2 * v14;
  while ( (unsigned int)v16 < v18 )
  {
    v19 = *(unsigned __int16 *)(v10 + 2 * v16);
    LODWORD(v23) = v19;
    if ( v19 >= a2
      || (v20 = *(unsigned __int16 *)(v10 + 2LL * (unsigned int)(v16 + 1)), v20 >= a2)
      || (v21 = *(unsigned __int16 *)(v10 + 2LL * (unsigned int)(v16 + 2)), v21 >= a2) )
    {
      std::string::string(v26, (__int64)"Index out of range while computing tangents");
      Spectre::Framework::GeometryProcessingException::GeometryProcessingException(pExceptionObject, v26);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
        v12 = this;
      }
      v19 = (unsigned int)v23;
    }
    v22 = v14 && (v16 & 1) != 0;
    Spectre::ComputeTriangleTangents(
      v12,
      a5,
      (const struct Spectre::Utils::Math::Vector2 *)v19,
      v20,
      v21,
      v22,
      a8,
      a9,
      v23);
    v16 = (unsigned int)(v15 + v16);
    ++v17;
    v10 = a3;
    v13 = a7;
    v12 = this;
  }
}
