/*
 * XREFs of IoStopTimer @ 0x1403DDEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DDF0C @ 0x1403DDF0C (sub_1403DDF0C.c)
 */

void __stdcall IoStopTimer(PDEVICE_OBJECT DeviceObject)
{
  sub_1403DDF0C(DeviceObject->Timer);
}
