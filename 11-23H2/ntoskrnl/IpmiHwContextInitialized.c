/*
 * XREFs of IpmiHwContextInitialized @ 0x140677CDC
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14061084C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x140677CF8 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140678244 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140678398 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x1406784B0 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x140A079D0 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x140A07A64 (WheaSelLogCheckPoint.c)
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
