/*
 * XREFs of ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x180112D58
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x18011242C (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

VirtualDesktopSwitchAnimator *__fastcall VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(
        VirtualDesktopSwitchAnimator *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator>::`vftable'{for `IVirtualDesktopSwitchAnimator'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopSwitchAnimator::`vftable';
  *((_QWORD *)this + 1) = &VirtualDesktopSwitchAnimator::`vftable'{for `IVirtualDesktopSwitchAnimator'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
