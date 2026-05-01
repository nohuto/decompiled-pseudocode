/*
 * XREFs of ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804D7A08
 * Callers:
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804D770C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted @ 0x1804D79F0 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486__ea_1804D79F0.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D82F0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804D6C7C (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804D6E68 (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1804D7548 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804D7C44 (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ElementDragData::FinishDrag(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-41h]
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v18[24]; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  int v22; // [rsp+E0h] [rbp+77h] BYREF
  int v23; // [rsp+E4h] [rbp+7Bh]
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v17);
  v21 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, &v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v4 = 0;
  if ( a2 != -1 )
    v4 = a2;
  v24 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  *(_DWORD *)(a1 + 504) = 3;
  *(_DWORD *)(a1 + 88) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 440LL))(
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 24),
    v4);
  if ( v4 == 2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 464LL))(*(_QWORD *)(a1 + 40));
  }
  else if ( *(_DWORD *)(a1 + 108) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 200LL))(*(_QWORD *)(a1 + 40), a1 + 92);
  }
  v13 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v14 = v4;
  if ( v4 - 1 > 1 )
  {
    v5 = *(__int64 **)(a1 + 48);
    v6 = *v5;
    v21 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 48))(v5, &v21);
    v15 = 0LL;
    ElementDragData::GetDragSourceLocation((ElementDragData *)a1, (struct Geometry::CRect *)&v15);
    v7 = *(_DWORD *)(a1 + 60) + DWORD1(v15);
    v22 = v15 + *(_DWORD *)(a1 + 56);
    v23 = v7;
    v9 = ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
           a1,
           (__int64)&v22,
           v8,
           (__int64)&v13);
    v10 = retaddr;
    if ( v9 >= 0 )
      goto LABEL_15;
    v11 = 341LL;
    goto LABEL_14;
  }
  v12 = 4LL;
  if ( v4 != 1 )
    v12 = 0LL;
  v9 = ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(a1, v12, (__int64)&v13);
  v10 = retaddr;
  if ( v9 < 0 )
  {
    v11 = 323LL;
LABEL_14:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v9);
    lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()((unsigned int *)&v13);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v17);
}
