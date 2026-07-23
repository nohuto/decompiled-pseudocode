/*
 * XREFs of sub_14091D24C @ 0x14091D24C
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 */

__int64 __fastcall sub_14091D24C(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return sub_14069F2B4((char *)(a1 + 16));
}
