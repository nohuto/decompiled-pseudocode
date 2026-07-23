/*
 * XREFs of sub_1403A3710 @ 0x1403A3710
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 */

__int64 __fastcall sub_1403A3710(__int64 a1)
{
  *(_DWORD *)(a1 + 104) = (unsigned __int16)(sub_1403A340C(a1) + *(_WORD *)(a1 + 20));
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
