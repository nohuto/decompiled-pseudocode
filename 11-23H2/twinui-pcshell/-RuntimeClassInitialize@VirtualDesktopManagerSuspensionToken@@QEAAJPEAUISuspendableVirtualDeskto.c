/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDesktopManager@@@Z @ 0x1806034F0
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x1805FCE84 (--$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManage.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopManagerSuspensionToken::RuntimeClassInitialize(
        VirtualDesktopManagerSuspensionToken *this,
        struct ISuspendableVirtualDesktopManager *a2)
{
  struct ISuspendableVirtualDesktopManager *v4; // r8
  __int64 v5; // rcx

  v4 = (struct ISuspendableVirtualDesktopManager *)*((_QWORD *)this + 6);
  if ( v4 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ISuspendableVirtualDesktopManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, struct ISuspendableVirtualDesktopManager *, struct ISuspendableVirtualDesktopManager *))(*(_QWORD *)v5 + 16LL))(
        v5,
        a2,
        a2);
      v4 = (struct ISuspendableVirtualDesktopManager *)*((_QWORD *)this + 6);
    }
  }
  (*(void (__fastcall **)(struct ISuspendableVirtualDesktopManager *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  return 0LL;
}
