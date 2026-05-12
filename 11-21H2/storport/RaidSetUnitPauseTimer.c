/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C00029BC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C003E090 (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 */

char __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  int v3; // eax

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 1056), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1120));
  if ( (_BYTE)v3 )
  {
    v3 = RaidResumeUnitQueue(a1);
    if ( v3 )
      LOBYTE(v3) = RaidRestartIoQueue(a1, 0LL);
  }
  return v3;
}
