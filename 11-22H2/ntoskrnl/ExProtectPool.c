/*
 * XREFs of ExProtectPool @ 0x14060791C
 * Callers:
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140296D3C (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
