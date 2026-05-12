/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C001F670
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001F708 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d

  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 4896),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 4896) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 4896), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0092A02 & 0x10) != 0 )
      return McTemplateK0pqq_EtwWriteTransfer(
               v6,
               (unsigned int)&EventAdapterIdleConditionStop,
               v7,
               **(_QWORD **)(a1 + 4896),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
