/*
 * XREFs of ZwSetTimerResolution @ 0x14041EEC0
 * Callers:
 *     sub_14025D2C4 @ 0x14025D2C4 (sub_14025D2C4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&DesiredTime, SetResolution);
}
