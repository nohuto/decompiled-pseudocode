/*
 * XREFs of ZwSetSystemTime @ 0x14041EE40
 * Callers:
 *     sub_140627CD0 @ 0x140627CD0 (sub_140627CD0.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 *     sub_1409F8250 @ 0x1409F8250 (sub_1409F8250.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _disable();
  __readeflags();
  return sub_140433F80(SystemTime, PreviousTime);
}
