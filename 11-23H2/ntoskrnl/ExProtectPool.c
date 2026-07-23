/*
 * XREFs of ExProtectPool @ 0x140607DFC
 * Callers:
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402970EC (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
