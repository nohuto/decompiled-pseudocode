/*
 * XREFs of sub_14040B064 @ 0x14040B064
 * Callers:
 *     sub_140400DA0 @ 0x140400DA0 (sub_140400DA0.c)
 * Callees:
 *     sub_14040B65C @ 0x14040B65C (sub_14040B65C.c)
 */

__int64 __fastcall sub_14040B064(__int64 a1, __int64 a2, __int64 a3)
{
  return sub_14040B65C(a1 + 32, a2, a3 + 32, *(unsigned int *)(a3 + 4));
}
