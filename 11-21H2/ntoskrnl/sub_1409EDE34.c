/*
 * XREFs of sub_1409EDE34 @ 0x1409EDE34
 * Callers:
 *     sub_14079A870 @ 0x14079A870 (sub_14079A870.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 * Callees:
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 */

__int64 __fastcall sub_1409EDE34(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 344) )
    return sub_14085E858(a1, (__int128 *)(a1 + 432));
  return result;
}
