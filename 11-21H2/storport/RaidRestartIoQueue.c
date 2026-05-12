/*
 * XREFs of RaidRestartIoQueue @ 0x1C0009220
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C00029BC (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0002A08 (RaidAdapterResumeUnit.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C000C35C (StorPortUnitActiveConditionStep2.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C0020478 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C0034588 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C00390D0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0054168 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0054F40 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C0055B50 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     StorSubmitIoGatewayItem @ 0x1C00062BC (StorSubmitIoGatewayItem.c)
 *     RaidNormalizeDeviceQueue @ 0x1C0009308 (RaidNormalizeDeviceQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1, char a2)
{
  KIRQL v4; // bp
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v4 = KfRaiseIrql(2u);
  }
  v6 = RaidNormalizeDeviceQueue(a1 + 656);
  v7 = v6;
  if ( v6 && !StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 664), v6, &v9) )
  {
    LOBYTE(v8) = a2;
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *, __int64))(a1 + 648))(*(_QWORD *)(a1 + 640), v7 - 120, &v9, v8);
  }
  if ( !v5 )
    KeLowerIrql(v4);
}
