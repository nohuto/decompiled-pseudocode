/*
 * XREFs of sub_18009E6BC @ 0x18009E6BC
 * Callers:
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 * Callees:
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 */

char __fastcall sub_18009E6BC(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_18009E0D0(a1);
  return v2;
}
