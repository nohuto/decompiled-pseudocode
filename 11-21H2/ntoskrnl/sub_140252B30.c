/*
 * XREFs of sub_140252B30 @ 0x140252B30
 * Callers:
 *     sub_140252B00 @ 0x140252B00 (sub_140252B00.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140252B30(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rbx

  v1 = a1;
  sub_14042A5E0(992LL, *((unsigned int *)a1 + 1));
  LODWORD(v1) = *v1 | 0x30000;
  sub_14042A5E0(896LL, 0xFFFFFFFFLL);
  sub_14042A5E0(800LL, (unsigned int)v1);
  return 0LL;
}
