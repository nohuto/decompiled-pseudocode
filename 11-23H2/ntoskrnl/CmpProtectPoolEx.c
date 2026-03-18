/*
 * XREFs of CmpProtectPoolEx @ 0x140296E44
 * Callers:
 *     HvpProtectBinPartial @ 0x14070AFE0 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140296E5C (ExProtectPoolEx.c)
 */

__int64 CmpProtectPoolEx()
{
  return ExProtectPoolEx();
}
