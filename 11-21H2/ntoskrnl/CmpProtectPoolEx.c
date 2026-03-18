/*
 * XREFs of CmpProtectPoolEx @ 0x140248E20
 * Callers:
 *     HvpProtectBinPartial @ 0x1406C9BF4 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140367008 (ExProtectPoolEx.c)
 */

__int64 CmpProtectPoolEx()
{
  return ExProtectPoolEx();
}
