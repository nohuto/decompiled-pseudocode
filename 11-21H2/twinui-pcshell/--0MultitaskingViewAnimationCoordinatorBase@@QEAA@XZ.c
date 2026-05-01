/*
 * XREFs of ??0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x1804B390C
 * Callers:
 *     ??0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x1804B3988 (--0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 *     ??0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x1804B3A98 (--0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

MultitaskingViewAnimationCoordinatorBase *__fastcall MultitaskingViewAnimationCoordinatorBase::MultitaskingViewAnimationCoordinatorBase(
        MultitaskingViewAnimationCoordinatorBase *this)
{
  MultitaskingViewAnimationCoordinatorBase *result; // rax

  *(_QWORD *)this = &MultitaskingViewAnimationCoordinatorBase::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &MultitaskingViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 31LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  memset_0((char *)this + 104, 0, 0x40uLL);
  result = this;
  *((_WORD *)this + 84) = 0;
  return result;
}
