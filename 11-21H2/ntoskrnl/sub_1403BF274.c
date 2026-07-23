/*
 * XREFs of sub_1403BF274 @ 0x1403BF274
 * Callers:
 *     sub_1403BF1EC @ 0x1403BF1EC (sub_1403BF1EC.c)
 * Callees:
 *     sub_1403BF630 @ 0x1403BF630 (sub_1403BF630.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BF274(__int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (MEMORY[0xFFFFF6FFFFFFE000] & 1) != 0 )
    return 3221225485LL;
  MEMORY[0xFFFFF6FFFFFFE000] = a1 & 0xFFFFFFFFFF000LL | 0x8000000000000003uLL;
  _InterlockedOr(v2, 0);
  memset((void *)0xFFFFFFFFFFC00000LL, 0, 0x1000uLL);
  MEMORY[0xFFFFF6FFFFFFE000] = 0LL;
  sub_1403BF630();
  return 0LL;
}
