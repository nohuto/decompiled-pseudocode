/*
 * XREFs of sub_180057320 @ 0x180057320
 * Callers:
 *     sub_180056F70 @ 0x180056F70 (sub_180056F70.c)
 *     sub_180057870 @ 0x180057870 (sub_180057870.c)
 *     sub_1800E7865 @ 0x1800E7865 (sub_1800E7865.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

__int64 __fastcall sub_180057320(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B988(v1);
  return result;
}
