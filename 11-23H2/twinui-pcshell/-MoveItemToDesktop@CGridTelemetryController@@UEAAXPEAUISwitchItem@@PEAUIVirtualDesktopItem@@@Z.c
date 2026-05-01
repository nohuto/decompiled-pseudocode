/*
 * XREFs of ?MoveItemToDesktop@CGridTelemetryController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x18058A4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::MoveItemToDesktop(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        struct IVirtualDesktopItem *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *, struct IVirtualDesktopItem *))(*(_QWORD *)v3 + 72LL))(
      v3,
      a2,
      a3);
}
