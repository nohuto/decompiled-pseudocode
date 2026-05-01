/*
 * XREFs of ?NotifyDismissalPolicy@XamlLauncherState@@UEAAXPEAUIStartDismissalPolicy@@@Z @ 0x1801BB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::NotifyDismissalPolicy(XamlLauncherState *this, struct IStartDismissalPolicy *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IStartDismissalPolicy **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IStartDismissalPolicy *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  }
}
