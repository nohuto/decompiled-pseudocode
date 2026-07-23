/*
 * XREFs of IovDeleteDevice @ 0x140AC1684
 * Callers:
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
