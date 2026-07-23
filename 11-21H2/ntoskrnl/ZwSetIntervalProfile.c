/*
 * XREFs of ZwSetIntervalProfile @ 0x14041ECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Interval, *(_QWORD *)&Source);
}
