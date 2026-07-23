/*
 * XREFs of sub_14040C4E0 @ 0x14040C4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404116B0 @ 0x1404116B0 (sub_1404116B0.c)
 *     sub_140412770 @ 0x140412770 (sub_140412770.c)
 */

__int64 __fastcall sub_14040C4E0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  sub_1404116B0(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return sub_140412770(a1, a5, a4);
}
