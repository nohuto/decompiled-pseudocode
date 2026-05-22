/*
 * XREFs of ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180146B18
 * Callers:
 *     ?StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801439E0 (-StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResiz.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E7A2C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C358 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA64 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180144064 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x18014525C (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x180146E98 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ResizeProcessor::StartAnimation(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT v5; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // rbx
  const char *v7; // r9
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  struct tagPOINT v12; // rcx
  struct tagPOINT v13; // rdi
  __int64 (__fastcall *v14)(struct IAnimationDataProvider *, struct tagPOINT *); // r14
  unsigned __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int128 *v19; // r8
  float *v20; // rax
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-48h]
  struct tagPOINT v25; // [rsp+40h] [rbp-40h]
  _BYTE v26[16]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v27[16]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v28[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tagPOINT v30; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+58h]

  v31 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v30,
    (const unsigned __int8 *)&v31);
  v5 = v30;
  if ( v30 == *((_QWORD *)this + 4)
    || *(struct BamoResizeControllerClientProxy **)(*(_QWORD *)&v30 + 24LL) != a3
    || !*(_QWORD *)(*(_QWORD *)&v30 + 24LL) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      318LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
      v7);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 37,
          &v30,
          (const unsigned __int8 *)&v31) == *((_QWORD *)this + 38) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                       + 24LL))(
      AnimationDataProvider,
      &v30,
      v10);
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 74,
            (__int64)v26,
            (unsigned __int8 *)&v31);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v30);
    v12 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v12 + 8LL))(v12);
    }
  }
  v13 = *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                          (float *)this + 74,
                                          (__int64)v27,
                                          (unsigned __int8 *)&v31)
                           + 24LL);
  v25 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINT))&v13)(v13);
  v14 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *))(*(_QWORD *)AnimationDataProvider
                                                                                     + 40LL);
  v30 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINT))&v13)(v13);
  v15 = v14(AnimationDataProvider, &v30);
  v24 = v15;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 11,
    &v30,
    (const unsigned __int8 *)&v31);
  if ( v30 != *((_QWORD *)this + 12) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)&v30 + 24LL);
    v32 = v17;
    v30.x = 0;
    v30.y = 0;
    if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
            (_QWORD *)this + 21,
            &v23,
            (const unsigned __int8 *)&v31) != *((_QWORD *)this + 22) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                     (float *)this + 42,
                                     (__int64)v26,
                                     (unsigned __int8 *)&v31)
                      + 20LL);
      v23 = v18;
      v19 = (__int128 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                      (float *)this + 42,
                                      (__int64)v28,
                                      (unsigned __int8 *)&v31)
                       + 28LL);
      v30 = (struct tagPOINT)_mm_unpacklo_ps(
                               (__m128)COERCE_UNSIGNED_INT((float)(int)v17),
                               (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v32))).m128_u64[0];
      v20 = (float *)CInputTransform::ScreenPointToRelative((__int64)v26, (float *)&v30, v19);
      v30.x = (int)*v20 - v18;
      v30.y = (int)v20[1] - HIDWORD(v23);
      v15 = v24;
    }
    ResizeProcessor::FeedAnimationDataIfNeeded(this, v31, v30);
    InputETW::Resize::StartAnimationCallBack(v31, v8, v15);
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL)
                                                                                         + 56LL))(
            *(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL,
            v31,
            v8,
            v15);
    v16 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x161,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_19;
    }
    if ( v13 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v13 + 8LL))(v13);
    return 0LL;
  }
  v16 = 0;
LABEL_19:
  if ( v13 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v13 + 8LL))(v13);
  return v16;
}
