/*
 * XREFs of sub_14040C740 @ 0x14040C740
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040B4A4 @ 0x14040B4A4 (sub_14040B4A4.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 */

__int64 __fastcall sub_14040C740(__int64 a1, __int64 a2, __int64 a3)
{
  sub_14040B4A4(a2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 4), a3);
  return sub_14040CE04(a1, a3, a2);
}
