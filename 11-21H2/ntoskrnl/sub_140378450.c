/*
 * XREFs of sub_140378450 @ 0x140378450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403784C0 @ 0x1403784C0 (sub_1403784C0.c)
 *     sub_1405F0E44 @ 0x1405F0E44 (sub_1405F0E44.c)
 */

__int64 __fastcall sub_140378450(__int16 a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  if ( !a1 )
    return sub_1403784C0(a2, a3, a4, a5, a7, (a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL, 0LL, 0LL, a3);
  if ( a1 == 256 )
    return sub_1405F0E44(a2, a3, a4, a5, a7, (void *)((a8 + 7) & 0xFFFFFFFFFFFFFFF8uLL), 0LL, 0LL, a3);
  return 3221225659LL;
}
