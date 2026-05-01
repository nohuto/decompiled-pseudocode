/*
 * XREFs of ??0CVirtualDesktopVisibilityPolicy@@QEAA@XZ @ 0x18019B2F8
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@@Z @ 0x18019B264 (--$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@D.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

CVirtualDesktopVisibilityPolicy *__fastcall CVirtualDesktopVisibilityPolicy::CVirtualDesktopVisibilityPolicy(
        CVirtualDesktopVisibilityPolicy *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopVisibilityPolicy>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualDesktopVisibilityPolicy::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
