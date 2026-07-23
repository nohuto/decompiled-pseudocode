/*
 * XREFs of unknown_libname_3 @ 0x14055F3B8
 * Callers:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

// Windows Driver Kit 7/10 64bit
__int64 __fastcall unknown_libname_3(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
