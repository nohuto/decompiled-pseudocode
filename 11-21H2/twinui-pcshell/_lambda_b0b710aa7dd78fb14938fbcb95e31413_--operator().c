/*
 * XREFs of _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1804D7548
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804D6C7C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804D7A08 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x1804D8060 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864_ea_1804D8060.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1804D8C4C (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(unsigned int *a1)
{
  __int64 v2[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v3[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v4[24]; // [rsp+50h] [rbp-38h] BYREF
  int v5; // [rsp+68h] [rbp-20h]
  __int64 v6; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(*(_QWORD *)a1 + 184LL),
    (wil::ActivityThreadWatcher *)v3);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v2, &v6, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 448LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 40LL),
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    a1[2]);
  MultitaskingViewTelemetry::DragSwitchItem::Stop(
    (MultitaskingViewTelemetry::DragSwitchItem *)(*(_QWORD *)a1 + 184LL),
    a1[2]);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v2);
  if ( v5 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v3);
}
