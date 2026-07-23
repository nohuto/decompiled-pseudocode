/*
 * XREFs of ZwQueryIntervalProfile @ 0x14041E260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&ProfileSource, Interval);
}
