/*
 * XREFs of ??$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E0F34
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
void __fastcall Spectre::Framework::CalculateIndexedNormals<unsigned short>(
        Spectre *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6,
        _BOOL8 a7)
{
  __int64 v8; // r9
  Spectre *v10; // r11
  _QWORD *v11; // r10
  unsigned __int8 v12; // di
  int v13; // r15d
  __int64 v14; // rbx
  unsigned int v15; // r14d
  unsigned int v16; // esi
  unsigned __int64 v17; // rdx
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  char v20; // al
  struct Spectre::Utils::Math::Vector3 *v21; // [rsp+30h] [rbp-C8h]
  _QWORD v24[4]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-80h] BYREF

  v8 = a3;
  v10 = this;
  v11 = a6;
  if ( a5 == 1 )
  {
    v12 = 1;
    v13 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 3;
  }
  v14 = 0LL;
  v15 = 0;
  v16 = a4 - 2 * v12;
  while ( (unsigned int)v14 < v16 )
  {
    v17 = *(unsigned __int16 *)(v8 + 2 * v14);
    LODWORD(v21) = *(unsigned __int16 *)(v8 + 2 * v14);
    if ( (unsigned int)v21 >= a2
      || (v18 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 1)), v18 >= a2)
      || (v19 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 2)), v19 >= a2) )
    {
      std::string::string(v24, (__int64)"Index out of range while computing normals");
      Spectre::Framework::GeometryProcessingException::GeometryProcessingException(pExceptionObject, v24);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v11 )
    {
      if ( v15 == 100 * (v15 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 40LL))(*v11);
        v10 = this;
      }
      v17 = (unsigned int)v21;
    }
    v20 = v12 && (v14 & 1) != 0;
    Spectre::CalculateTriangleNormal(v10, (const struct Spectre::Utils::Math::Vector3 *)v17, v18, v19, v20, a7, v21);
    v14 = (unsigned int)(v13 + v14);
    ++v15;
    v8 = a3;
  }
}
