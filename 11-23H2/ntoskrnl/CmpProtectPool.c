/*
 * XREFs of CmpProtectPool @ 0x14036DFD4
 * Callers:
 *     HvpFreeBin @ 0x1407E9C28 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402970EC (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
