/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x1C0014920
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Interrupter_InterruptEnable @ 0x1C0013C78 (Interrupter_InterruptEnable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  __int64 v3; // rcx
  __int64 v5; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061310);
  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v1 + 8));
  Interrupter_InterruptEnable(v1);
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v3 + 588) == 1 )
  {
    v5 = *(_QWORD *)(v3 + 128);
    if ( *(_QWORD *)(v5 + 40) == v1 )
      Interrupter_InterruptEnable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v2 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(v1 + 8));
  return 0LL;
}
