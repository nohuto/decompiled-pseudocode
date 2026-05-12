/*
 * XREFs of RaidRestartIoQueue @ 0x1C00194E0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C002205C (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C00351A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterResumeUnit @ 0x1C0037DAC (RaidAdapterResumeUnit.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A6A0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0060AD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidSetUnitPauseTimer @ 0x1C0060B90 (RaidSetUnitPauseTimer.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0061C50 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C00628E0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidNormalizeDeviceQueue @ 0x1C00195C4 (RaidNormalizeDeviceQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
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
