/*
 * XREFs of UsbhBusIfLocationReference @ 0x1C004C050
 * Callers:
 *     UsbhBusifGetLocationInterface @ 0x1C004C31C (UsbhBusifGetLocationInterface.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1184));
  _InterlockedIncrement(result + 855);
  return result;
}
