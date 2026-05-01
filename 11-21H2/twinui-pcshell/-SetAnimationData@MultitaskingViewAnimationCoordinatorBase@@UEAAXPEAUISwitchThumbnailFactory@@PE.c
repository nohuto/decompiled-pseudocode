/*
 * XREFs of ?SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804CA8D0
 * Callers:
 *     ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804B50C0 (-SetAnimationData@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationC.c)
 *     ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x1804B5650 (-SetAnimationData@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804B7E94 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewAnimationCoordinatorBase::SetAnimationData(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchThumbnailFactory *a2,
        struct IAnimatableMultitaskingViewFrame *a3,
        struct IDCompThumbnail *a4)
{
  struct IAnimatableMultitaskingViewFrame *v7; // rax
  struct IAnimatableMultitaskingViewFrame *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 4, (__int64)a2);
  v7 = (struct IAnimatableMultitaskingViewFrame *)*((_QWORD *)this + 5);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IAnimatableMultitaskingViewFrame *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct IAnimatableMultitaskingViewFrame *)*((_QWORD *)this + 5);
    }
    v8 = v7;
    *((_QWORD *)this + 5) = a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IDCompThumbnail>::operator=((__int64 *)this + 6, (__int64)a4);
}
