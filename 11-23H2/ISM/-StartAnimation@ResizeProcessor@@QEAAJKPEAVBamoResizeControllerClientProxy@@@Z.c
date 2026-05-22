/*
 * XREFs of ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180165464
 * Callers:
 *     ?StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x180162660 (-StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResiz.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8 (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x18010081C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B544 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CBD4 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180162D90 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x180163F08 (-FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x1801657A0 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ResizeProcessor::StartAnimation(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT v5; // rdi
  unsigned int v6; // r14d
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  const char *v8; // r9
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // r13d
  __int64 v12; // rax
  void (__fastcall ***v13)(_QWORD); // rbx
  __int64 (__fastcall *v14)(struct IAnimationDataProvider *, struct tagPOINT *); // r13
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int128 *v18; // r8
  float *v19; // rax
  int v20; // eax
  int v21; // ebx
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]
  _BYTE v25[16]; // [rsp+48h] [rbp-38h] BYREF
  char v26[16]; // [rsp+58h] [rbp-28h] BYREF
  char v27[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tagPOINT v29; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp+48h] BYREF
  void (__fastcall ***v31)(_QWORD); // [rsp+D8h] [rbp+58h] BYREF

  v30 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v29,
    (const unsigned __int8 *)&v30);
  v5 = v29;
  if ( v29 != *((_QWORD *)this + 4) && *(struct BamoResizeControllerClientProxy **)(*(_QWORD *)&v29 + 24LL) == a3 )
  {
    v6 = 0;
    if ( *(_QWORD *)(*(_QWORD *)&v29 + 24LL) )
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v9 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
      if ( !v9 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          v8);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 32LL) + 16LL);
      v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10) + 32);
      if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
              (_QWORD *)this + 37,
              &v29,
              (const unsigned __int8 *)&v30) == *((_QWORD *)this + 38) )
      {
        (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                           + 24LL))(
          AnimationDataProvider,
          &v29,
          v11);
        v12 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                (float *)this + 74,
                (__int64)v25,
                (unsigned __int8 *)&v30);
        Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v12 + 24LL), &v29);
        Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v29);
      }
      v13 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                           (float *)this + 74,
                                                           (__int64)v26,
                                                           (unsigned __int8 *)&v30)
                                            + 24LL);
      v31 = v13;
      if ( v13 )
        (**v13)(v13);
      v14 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINT *))(*(_QWORD *)AnimationDataProvider
                                                                                         + 40LL);
      v29 = (struct tagPOINT)v13;
      if ( v13 )
        (**v13)(v13);
      v15 = v14(AnimationDataProvider, &v29);
      v24 = v15;
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        (_QWORD *)this + 11,
        &v29,
        (const unsigned __int8 *)&v30);
      if ( v29 == *((_QWORD *)this + 12) )
        goto LABEL_17;
      v16 = *(_QWORD *)(*(_QWORD *)&v29 + 24LL);
      v29 = 0LL;
      if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
              (_QWORD *)this + 21,
              &v23,
              (const unsigned __int8 *)&v30) != *((_QWORD *)this + 22) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                       (float *)this + 42,
                                       (__int64)v25,
                                       (unsigned __int8 *)&v30)
                        + 20LL);
        v23 = v17;
        v18 = (__int128 *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                                        (float *)this + 42,
                                        (__int64)v27,
                                        (unsigned __int8 *)&v30)
                         + 28LL);
        v29 = (struct tagPOINT)_mm_unpacklo_ps(
                                 (__m128)COERCE_UNSIGNED_INT((float)(int)v16),
                                 (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v16))).m128_u64[0];
        v19 = (float *)CInputTransform::ScreenPointToRelative((__int64)v25, (float *)&v29, v18);
        v29.x = (int)*v19 - v17;
        v29.y = (int)v19[1] - HIDWORD(v23);
        v15 = v24;
      }
      ResizeProcessor::FeedAnimationDataIfNeeded(this, v30, v29);
      InputETW::Resize::StartAnimationCallBack(v30, v9, v15);
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL)
                                                                                           + 56LL))(
              *(_QWORD *)(*(_QWORD *)&v5 + 24LL) + 8LL,
              v30,
              v9,
              v15);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x161,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
          (const char *)(unsigned int)v20);
        v6 = v21;
LABEL_17:
        Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v31);
        return v6;
      }
      Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v31);
    }
  }
  return 0LL;
}
