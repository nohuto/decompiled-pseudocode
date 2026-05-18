/*
 * XREFs of ?ComputeTangentsAndNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2910
 * Callers:
 *     ?ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x1800481C0 (-ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXXZ @ 0x180085D14 (-_Tidy@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@st.c)
 *     ??0?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAA@_KAEBV?$allocator@UVector3@Math@Utils@Spectre@@@1@@Z @ 0x18008CD28 (--0-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@Q.c)
 *     ??$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1624 (--$CalculateIndexedTangentsAndNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEB.c)
 *     ??$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@55@Z @ 0x1800E1840 (--$CalculateIndexedTangentsAndNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEB.c)
 *     std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___ @ 0x1800E1AA8 (std--_Temporary_owner_del_Spectre--Utils--Math--Vector4____lambda_dc718d396f0c2d0078465762313bdc.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@2@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@1@AEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1B18 (--R-$_Func_class@XAEBV-$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@AEBV-$shared_ptr@UVector3@.c)
 *     ?CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@44@Z @ 0x1800E1D90 (-CalculateNonIndexedeTangentsAndNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVect.c)
 *     ?FinalizeVertexTangents@Spectre@@YAXPEAUVector4@Math@Utils@1@IPEBUVector3@341@11_N@Z @ 0x1800E3210 (-FinalizeVertexTangents@Spectre@@YAXPEAUVector4@Math@Utils@1@IPEBUVector3@341@11_N@Z.c)
 *     Spectre::Framework::ValidateTopologyIndexCount @ 0x1800E341C (Spectre--Framework--ValidateTopologyIndexCount.c)
 *     Spectre::Framework::ValidateTopologyVertexCount @ 0x1800E34D4 (Spectre--Framework--ValidateTopologyVertexCount.c)
 *     Spectre::Framework::ValidateVertexCount @ 0x1800E358C (Spectre--Framework--ValidateVertexCount.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
void Spectre::Framework::GeometryUtils::ComputeTangentsAndNormals(
        Spectre **a1,
        const struct Spectre::Utils::Math::Vector3 **a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        ...)
{
  __int64 v10; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  std::_Ref_count_base *v16; // rcx
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx
  __int64 v19; // rcx
  Spectre *v20; // r15
  _DWORD *v21; // rax
  std::_Ref_count_base *v22; // r15
  _DWORD *v23; // rax
  Spectre *v24; // rsi
  const struct Spectre::Utils::Math::Vector3 *v25; // r15
  std::_Ref_count_base *v26; // rcx
  std::_Ref_count_base *v27; // rcx
  std::_Ref_count_base *v28; // rcx
  __int64 v29; // rdx
  std::_Ref_count_base *v30; // rcx
  std::_Ref_count_base *v31; // rcx
  std::_Ref_count_base *v32; // rcx
  __int64 v33; // rcx
  const char *v34; // r8
  struct Spectre::Utils::Math::Vector3 *v35; // [rsp+28h] [rbp-110h]
  bool v36; // [rsp+30h] [rbp-108h]
  size_t Size[2]; // [rsp+50h] [rbp-E8h] BYREF
  std::_Ref_count_base *v38[2]; // [rsp+60h] [rbp-D8h] BYREF
  struct Spectre::Utils::Math::Vector3 *v39; // [rsp+70h] [rbp-C8h]
  size_t v40[2]; // [rsp+78h] [rbp-C0h] BYREF
  char v41; // [rsp+88h] [rbp-B0h]
  Spectre *v42[2]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v43[3]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v45[2]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v46[2]; // [rsp+D8h] [rbp-60h] BYREF
  char v47; // [rsp+E8h] [rbp-50h]
  const Spectre::Framework::GeometryProcessingException *v48; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+188h] [rbp+50h] BYREF
  va_list va; // [rsp+188h] [rbp+50h]
  __int64 v54; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v52 = va_arg(va1, _QWORD);
  v54 = va_arg(va1, _QWORD);
  v10 = a3;
  if ( (unsigned __int8)Spectre::Framework::ValidateVertexCount(a3, "ComputeTangentsAndNormals") )
  {
    Size[0] = 16 * v10;
    v20 = (Spectre *)_aligned_malloc(16 * v10, 0x10uLL);
    *(_OWORD *)v42 = 0LL;
    LOBYTE(v52) = 0;
    v40[0] = (size_t)v20;
    va_copy((va_list)&v40[1], va);
    v21 = operator new(0x18uLL);
    if ( v21 )
    {
      v21[2] = 1;
      v21[3] = 1;
      *(_QWORD *)v21 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_96ffd31a4081c2af17eae963fb5dd7cc_>::`vftable';
      *((_QWORD *)v21 + 2) = v20;
    }
    else
    {
      v21 = 0LL;
    }
    v42[0] = v20;
    v42[1] = (Spectre *)v21;
    v41 = 0;
    std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___((__int64)v40);
    if ( !v42[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset_0(v42[0], 0, Size[0]);
    std::vector<Spectre::Utils::Math::Vector3>::vector<Spectre::Utils::Math::Vector3>(v43, (unsigned int)(2 * v10));
    Size[0] = v43[0];
    v40[0] = 12 * v10;
    v39 = (struct Spectre::Utils::Math::Vector3 *)(12 * v10 + v43[0]);
    v22 = (std::_Ref_count_base *)_aligned_malloc(12 * v10, 0x10uLL);
    *(_OWORD *)v38 = 0LL;
    LOBYTE(v52) = 0;
    v46[0] = v22;
    va_copy((va_list)&v46[1], va);
    v23 = operator new(0x18uLL);
    if ( v23 )
    {
      v23[2] = 1;
      v23[3] = 1;
      *(_QWORD *)v23 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_fdb7222a856e1b31897eb021985012a7_>::`vftable';
      *((_QWORD *)v23 + 2) = v22;
    }
    else
    {
      v23 = 0LL;
    }
    v38[0] = v22;
    v38[1] = (std::_Ref_count_base *)v23;
    v47 = 0;
    std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___((__int64)v46);
    if ( !v22 )
    {
      v45[1] = "bad allocation";
      v45[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)v45;
    }
    memset_0(v22, 0, v40[0]);
    v24 = *a1;
    v25 = *a2;
    try
    {
      if ( a6 )
      {
        if ( *a4 )
        {
          Spectre::Framework::ValidateTopologyIndexCount(a5, a7);
          Spectre::Framework::CalculateIndexedTangentsAndNormals<unsigned int>(
            v24,
            v10,
            *a4,
            a5,
            v25,
            a7,
            (_QWORD *)v54,
            (_BOOL8)v38[0],
            Size[0],
            v39);
        }
        else
        {
          Spectre::Framework::ValidateTopologyVertexCount((unsigned int)v10, a7);
          Spectre::Framework::CalculateNonIndexedeTangentsAndNormals(
            v24,
            v10,
            v25,
            a7,
            (_QWORD *)v54,
            (bool)v38[0],
            (struct Spectre::Utils::Math::Vector3 *)Size[0],
            v39);
        }
      }
      else
      {
        Spectre::Framework::ValidateTopologyIndexCount(a5, a7);
        Spectre::Framework::CalculateIndexedTangentsAndNormals<unsigned short>(
          v24,
          v10,
          *a4,
          a5,
          v25,
          a7,
          (_QWORD *)v54,
          (_BOOL8)v38[0],
          Size[0],
          v39);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v48 )
    {
      v34 = (char *)v48 + 16;
      if ( *((_QWORD *)v48 + 5) >= 0x10uLL )
        v34 = *(const char **)v34;
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v34);
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v40 = 0LL;
      std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
        a9,
        (__int64)v40,
        (__int64)Size);
      if ( v40[1] )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v40[1]);
      if ( Size[1] )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)Size[1]);
      if ( v38[1] )
        std::_Ref_count_base::_Decref(v38[1]);
      std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v43);
      if ( v42[1] )
        std::_Ref_count_base::_Decref(v42[1]);
      v26 = a1[1];
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      v27 = a2[1];
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      v28 = (std::_Ref_count_base *)a4[1];
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      v13 = a9;
      goto LABEL_13;
    }
    catch ( ... )
    {
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeTangentsAndNormals threw exception");
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v40 = 0LL;
      std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
        a9,
        (__int64)v40,
        (__int64)Size);
      if ( v40[1] )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v40[1]);
      if ( Size[1] )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)Size[1]);
      if ( v38[1] )
        std::_Ref_count_base::_Decref(v38[1]);
      std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v43);
      if ( v42[1] )
        std::_Ref_count_base::_Decref(v42[1]);
      v30 = a1[1];
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      v31 = a2[1];
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      v32 = (std::_Ref_count_base *)a4[1];
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      v13 = a9;
      v33 = *(_QWORD *)(a9 + 56);
      if ( v33 )
      {
        LOBYTE(v29) = v33 != a9;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 32LL))(v33, v29);
LABEL_57:
        *(_QWORD *)(v13 + 56) = 0LL;
      }
      return;
    }
    LOBYTE(v35) = a8;
    Spectre::FinalizeVertexTangents(
      v42[0],
      (struct Spectre::Utils::Math::Vector4 *)(unsigned int)v10,
      (unsigned int)v38[0],
      (const struct Spectre::Utils::Math::Vector3 *)Size[0],
      v39,
      v35,
      v36);
    v13 = a9;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
      a9,
      (__int64)v42,
      (__int64)v38);
    if ( v38[1] )
      std::_Ref_count_base::_Decref(v38[1]);
    std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v43);
    v15 = v42[1];
  }
  else
  {
    *(_OWORD *)Size = 0LL;
    *(_OWORD *)v40 = 0LL;
    v13 = a9;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
      a9,
      (__int64)v40,
      (__int64)Size);
    if ( v40[1] )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v40[1]);
    v15 = (std::_Ref_count_base *)Size[1];
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v16 = a1[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v17 = a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v18 = (std::_Ref_count_base *)a4[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
LABEL_13:
  v19 = *(_QWORD *)(v13 + 56);
  if ( !v19 )
    return;
  LOBYTE(v14) = v19 != v13;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v14);
  goto LABEL_57;
}
