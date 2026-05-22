/*
 * XREFs of ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801698E0
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8 (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B544 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CBD4 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x1801680F0 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x1801683D4 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z @ 0x180169BE0 (-StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801BB75C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgyProcessor::StartAnimation(
        EdgyProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v5; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  const char *v7; // r9
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r12
  unsigned __int64 v14; // r12
  struct tagPOINT v15; // rbx
  struct InputSite *v16; // rdi
  struct tagPOINT PositionRelativeToSite; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  struct tagPOINTF v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void (__fastcall ***v23)(_QWORD); // [rsp+80h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+48h] BYREF
  void (__fastcall ***v25)(_QWORD); // [rsp+98h] [rbp+58h] BYREF

  v24 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 44,
    &v23,
    (const unsigned __int8 *)&v24);
  v5 = (__int64)v23;
  if ( v23 == *((void (__fastcall ****)(_QWORD))this + 45) || v23[4] != (void (__fastcall **)(_QWORD))a3 || !v23[4] )
    return 0LL;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x329,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
      v7);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 19,
          &v23,
          (const unsigned __int8 *)&v24) == *((_QWORD *)this + 20) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
      AnimationDataProvider,
      &v23,
      v10);
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 38,
            (__int64)&v21,
            (unsigned __int8 *)&v24);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v23);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v23);
  }
  v12 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                       (float *)this + 38,
                                                       (__int64)&v21,
                                                       (unsigned __int8 *)&v24)
                                        + 24LL);
  v25 = v12;
  if ( v12 )
    (**v12)(v12);
  v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider
                                                                                                  + 40LL);
  v23 = v12;
  if ( v12 )
    (**v12)(v12);
  v14 = v13(AnimationDataProvider, &v23);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v23,
    (const unsigned __int8 *)&v24);
  v15 = *(struct tagPOINT *)((char *)v23 + 20);
  v23 = *(void (__fastcall ****)(_QWORD))(v5 + 48);
  v16 = (struct InputSite *)v23;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v23);
  if ( v16 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v16, v15);
    EdgyProcessor::GetVelocityForPointerId(this, &v21, v24);
    EdgyProcessor::FeedAnimationDataIfNeeded(this, v24, PositionRelativeToSite, v21, 0);
  }
  InputETW::Edgy::StartAnimationCallBack(v24, v8, v14);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL)
                                                                                       + 64LL))(
          *(_QWORD *)(v5 + 32) + 8LL,
          v24,
          v8,
          v14);
  v19 = v18;
  if ( v18 >= 0 )
  {
    if ( v16 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v25);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x343,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
    (const char *)(unsigned int)v18);
  if ( v16 )
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v16 + 16LL))(v16);
  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v25);
  return v19;
}
