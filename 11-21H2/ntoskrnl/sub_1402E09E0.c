/*
 * XREFs of sub_1402E09E0 @ 0x1402E09E0
 * Callers:
 *     sub_14078CB04 @ 0x14078CB04 (sub_14078CB04.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_1409DC140 @ 0x1409DC140 (sub_1409DC140.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402E09E0(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
