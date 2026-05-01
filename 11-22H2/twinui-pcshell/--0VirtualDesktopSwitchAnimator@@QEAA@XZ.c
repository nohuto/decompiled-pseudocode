/*
 * XREFs of ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x18014795C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180147878 (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

VirtualDesktopSwitchAnimator *__fastcall VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(
        VirtualDesktopSwitchAnimator *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitchAnimator,IWeakReferenceSource,IVirtualDesktopSwitchAnimator2>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitchAnimator2>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopSwitchAnimator::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &VirtualDesktopSwitchAnimator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitchAnimator,IWeakReferenceSource,IVirtualDesktopSwitchAnimator2>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &VirtualDesktopSwitchAnimator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopSwitchAnimator2>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_WORD *)this + 76) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
