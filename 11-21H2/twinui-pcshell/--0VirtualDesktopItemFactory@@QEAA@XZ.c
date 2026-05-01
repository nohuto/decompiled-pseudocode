/*
 * XREFs of ??0VirtualDesktopItemFactory@@QEAA@XZ @ 0x1804A8A58
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1804A89C4 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopMan.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

VirtualDesktopItemFactory *__fastcall VirtualDesktopItemFactory::VirtualDesktopItemFactory(
        VirtualDesktopItemFactory *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemFactory>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopItemFactory::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
