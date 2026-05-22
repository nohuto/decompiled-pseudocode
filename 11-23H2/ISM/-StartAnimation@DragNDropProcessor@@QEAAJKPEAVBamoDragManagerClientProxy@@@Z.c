/*
 * XREFs of ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801600F8
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8 (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B544 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CBD4 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x18015DA2C (-FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18015DDB0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18015E2DC (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x180160410 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801BB75C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DragNDropProcessor::StartAnimation(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct InputSite *v5; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  const char *v7; // r9
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD); // rbx
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, struct tagPOINTF *); // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  struct tagPOINT PositionRelativeToSite; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  struct InputSite *v19; // rcx
  struct InputSite *v21; // rcx
  __int64 v22[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct InputSite *v25; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINTF v27; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 14,
    &v25,
    (const unsigned __int8 *)&v26);
  v5 = v25;
  if ( v25 == *((struct InputSite **)this + 15)
    || *((struct BamoDragManagerClientProxy **)v25 + 4) != a3
    || !*((_QWORD *)v25 + 4) )
  {
    return 0LL;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v8 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x47F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
      v7);
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 4) + 32LL) + 16LL);
  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 32);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 46,
          &v27,
          (const unsigned __int8 *)&v26) == *((_QWORD *)this + 47) )
  {
    (*(void (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *, _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                        + 24LL))(
      AnimationDataProvider,
      &v27,
      v10);
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
            (float *)this + 92,
            (__int64)v22,
            (unsigned __int8 *)&v26);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)(*(_QWORD *)v11 + 24LL), &v27);
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v27);
  }
  v12 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Try_emplace<unsigned long const &,>(
                                                       (float *)this + 92,
                                                       (__int64)v23,
                                                       (unsigned __int8 *)&v26)
                                        + 24LL);
  v22[0] = (__int64)v12;
  if ( v12 )
    (**v12)(v12);
  v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, struct tagPOINTF *))(*(_QWORD *)AnimationDataProvider
                                                                                      + 40LL);
  v27 = (struct tagPOINTF)v12;
  if ( v12 )
    (**v12)(v12);
  v14 = v13(AnimationDataProvider, &v27);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v27,
    (const unsigned __int8 *)&v26);
  v15 = *(_QWORD *)(*(_QWORD *)&v27 + 28LL);
  DragNDropProcessor::GetDragManagerInputSite(
    (__int64)this,
    (__int64 *)&v25,
    v15,
    *(_DWORD *)(*(_QWORD *)&v27 + 36LL),
    *((__int64 **)v5 + 4),
    0LL);
  if ( v25 )
  {
    PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v25, (struct tagPOINT)v15);
    DragNDropProcessor::GetVelocityForPointerId(this, &v27, v26);
    DragNDropProcessor::FeedAnimationDataIfNeeded(this, v26, PositionRelativeToSite, v27, 0);
  }
  InputETW::DragNDrop::StartAnimationCallBack(v26, v8, v14);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL)
                                                                                       + 64LL))(
          *((_QWORD *)v5 + 4) + 8LL,
          v26,
          v8,
          v14);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(v22);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)(unsigned int)v17);
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(v22);
  return v18;
}
