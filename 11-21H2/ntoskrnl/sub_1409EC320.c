/*
 * XREFs of sub_1409EC320 @ 0x1409EC320
 * Callers:
 *     sub_1409EBA3C @ 0x1409EBA3C (sub_1409EBA3C.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409EC320(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
