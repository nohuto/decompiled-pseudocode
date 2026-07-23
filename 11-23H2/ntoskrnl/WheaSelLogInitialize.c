/*
 * XREFs of WheaSelLogInitialize @ 0x140B5320C
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406106EC (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x140677CF8 (IpmiHwInitializeContext.c)
 *     WheaSelLogCheckPoint @ 0x140A07A64 (WheaSelLogCheckPoint.c)
 */

__int64 __fastcall WheaSelLogInitialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  WheaIpmiContextLock = 0LL;
  result = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(result + 3704) )
  {
    result = IpmiHwInitializeContext();
    if ( (int)result >= 0 )
    {
      result = (__int64)WheaSelLogSetNtSchedulerAvailability(v3);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x80000) != 0 )
        return WheaSelLogCheckPoint();
    }
  }
  return result;
}
