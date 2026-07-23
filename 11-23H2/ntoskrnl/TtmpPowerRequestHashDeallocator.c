/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409A59B0
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5668 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
