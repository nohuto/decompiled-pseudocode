/*
 * XREFs of HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C007902C
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0075A50 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C0078B7C (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     SleepstudyHelper_UnregisterComponent @ 0x1C0042348 (SleepstudyHelper_UnregisterComponent.c)
 */

__int64 __fastcall HUBFDO_UnregisterSleepstudyBlockerReasons(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[327] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[327] = 0LL;
  }
  if ( a1[328] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[328] = 0LL;
  }
  if ( a1[329] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[329] = 0LL;
  }
  return result;
}
