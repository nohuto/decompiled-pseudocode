/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064331C
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140643104 (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406528CC (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140C10CC0 |= 4u;
  return result;
}
