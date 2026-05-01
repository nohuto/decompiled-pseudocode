/*
 * XREFs of ?PersistedStateRestored@VirtualDesktopTabletModePolicy@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1801818A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopTabletModePolicy::PersistedStateRestored(
        VirtualDesktopTabletModePolicy *this,
        struct IVirtualDesktop *a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, char *); // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 24) == 1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)this + 10, (__int64)a2);
    v3 = *((_QWORD *)this + 7);
    v4 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 368LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
    v5 = v4(v3, (char *)this + 88);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)(unsigned int)v5);
  }
}
