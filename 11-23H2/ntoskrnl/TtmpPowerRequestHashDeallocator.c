/*
 * XREFs of TtmpPowerRequestHashDeallocator @ 0x1409A57B0
 * Callers:
 *     TtmpInsertPowerRequestToSession @ 0x1409A5468 (TtmpInsertPowerRequestToSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpPowerRequestHashDeallocator(void *a1)
{
  ExFreePoolWithTag(a1, 0x52507454u);
}
