/*
 * XREFs of ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804B5650
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804CA8D0 (-SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PE.c)
 */

void __fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::SetAnimationData(
        MultitaskingViewAnimationCoordinatorBase *a1,
        struct ISwitchThumbnailFactory *a2,
        struct IAnimatableMultitaskingViewFrame *a3,
        struct IDCompThumbnail *a4)
{
  int v6; // eax
  RECT rc; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  MultitaskingViewAnimationCoordinatorBase::SetAnimationData(a1, a2, a3, a4);
  v6 = (*(__int64 (__fastcall **)(struct IAnimatableMultitaskingViewFrame *, RECT *))(*(_QWORD *)a3 + 88LL))(a3, &rc);
  if ( v6 >= 0 )
    *((_QWORD *)a1 + 27) = MonitorFromRect(&rc, 0);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\SnapAssistViewAnimationCoordinatorBase.h",
      (const char *)(unsigned int)v6);
}
