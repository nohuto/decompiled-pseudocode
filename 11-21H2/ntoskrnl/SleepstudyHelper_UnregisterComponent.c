/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1405DFE00
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x14025B380 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  return SleepstudyHelperDestroyBlocker(a1);
}
