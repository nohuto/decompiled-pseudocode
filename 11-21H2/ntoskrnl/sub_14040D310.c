/*
 * XREFs of sub_14040D310 @ 0x14040D310
 * Callers:
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 * Callees:
 *     sub_14040D4B0 @ 0x14040D4B0 (sub_14040D4B0.c)
 */

__int64 __fastcall sub_14040D310(int a1, int a2, int a3, __int64 a4)
{
  return sub_14040D4B0(a1, a2, a3, (int)a4 + 32, *(_DWORD *)(a4 + 4));
}
