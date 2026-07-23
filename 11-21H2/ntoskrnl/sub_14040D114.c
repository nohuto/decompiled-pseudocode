/*
 * XREFs of sub_14040D114 @ 0x14040D114
 * Callers:
 *     sub_140400B5C @ 0x140400B5C (sub_140400B5C.c)
 * Callees:
 *     sub_14040D7E0 @ 0x14040D7E0 (sub_14040D7E0.c)
 */

__int64 __fastcall sub_14040D114(__int64 a1, __int64 a2, unsigned int a3)
{
  return sub_14040D7E0(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), (unsigned __int64)-(__int64)a3 >> 32);
}
