/*
 * XREFs of ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AFD0
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013AD40 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClie.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C358 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA64 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149788 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149A84 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z @ 0x18014B328 (-StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgyProcessor::StartAnimation(
        EdgyProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v5; // r14
  struct IAnimationDataProvider *AnimationDataProvider; // rbx
  const char *v7; // r9
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(struct IAnimationDataProvider *, __int64 *); // rsi
  unsigned __int64 v15; // r13
  struct tagPOINT v16; // rbx
  struct InputSite *v17; // rsi
  struct tagPOINT PositionRelativeToSite; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v27; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 44,
    &v25,
    (const unsigned __int8 *)&v26);
  v5 = v25;
  if ( v25 == *((_QWORD *)this + 45)
    || *(struct BamoDragManagerClientProxy **)(v25 + 32) != a3
    || !*(_QWORD *)(v25 + 32) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      806LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      v7);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 19,
          &v25,
          (const unsigned __int8 *)&v26) == *((_QWORD *)this + 20) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
      AnimationDataProvider,
      &v25,
      v10);
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 38,
            (__int64)&v22,
            (unsigned __int8 *)&v26);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v25);
    v12 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                 (float *)this + 38,
                                 (__int64)v23,
                                 (unsigned __int8 *)&v26)
                  + 24LL);
  v22 = v13;
  if ( v13 )
    (**(void (__fastcall ***)(__int64))v13)(v13);
  v14 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, __int64 *))(*(_QWORD *)AnimationDataProvider + 40LL);
  v25 = v13;
  if ( v13 )
    (**(void (__fastcall ***)(__int64))v13)(v13);
  v15 = v14(AnimationDataProvider, &v25);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v25,
    (const unsigned __int8 *)&v26);
  v16 = *(struct tagPOINT *)(v25 + 20);
  v25 = *(_QWORD *)(v5 + 48);
  v17 = (struct InputSite *)v25;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v25);
  if ( v17 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v17, v16);
    EdgyProcessor::GetVelocityForPointerId(this, &v27, v26);
    EdgyProcessor::FeedAnimationDataIfNeeded(this, v26, PositionRelativeToSite, v27, 0);
  }
  InputETW::Edgy::StartAnimationCallBack(v26, v8, v15);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL)
                                                                                       + 64LL))(
          *(_QWORD *)(v5 + 32) + 8LL,
          v26,
          v8,
          v15);
  v20 = v19;
  if ( v19 >= 0 )
  {
    if ( v17 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x340,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
    (const char *)(unsigned int)v19);
  if ( v17 )
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  return v20;
}
