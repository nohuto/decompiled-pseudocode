/*
 * XREFs of ?SwitchItemDragEnded@CGridTelemetryController@@UEAAXXZ @ 0x18058A530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::SwitchItemDragEnded(CGridTelemetryController *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1);
}
