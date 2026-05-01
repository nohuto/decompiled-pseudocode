/*
 * XREFs of ?FinishAnimateVisibleSwitchItem@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUIDCompThumbnail@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804CB350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::FinishAnimateVisibleSwitchItem(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompThumbnail *a3,
        struct IUIAnimationStoryboardEventHandler2 *a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64 *, struct IDCompThumbnail *))(*(_QWORD *)a2 + 24LL))(
                   a2,
                   &v10,
                   a3);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct IUIAnimationStoryboardEventHandler2 *))(*(_QWORD *)*v5 + 504LL))(
         *v5,
         v6,
         0LL,
         a4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
