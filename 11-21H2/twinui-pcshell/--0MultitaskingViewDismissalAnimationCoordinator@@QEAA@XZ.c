/*
 * XREFs of ??0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x1804B3A98
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B541C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$SnapAssistViewAnimationCoordinatorB.c)
 * Callees:
 *     ??0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x1804B390C (--0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

MultitaskingViewDismissalAnimationCoordinator *__fastcall MultitaskingViewDismissalAnimationCoordinator::MultitaskingViewDismissalAnimationCoordinator(
        MultitaskingViewDismissalAnimationCoordinator *this)
{
  MultitaskingViewAnimationCoordinatorBase::MultitaskingViewAnimationCoordinatorBase(this);
  *((_BYTE *)this + 192) = 0;
  *(_QWORD *)this = &MultitaskingViewDismissalAnimationCoordinator::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 22) = &SnapAssistViewAnimationCoordinatorBase<MultitaskingViewDismissalAnimationCoordinator>::`vftable';
  return this;
}
