/*
 * XREFs of IpmiHwContextInitialized @ 0x14067778C
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406102FC (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x1406777A8 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140677CF4 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140677E48 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140677F60 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x140A07740 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x140A077D4 (WheaSelLogCheckPoint.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall IpmiHwContextInitialized(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
