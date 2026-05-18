/*
 * XREFs of ?ComputeTangents@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@V?$shared_ptr@UVector2@Math@Utils@Spectre@@@5@0IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@3V?$function@$$A6AXAEBV?$shared_ptr@UVector4@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E23E0
 * Callers:
 *     ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514 (-ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAXXZ @ 0x180085D14 (-_Tidy@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@st.c)
 *     ??0?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAA@_KAEBV?$allocator@UVector3@Math@Utils@Spectre@@@1@@Z @ 0x18008CD28 (--0-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@Q.c)
 *     ??$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1274 (--$CalculateIndexedTangents@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIQEBUVector2@3.c)
 *     ??$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@341@W4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@5@Z @ 0x1800E1450 (--$CalculateIndexedTangents@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIQEBUVector2@3.c)
 *     std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___ @ 0x1800E1AA8 (std--_Temporary_owner_del_Spectre--Utils--Math--Vector4____lambda_dc718d396f0c2d0078465762313bdc.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 *     ?CalculateNonIndexedTangents@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@4@Z @ 0x1800E1C74 (-CalculateNonIndexedTangents@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IQEBUVector2@452@W4T.c)
 *     ?FinalizeVertexTangents@Spectre@@YAXPEAUVector4@Math@Utils@1@IPEBUVector3@341@11_N@Z @ 0x1800E3210 (-FinalizeVertexTangents@Spectre@@YAXPEAUVector4@Math@Utils@1@IPEBUVector3@341@11_N@Z.c)
 *     Spectre::Framework::ValidateTopologyIndexCount @ 0x1800E341C (Spectre--Framework--ValidateTopologyIndexCount.c)
 *     Spectre::Framework::ValidateTopologyVertexCount @ 0x1800E34D4 (Spectre--Framework--ValidateTopologyVertexCount.c)
 *     Spectre::Framework::ValidateVertexCount @ 0x1800E358C (Spectre--Framework--ValidateVertexCount.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall Spectre::Framework::GeometryUtils::ComputeTangents(
        Spectre **a1,
        __int64 *a2,
        std::_Ref_count_base **a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        struct Spectre::Utils::Math::Vector3 *a11,
        __int64 a12)
{
  __int64 v12; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rcx
  std::_Ref_count_base *v21; // rcx
  __int64 v22; // rcx
  std::_Ref_count_base *v23; // rdi
  _DWORD *v24; // rax
  Spectre *v25; // rdi
  __int64 *v26; // r14
  std::_Ref_count_base *v27; // rcx
  std::_Ref_count_base *v28; // rcx
  std::_Ref_count_base *v29; // rcx
  std::_Ref_count_base *v30; // rcx
  std::_Ref_count_base *v31; // rcx
  std::_Ref_count_base *v32; // rcx
  std::_Ref_count_base *v33; // rcx
  __int64 v34; // rdx
  std::_Ref_count_base *v35; // rcx
  std::_Ref_count_base *v36; // rcx
  std::_Ref_count_base *v37; // rcx
  std::_Ref_count_base *v38; // rcx
  __int64 v39; // rcx
  const char *v40; // r8
  struct Spectre::Utils::Math::Vector3 *v41; // [rsp+28h] [rbp-C0h]
  bool v42; // [rsp+30h] [rbp-B8h]
  struct Spectre::Utils::Math::Vector3 *v43; // [rsp+50h] [rbp-98h]
  std::_Ref_count_base *v44[2]; // [rsp+58h] [rbp-90h] BYREF
  char v45; // [rsp+68h] [rbp-80h]
  Spectre *v46[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v47; // [rsp+80h] [rbp-68h]
  Spectre *v48; // [rsp+88h] [rbp-60h]
  _QWORD v49[3]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+A8h] [rbp-40h] BYREF
  const Spectre::Framework::GeometryProcessingException *v51; // [rsp+B8h] [rbp-30h] BYREF

  v12 = a4;
  if ( (unsigned __int8)Spectre::Framework::ValidateVertexCount(a4, "ComputeTangents") )
  {
    v23 = (std::_Ref_count_base *)_aligned_malloc(16 * v12, 0x10uLL);
    *(_OWORD *)v46 = 0LL;
    LOBYTE(a11) = 0;
    v44[0] = v23;
    v44[1] = (std::_Ref_count_base *)&a11;
    v24 = operator new(0x18uLL);
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_dc718d396f0c2d0078465762313bdcf6_>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    v46[0] = v23;
    v46[1] = (Spectre *)v24;
    v45 = 0;
    std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___((__int64)v44);
    if ( !v46[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset_0(v46[0], 0, 16 * v12);
    std::vector<Spectre::Utils::Math::Vector3>::vector<Spectre::Utils::Math::Vector3>(v49, (unsigned int)(2 * v12));
    v43 = (struct Spectre::Utils::Math::Vector3 *)v49[0];
    a11 = (struct Spectre::Utils::Math::Vector3 *)(v49[0] + 12 * v12);
    v25 = *a1;
    v48 = *a1;
    v47 = *a2;
    v44[0] = *a3;
    if ( a7 )
    {
      v26 = a5;
      if ( *a5 )
      {
        Spectre::Framework::ValidateTopologyIndexCount(a6, a8);
        Spectre::Framework::CalculateIndexedTangents<unsigned int>(
          v48,
          v12,
          *a5,
          a6,
          (const struct Spectre::Utils::Math::Vector3 *)v47,
          a8,
          (_QWORD *)a12,
          (_BOOL8)v43,
          a11);
      }
      else
      {
        Spectre::Framework::ValidateTopologyVertexCount((unsigned int)v12, a8);
        Spectre::Framework::CalculateNonIndexedTangents(
          v25,
          v12,
          (const struct Spectre::Utils::Math::Vector3 *)v47,
          a8,
          (_QWORD *)a12,
          (bool)v43,
          a11);
      }
    }
    else
    {
      try
      {
        Spectre::Framework::ValidateTopologyIndexCount(a6, a8);
        v26 = a5;
        Spectre::Framework::CalculateIndexedTangents<unsigned short>(
          v48,
          v12,
          *a5,
          a6,
          (const struct Spectre::Utils::Math::Vector3 *)v47,
          a8,
          (_QWORD *)a12,
          (_BOOL8)v43,
          a11);
      }
      catch ( Spectre::Utils::CancelledException )
      {
        throw;
      }
      catch ( const Spectre::Framework::GeometryProcessingException *v51 )
      {
        v40 = (char *)v51 + 16;
        if ( *((_QWORD *)v51 + 5) >= 0x10uLL )
          v40 = *(const char **)v40;
        Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v40);
        *(_OWORD *)v44 = 0LL;
        std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
          a10,
          (__int64)v44);
        if ( v44[1] )
          std::_Ref_count_base::_Decref(v44[1]);
        std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v49);
        if ( v46[1] )
          std::_Ref_count_base::_Decref(v46[1]);
        v30 = a1[1];
        if ( v30 )
          std::_Ref_count_base::_Decref(v30);
        v31 = (std::_Ref_count_base *)a2[1];
        if ( v31 )
          std::_Ref_count_base::_Decref(v31);
        v32 = a3[1];
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        v33 = (std::_Ref_count_base *)a5[1];
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
        v16 = a10;
        goto LABEL_13;
      }
      catch ( ... )
      {
        Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeTangents threw exception");
        *(_OWORD *)v44 = 0LL;
        std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(
          a10,
          (__int64)v44);
        if ( v44[1] )
          std::_Ref_count_base::_Decref(v44[1]);
        std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v49);
        if ( v46[1] )
          std::_Ref_count_base::_Decref(v46[1]);
        v35 = a1[1];
        if ( v35 )
          std::_Ref_count_base::_Decref(v35);
        v36 = (std::_Ref_count_base *)a2[1];
        if ( v36 )
          std::_Ref_count_base::_Decref(v36);
        v37 = a3[1];
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
        v38 = (std::_Ref_count_base *)a5[1];
        if ( v38 )
          std::_Ref_count_base::_Decref(v38);
        v16 = a10;
        v39 = *(_QWORD *)(a10 + 56);
        if ( v39 )
        {
          LOBYTE(v34) = v39 != a10;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 32LL))(v39, v34);
LABEL_56:
          *(_QWORD *)(v16 + 56) = 0LL;
        }
        return;
      }
    }
    LOBYTE(v41) = a9;
    Spectre::FinalizeVertexTangents(
      v46[0],
      (struct Spectre::Utils::Math::Vector4 *)(unsigned int)v12,
      (unsigned int)v44[0],
      v43,
      a11,
      v41,
      v42);
    v16 = a10;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a10, (__int64)v46);
    std::vector<Spectre::Utils::Math::Vector3>::_Tidy((__int64)v49);
    if ( v46[1] )
      std::_Ref_count_base::_Decref(v46[1]);
    v27 = a1[1];
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v28 = (std::_Ref_count_base *)a2[1];
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    v29 = a3[1];
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    v21 = (std::_Ref_count_base *)v26[1];
  }
  else
  {
    *(_OWORD *)v44 = 0LL;
    v16 = a10;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a10, (__int64)v44);
    if ( v44[1] )
      std::_Ref_count_base::_Decref(v44[1]);
    v18 = a1[1];
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    v19 = (std::_Ref_count_base *)a2[1];
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    v20 = a3[1];
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    v21 = (std::_Ref_count_base *)a5[1];
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
LABEL_13:
  v22 = *(_QWORD *)(v16 + 56);
  if ( !v22 )
    return;
  LOBYTE(v17) = v22 != v16;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v17);
  goto LABEL_56;
}
