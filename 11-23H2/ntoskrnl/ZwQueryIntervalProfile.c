/*
 * XREFs of ZwQueryIntervalProfile @ 0x14041DC50
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
  return KiServiceInternal(*(_QWORD *)&ProfileSource);
}
