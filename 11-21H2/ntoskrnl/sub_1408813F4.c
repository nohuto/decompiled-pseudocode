/*
 * XREFs of sub_1408813F4 @ 0x1408813F4
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 * Callees:
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 */

__int64 __fastcall sub_1408813F4(ULONG_PTR a1, unsigned int a2, __int64 a3, void *Src)
{
  return sub_140657670(a1, a2, a3, a2 >> 31, Src, 0, (unsigned int *)(a3 + 44));
}
