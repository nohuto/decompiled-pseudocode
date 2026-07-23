/*
 * XREFs of sub_14040C3E0 @ 0x14040C3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040B4A4 @ 0x14040B4A4 (sub_14040B4A4.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 */

__int64 __fastcall sub_14040C3E0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  sub_14040B4A4(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return sub_14040CE04(a1, a5, a4);
}
