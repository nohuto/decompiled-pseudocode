/*
 * XREFs of sub_1406E3C60 @ 0x1406E3C60
 * Callers:
 *     sub_14076C91C @ 0x14076C91C (sub_14076C91C.c)
 *     sub_140A26854 @ 0x140A26854 (sub_140A26854.c)
 *     sub_140A279F4 @ 0x140A279F4 (sub_140A279F4.c)
 *     sub_140A29270 @ 0x140A29270 (sub_140A29270.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406E3CA0 @ 0x1406E3CA0 (sub_1406E3CA0.c)
 */

void __fastcall sub_1406E3C60(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r11

  v3 = *(_QWORD *)(a1 + 496);
  if ( v3 )
  {
    if ( a3 == 5 )
      sub_1406E3CA0(a1, a2, v3);
    else
      sub_14042A5E0(a1, a2);
  }
}
