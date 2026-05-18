/*
 * XREFs of ??$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E10D4
 * Callers:
 *     ?ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@V?$function@$$A6AXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2070 (-ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800E1A7C (--0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z @ 0x1800E1ED8 (-CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Framework::CalculateIndexedNormals<unsigned int>(
        Spectre *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6,
        _BOOL8 a7)
{
  Spectre *v9; // r11
  _QWORD *v10; // r9
  unsigned __int8 v11; // di
  int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned int v15; // esi
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  char v19; // al
  struct Spectre::Utils::Math::Vector3 *v20; // [rsp+30h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-B0h]
  _QWORD v23[4]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-80h] BYREF

  v22 = a3;
  v9 = this;
  v10 = a6;
  if ( a5 == 1 )
  {
    v11 = 1;
    v12 = 1;
  }
  else
  {
    v11 = 0;
    v12 = 3;
  }
  v13 = 0LL;
  v14 = 0;
  v15 = a4 - 2 * v11;
  while ( (unsigned int)v13 < v15 )
  {
    v16 = *(_DWORD *)(a3 + 4 * v13);
    LODWORD(v20) = v16;
    v17 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v13 + 1));
    v18 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v13 + 2));
    if ( v16 >= a2 || v17 >= a2 || v18 >= a2 )
    {
      std::string::string(v23, (__int64)"Index out of range while computing normals");
      Spectre::Framework::GeometryProcessingException::GeometryProcessingException(pExceptionObject, v23);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v10 && v14 == 100 * (v14 / 0x64) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 40LL))(*v10);
      v16 = (unsigned int)v20;
      v9 = this;
    }
    v19 = v11 && (v13 & 1) != 0;
    Spectre::CalculateTriangleNormal(v9, (const struct Spectre::Utils::Math::Vector3 *)v16, v17, v18, v19, a7, v20);
    v13 = (unsigned int)(v12 + v13);
    ++v14;
    a3 = v22;
    v10 = a6;
  }
}
