/*
 * XREFs of sub_14040D2E8 @ 0x14040D2E8
 * Callers:
 *     sub_140400CC0 @ 0x140400CC0 (sub_140400CC0.c)
 * Callees:
 *     sub_14040D7E0 @ 0x14040D7E0 (sub_14040D7E0.c)
 */

__int64 __fastcall sub_14040D2E8(__int64 a1, __int64 a2, unsigned int a3)
{
  return sub_14040D7E0(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), a3);
}
