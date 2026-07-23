/*
 * XREFs of sub_14040D2C4 @ 0x14040D2C4
 * Callers:
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_140400E04 @ 0x140400E04 (sub_140400E04.c)
 * Callees:
 *     sub_14040D478 @ 0x14040D478 (sub_14040D478.c)
 */

__int64 __fastcall sub_14040D2C4(__int64 a1, unsigned int a2)
{
  return sub_14040D478(a1 + 32, *(unsigned int *)(a1 + 4), a2);
}
