/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C001F5B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F708 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r8
  int v6; // ecx
  int v7; // r8d
  KIRQL v8; // bl

  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      a3,
      **(_QWORD **)(a1 + 4896),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
  {
    LOBYTE(v5) = 1;
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, v5);
  }
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v8 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1, 0LL);
    KeLowerIrql(v8);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v6,
        (unsigned int)&EventAdapterActiveConditionStop,
        v7,
        **(_QWORD **)(a1 + 4896),
        *(_DWORD *)(a1 + 56),
        a2);
  }
}
