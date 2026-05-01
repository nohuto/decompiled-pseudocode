/*
 * XREFs of ??0CVirtualDesktopSwitcherService@@QEAA@XZ @ 0x180102C78
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180103754 (--$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

CVirtualDesktopSwitcherService *__fastcall CVirtualDesktopSwitcherService::CVirtualDesktopSwitcherService(
        CVirtualDesktopSwitcherService *this)
{
  *(_QWORD *)this = &CPinnedList::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>::`vftable'{for `IVirtualDesktopSwitcherService'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopSwitcherInvoker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualDesktopSwitcherService::`vftable';
  *((_QWORD *)this + 3) = &CVirtualDesktopSwitcherService::`vftable'{for `IVirtualDesktopSwitcherService'};
  *((_QWORD *)this + 4) = &CVirtualDesktopSwitcherService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopSwitcherInvoker>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
