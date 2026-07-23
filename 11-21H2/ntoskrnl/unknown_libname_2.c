/*
 * XREFs of unknown_libname_2 @ 0x1405028DC
 * Callers:
 *     sub_140502744 @ 0x140502744 (sub_140502744.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

// Windows Driver Kit 7/10 64bit
__int64 __fastcall unknown_libname_2(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 1 )
    memset((void *)(a1 + 1), a3, a2 - 1);
  return 0LL;
}
