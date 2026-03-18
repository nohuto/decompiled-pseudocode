/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406102FC
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061019C (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x14067778C (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140C2CC40 |= 4u;
  return result;
}
