/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1C0043C6C
 * Callers:
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C007BE60 (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007CFF0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_UnregisterComponent()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C006CD28 )
    v1 = qword_1C006CD28();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}
