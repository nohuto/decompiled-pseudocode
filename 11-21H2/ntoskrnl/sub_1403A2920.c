/*
 * XREFs of sub_1403A2920 @ 0x1403A2920
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A343C @ 0x1403A343C (sub_1403A343C.c)
 */

__int64 __fastcall sub_1403A2920(__int64 a1)
{
  __int64 v2; // rdx

  v2 = *(_DWORD *)(a1 + 112) & 7;
  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  else
    *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 88) = sub_1403A343C(a1, v2);
  *(_DWORD *)(a1 + 108) = sub_1403A3060(a1, 0LL);
  return 1LL;
}
