/*
 * XREFs of ??$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1624
 * Callers:
 *     ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910 (-ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800E1A7C (--0GeometryProcessingException@Framework@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z @ 0x1800E1ED8 (-CalculateTriangleNormal@Spectre@@YAXPEBUVector3@Math@Utils@1@III_NPEAU2341@@Z.c)
 *     ?ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z @ 0x1800E2ED0 (-ComputeTriangleTangents@Spectre@@YAXPEBUVector3@Math@Utils@1@PEBUVector2@341@III_NPEAU2341@3@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Framework::CalculateIndexedTangentsAndNormals<unsigned short>(
        Spectre *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        const struct Spectre::Utils::Math::Vector3 *a5,
        int a6,
        _QWORD *a7,
        _BOOL8 a8,
        _BOOL8 a9,
        struct Spectre::Utils::Math::Vector3 *a10)
{
  __int64 v11; // r9
  Spectre *v13; // r11
  _QWORD *v14; // r10
  unsigned __int8 v15; // si
  __int64 v16; // rbx
  unsigned int v17; // r13d
  unsigned int v18; // ebp
  unsigned int v19; // edx
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  char v22; // di
  struct Spectre::Utils::Math::Vector3 *v23; // [rsp+30h] [rbp-E8h]
  struct Spectre::Utils::Math::Vector3 *v24; // [rsp+40h] [rbp-D8h]
  _QWORD v27[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v11 = a3;
  v13 = this;
  v14 = a7;
  if ( a6 == 1 )
  {
    v15 = 1;
    HIDWORD(v24) = 1;
  }
  else
  {
    v15 = 0;
    HIDWORD(v24) = 3;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = a4 - 2 * v15;
  while ( (unsigned int)v16 < v18 )
  {
    v19 = *(unsigned __int16 *)(v11 + 2 * v16);
    LODWORD(v24) = v19;
    if ( v19 >= a2
      || (v20 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 1)), v20 >= a2)
      || (v21 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 2)), v21 >= a2) )
    {
      std::string::string(v27, (__int64)"Index out of range while computing tangents and normals");
      Spectre::Framework::GeometryProcessingException::GeometryProcessingException(pExceptionObject, v27);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v14 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 40LL))(*v14);
        v13 = this;
      }
      v19 = (unsigned int)v24;
    }
    v22 = v15 && (v16 & 1) != 0;
    Spectre::ComputeTriangleTangents(
      v13,
      a5,
      (const struct Spectre::Utils::Math::Vector2 *)v19,
      v20,
      v21,
      v22,
      a9,
      a10,
      v24);
    Spectre::CalculateTriangleNormal(
      this,
      (const struct Spectre::Utils::Math::Vector3 *)(unsigned int)v24,
      v20,
      v21,
      v22,
      a8,
      v23);
    v16 = (unsigned int)(HIDWORD(v24) + v16);
    ++v17;
    v11 = a3;
    v14 = a7;
  }
}
