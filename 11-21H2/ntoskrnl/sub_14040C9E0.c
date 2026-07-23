/*
 * XREFs of sub_14040C9E0 @ 0x14040C9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040B5F0 @ 0x14040B5F0 (sub_14040B5F0.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 */

__int64 __fastcall sub_14040C9E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_14040B5F0(a2, *(_DWORD *)(a1 + 4), a4);
  return sub_14040CE04(a1, a4, a3);
}
