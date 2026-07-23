/*
 * XREFs of sub_14038CFA0 @ 0x14038CFA0
 * Callers:
 *     sub_140A4C45C @ 0x140A4C45C (sub_140A4C45C.c)
 * Callees:
 *     sub_140377590 @ 0x140377590 (sub_140377590.c)
 *     sub_1403784C0 @ 0x1403784C0 (sub_1403784C0.c)
 *     sub_1405F0724 @ 0x1405F0724 (sub_1405F0724.c)
 *     sub_1405F0E44 @ 0x1405F0E44 (sub_1405F0E44.c)
 */

__int64 __fastcall sub_14038CFA0(
        __int16 a1,
        _BYTE *a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int16 v9; // r11
  __int16 v10; // cx

  v9 = (unsigned __int8)a1;
  v10 = a1 & 0xFF00;
  if ( v9 == 3 )
  {
    if ( !v10 )
      return sub_1403784C0(a2, a3, a4, 0x10000u, a6, (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL, a8, a9, 0x1000u);
    if ( v10 == 256 )
      return sub_1405F0E44(
               (int)a2,
               a3,
               (int)a4,
               0x10000,
               (__int64)a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  else if ( v9 == 4 )
  {
    if ( !v10 )
      return sub_140377590(
               (unsigned __int64)a2,
               a3,
               (__int64)a4,
               0x10000u,
               a6,
               (_DWORD *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               0x1000u);
    if ( v10 == 256 )
      return sub_1405F0724(
               (int)a2,
               a3,
               (int)a4,
               0x10000,
               (__int64)a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  return 3221226079LL;
}
