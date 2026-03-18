/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1405A36A0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1403B5110 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  return SleepstudyHelperDestroyBlocker(a1);
}
