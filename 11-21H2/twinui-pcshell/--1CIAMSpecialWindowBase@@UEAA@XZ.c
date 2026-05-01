/*
 * XREFs of ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1800D452C
 * Callers:
 *     ??1CFallbackWindow@@UEAA@XZ @ 0x18017A448 (--1CFallbackWindow@@UEAA@XZ.c)
 *     ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x18017E450 (--_GCIAMSpecialWindow@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802EDDBC (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCI_ea_1802EDDBC.c)
 *     ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1802EDE10 (--_GCIAMSpecialWindowBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CIAMSpecialWindowBase::~CIAMSpecialWindowBase(CIAMSpecialWindowBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CIAMSpecialWindowBase::`vftable';
  DestroyWindow(*((HWND *)this + 2));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
