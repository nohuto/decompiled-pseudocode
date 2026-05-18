/*
 * XREFs of ?ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@V?$function@$$A6AXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2070
 * Callers:
 *     ?ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z @ 0x180047FEC (-ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20 (-Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ.c)
 *     ??$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E0F34 (--$CalculateIndexedNormals@G@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBGIW4TriangularMe.c)
 *     ??$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMeshTopology@GeometryUtils@01@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU2341@@Z @ 0x1800E10D4 (--$CalculateIndexedNormals@I@Framework@Spectre@@YAXQEBUVector3@Math@Utils@1@IQEBIIW4TriangularMe.c)
 *     std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___ @ 0x1800E1AA8 (std--_Temporary_owner_del_Spectre--Utils--Math--Vector4____lambda_dc718d396f0c2d0078465762313bdc.c)
 *     ??R?$_Func_class@XAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@1@PEAX@Z @ 0x1800E1AD0 (--R-$_Func_class@XAEBV-$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@std@@QEBAXAEBV-$share.c)
 *     ?CalculateNonIndexedNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IW4TriangularMeshTopology@GeometryUtils@12@AEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@QEAU3452@@Z @ 0x1800E1B98 (-CalculateNonIndexedNormals@Framework@Spectre@@YAXQEBUVector3@Math@Utils@2@IW4TriangularMeshTopo.c)
 *     Spectre::Framework::ValidateTopologyIndexCount @ 0x1800E341C (Spectre--Framework--ValidateTopologyIndexCount.c)
 *     Spectre::Framework::ValidateTopologyVertexCount @ 0x1800E34D4 (Spectre--Framework--ValidateTopologyVertexCount.c)
 *     Spectre::Framework::ValidateVertexCount @ 0x1800E358C (Spectre--Framework--ValidateVertexCount.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Framework::GeometryUtils::ComputeNormals(
        Spectre **a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  std::_Ref_count_base *v11; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  std::_Ref_count_base *v16; // rcx
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // rcx
  std::_Ref_count_base *v19; // r15
  _DWORD *v20; // rax
  Spectre *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v26; // rcx
  __int64 v27; // rdx
  std::_Ref_count_base *v28; // rcx
  std::_Ref_count_base *v29; // rcx
  __int64 v30; // rcx
  const char *v31; // r8
  std::_Ref_count_base *v32[2]; // [rsp+40h] [rbp-78h] BYREF
  const Spectre::Framework::GeometryProcessingException *v33; // [rsp+50h] [rbp-68h] BYREF
  std::_Ref_count_base *v34[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-40h] BYREF
  char v37; // [rsp+88h] [rbp-30h]

  v11 = (std::_Ref_count_base *)a2;
  if ( (unsigned __int8)Spectre::Framework::ValidateVertexCount(a2, "ComputeNormals") )
  {
    v32[0] = v11;
    v19 = (std::_Ref_count_base *)_aligned_malloc(12LL * (_QWORD)v11, 0x10uLL);
    *(_OWORD *)v34 = 0LL;
    a8 = 0;
    v36[0] = v19;
    v36[1] = &a8;
    v20 = operator new(0x18uLL);
    if ( v20 )
    {
      v20[2] = 1;
      v20[3] = 1;
      *(_QWORD *)v20 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_eee906239c744569acc5ea6e5be29b09_>::`vftable';
      *((_QWORD *)v20 + 2) = v19;
    }
    v34[0] = v19;
    v34[1] = (std::_Ref_count_base *)v20;
    v37 = 0;
    std::_Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::__Temporary_owner_del_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___((__int64)v36);
    if ( !v19 )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset_0(v19, 0, 12LL * (_QWORD)v11);
    try
    {
      v21 = *a1;
      if ( a5 )
      {
        if ( *a3 )
        {
          Spectre::Framework::ValidateTopologyIndexCount(a4, a6);
          Spectre::Framework::CalculateIndexedNormals<unsigned int>(
            v21,
            (unsigned int)v11,
            *a3,
            a4,
            a6,
            (_QWORD *)a9,
            (_BOOL8)v34[0]);
        }
        else
        {
          Spectre::Framework::ValidateTopologyVertexCount((unsigned int)v11, a6);
          Spectre::Framework::CalculateNonIndexedNormals(v21, (int)v11, a6, (_QWORD *)a9, (bool)v34[0]);
        }
      }
      else
      {
        Spectre::Framework::ValidateTopologyIndexCount(a4, a6);
        Spectre::Framework::CalculateIndexedNormals<unsigned short>(
          v21,
          (unsigned int)v11,
          *a3,
          a4,
          a6,
          (_QWORD *)a9,
          (_BOOL8)v34[0]);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v33 )
    {
      v31 = (char *)v33 + 16;
      if ( *((_QWORD *)v33 + 5) >= 0x10uLL )
        v31 = *(const char **)v31;
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, v31);
      *(_OWORD *)v32 = 0LL;
      std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a7, (__int64)v32);
      if ( v32[1] )
        std::_Ref_count_base::_Decref(v32[1]);
      if ( v34[1] )
        std::_Ref_count_base::_Decref(v34[1]);
      v25 = a1[1];
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      v26 = (std::_Ref_count_base *)a3[1];
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
      v13 = a7;
      goto LABEL_9;
    }
    catch ( ... )
    {
      Trace::LevelSettingsWrapper::Output(&gTraceLevelsGeometryUtils, 3, "ComputeNormals threw unexpected exception");
      *(_OWORD *)v32 = 0LL;
      std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a7, (__int64)v32);
      if ( v32[1] )
        std::_Ref_count_base::_Decref(v32[1]);
      if ( v34[1] )
        std::_Ref_count_base::_Decref(v34[1]);
      v28 = a1[1];
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      v29 = (std::_Ref_count_base *)a3[1];
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      v13 = a7;
      v30 = *(_QWORD *)(a7 + 56);
      if ( v30 )
      {
        LOBYTE(v27) = v30 != a7;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v27);
LABEL_40:
        *(_QWORD *)(v13 + 56) = 0LL;
      }
      return;
    }
    if ( (_DWORD)v11 )
    {
      v22 = 0LL;
      do
      {
        Spectre::Utils::Math::Vector3::Normalize((std::_Ref_count_base *)((char *)v34[0] + v22));
        v22 = v23 + 12;
      }
      while ( v24 != 1 );
    }
    v13 = a7;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a7, (__int64)v34);
    v15 = v34[1];
  }
  else
  {
    *(_OWORD *)v32 = 0LL;
    v13 = a7;
    std::_Func_class<void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::operator()(a7, (__int64)v32);
    v15 = v32[1];
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v16 = a1[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v17 = (std::_Ref_count_base *)a3[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
LABEL_9:
  v18 = *(_QWORD *)(v13 + 56);
  if ( !v18 )
    return;
  LOBYTE(v14) = v18 != v13;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v14);
  goto LABEL_40;
}
