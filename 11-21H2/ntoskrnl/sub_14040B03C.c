/*
 * XREFs of sub_14040B03C @ 0x14040B03C
 * Callers:
 *     sub_140400D88 @ 0x140400D88 (sub_140400D88.c)
 * Callees:
 *     sub_14040D780 @ 0x14040D780 (sub_14040D780.c)
 */

__int64 __fastcall sub_14040B03C(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_14040D780(a1 + 32, a2 + 32, a3 + 32, *(unsigned int *)(a3 + 4));
}
