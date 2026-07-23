/*
 * XREFs of CmpProtectPoolEx @ 0x1402970D4
 * Callers:
 *     HvpProtectBinPartial @ 0x14070B1F0 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402970EC (ExProtectPoolEx.c)
 */

__int64 CmpProtectPoolEx()
{
  return ExProtectPoolEx();
}
