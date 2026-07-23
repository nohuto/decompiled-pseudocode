/*
 * XREFs of sub_1402538D0 @ 0x1402538D0
 * Callers:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 * Callees:
 *     sub_14027466C @ 0x14027466C (sub_14027466C.c)
 */

__int64 __fastcall sub_1402538D0(__int64 a1, __int64 a2)
{
  return sub_14027466C(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
