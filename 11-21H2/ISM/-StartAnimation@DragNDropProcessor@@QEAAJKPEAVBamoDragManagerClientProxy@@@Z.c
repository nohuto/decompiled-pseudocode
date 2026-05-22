/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801411F8
 * Callers:
 *     ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013AD40 (-StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClie.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C358 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA64 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18013EA54 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18013F3D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x180141558 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct InputSite *v5; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // rbx
  const char *v7; // r9
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rax
  struct tagPOINTF v12; // rcx
  struct tagPOINTF v13; // rdi
  __int64 (__fastcall *v14)(struct IAnimationDataProvider *, struct tagPOINTF *); // r12
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  struct tagPOINT PositionRelativeToSite; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  struct InputSite *v20; // rcx
  struct InputSite *v22; // rcx
  struct tagPOINTF v23; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct InputSite *v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v28; // [rsp+A8h] [rbp+58h] BYREF

  v27 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 14,
    &v26,
    (const unsigned __int8 *)&v27);
  v5 = v26;
  if ( v26 == *((struct InputSite **)this + 15)
    || *((struct BamoDragManagerClientProxy **)v26 + 4) != a3
    || !*((_QWORD *)v26 + 4) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1131LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v7);
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 4) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 46,
          &v28,
          (const unsigned __int8 *)&v27) == *((_QWORD *)this + 47) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                        + 24LL))(
      AnimationDataProvider,
      &v28,
      v10);
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 92,
            (__int64)&v23,
            (unsigned __int8 *)&v27);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v28);
    v12 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v12 + 8LL))(v12);
    }
  }
  v13 = *(struct tagPOINTF *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                           (float *)this + 92,
                                           (__int64)v24,
                                           (unsigned __int8 *)&v27)
                            + 24LL);
  v23 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINTF))&v13)(v13);
  v14 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 40LL);
  v28 = v13;
  if ( v13 )
    (***(void (__fastcall ****)(struct tagPOINTF))&v13)(v13);
  v15 = v14(AnimationDataProvider, &v28);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v28,
    (const unsigned __int8 *)&v27);
  v16 = *(_QWORD *)(*(_QWORD *)&v28 + 28LL);
  DragNDropProcessor::GetDragManagerInputSite(
    (__int64)this,
    (__int64 *)&v26,
    v16,
    *(_DWORD *)(*(_QWORD *)&v28 + 36LL),
    *((__int64 **)v5 + 4),
    0LL);
  if ( v26 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v26, (struct tagPOINT)v16);
    DragNDropProcessor::GetVelocityForPointerId(this, &v28, v27);
    DragNDropProcessor::FeedAnimationDataIfNeeded(this, v27, PositionRelativeToSite, v28, 0);
  }
  InputETW::DragNDrop::StartAnimationCallBack(v27, v8, v15);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL)
                                                                                       + 64LL))(
          *((_QWORD *)v5 + 4) + 8LL,
          v27,
          v8,
          v15);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v22 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v13 )
      (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v13 + 8LL))(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x486,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v18);
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v13 )
    (*(void (__fastcall **)(struct tagPOINTF))(**(_QWORD **)&v13 + 8LL))(v13);
  return v19;
}
