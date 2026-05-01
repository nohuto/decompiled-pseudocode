/*
 * XREFs of ?MoveItemToNewDesktop@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804D2B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::MoveItemToNewDesktop(CGridTelemetryController *this, struct ISwitchItem *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v2 + 80LL))(v2, a2);
}
