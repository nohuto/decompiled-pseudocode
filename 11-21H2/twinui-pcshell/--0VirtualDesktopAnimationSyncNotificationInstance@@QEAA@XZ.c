/*
 * XREFs of ??0VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x18054D47C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x18054D364 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

VirtualDesktopAnimationSyncNotificationInstance *__fastcall VirtualDesktopAnimationSyncNotificationInstance::VirtualDesktopAnimationSyncNotificationInstance(
        VirtualDesktopAnimationSyncNotificationInstance *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopAnimationNotificationInstance>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopAnimationSyncNotificationInstance::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
