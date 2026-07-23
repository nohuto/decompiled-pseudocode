/*
 * XREFs of TtmpPowerRequestHashAllocator @ 0x1409A598C
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5668 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmpPowerRequestHashAllocator(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1381004372LL);
}
