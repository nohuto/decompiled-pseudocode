/*
 * XREFs of sub_1C0015A74 @ 0x1C0015A74
 * Callers:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C00157F4 @ 0x1C00157F4 (sub_1C00157F4.c)
 *     sub_1C0015B08 @ 0x1C0015B08 (sub_1C0015B08.c)
 *     sub_1C0036C8C @ 0x1C0036C8C (sub_1C0036C8C.c)
 *     sub_1C0063F90 @ 0x1C0063F90 (sub_1C0063F90.c)
 * Callees:
 *     sub_1C0015AA8 @ 0x1C0015AA8 (sub_1C0015AA8.c)
 *     sub_1C0015AD8 @ 0x1C0015AD8 (sub_1C0015AD8.c)
 */

__int64 sub_1C0015A74()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // r9d

  if ( (unsigned int)sub_1C0015AD8() )
    return 1LL;
  LOBYTE(v2) = (unsigned int)sub_1C0015AA8(v1, v0) != 0;
  return v2;
}
