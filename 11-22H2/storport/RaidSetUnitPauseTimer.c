/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C0060B90
 * Callers:
 *     RaidAdapterPauseUnit @ 0x1C0036A6C (RaidAdapterPauseUnit.c)
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 */

void __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  if ( KeSetCoalescableTimer((PKTIMER)(a1 + 1112), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1176)) )
  {
    if ( (unsigned int)RaidResumeUnitQueue(a1) )
      RaidRestartIoQueue(a1, 0);
  }
}
