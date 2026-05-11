/*
 * XREFs of IsDevicePoweredUp @ 0x1C0029498
 * Callers:
 *     PinAddPinToList @ 0x1C00020DC (PinAddPinToList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 536LL) == 1;
}
