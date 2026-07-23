/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14061084C
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406106EC (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140677CDC (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140C2CC00 |= 4u;
  return result;
}
