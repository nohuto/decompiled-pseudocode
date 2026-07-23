/*
 * XREFs of sub_1405D00BC @ 0x1405D00BC
 * Callers:
 *     sub_140549A48 @ 0x140549A48 (sub_140549A48.c)
 * Callees:
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 */

__int64 __fastcall sub_1405D00BC(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = sub_140A4DC74(
             a1,
             a2,
             a3,
             *(_DWORD *)(a1 + 252)
           + 2
           + *(_DWORD *)(a1 + 248)
           + (unsigned int)((4 * (unsigned __int64)(unsigned int)dword_140C23724 + 4095) >> 12));
  *(_DWORD *)(a1 + 252) += a3;
  return result;
}
