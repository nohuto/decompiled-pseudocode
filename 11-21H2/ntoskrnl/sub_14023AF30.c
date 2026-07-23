/*
 * XREFs of sub_14023AF30 @ 0x14023AF30
 * Callers:
 *     sub_14023AEE0 @ 0x14023AEE0 (sub_14023AEE0.c)
 *     sub_140524C30 @ 0x140524C30 (sub_140524C30.c)
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14023AF30(unsigned __int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)(8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = a2 & 0xFFFFFFFFFF000LL | (a3 != 0
                                                                                            ? 0x800000000000001BuLL
                                                                                            : 0x8000000000000003uLL);
  __invlpg((void *)a1);
  return a1;
}
