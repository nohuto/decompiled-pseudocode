/*
 * XREFs of sub_1C007B340 @ 0x1C007B340
 * Callers:
 *     sub_1C0079980 @ 0x1C0079980 (sub_1C0079980.c)
 *     sub_1C0079AD4 @ 0x1C0079AD4 (sub_1C0079AD4.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C0079D34 @ 0x1C0079D34 (sub_1C0079D34.c)
 *     sub_1C0079ED4 @ 0x1C0079ED4 (sub_1C0079ED4.c)
 *     sub_1C007A098 @ 0x1C007A098 (sub_1C007A098.c)
 *     sub_1C007A184 @ 0x1C007A184 (sub_1C007A184.c)
 *     sub_1C007A280 @ 0x1C007A280 (sub_1C007A280.c)
 *     sub_1C007A300 @ 0x1C007A300 (sub_1C007A300.c)
 *     sub_1C007A3D0 @ 0x1C007A3D0 (sub_1C007A3D0.c)
 *     sub_1C007A558 @ 0x1C007A558 (sub_1C007A558.c)
 *     sub_1C007A6B8 @ 0x1C007A6B8 (sub_1C007A6B8.c)
 *     sub_1C007A7F0 @ 0x1C007A7F0 (sub_1C007A7F0.c)
 *     sub_1C007A9C8 @ 0x1C007A9C8 (sub_1C007A9C8.c)
 *     sub_1C007AB88 @ 0x1C007AB88 (sub_1C007AB88.c)
 *     sub_1C007ACDC @ 0x1C007ACDC (sub_1C007ACDC.c)
 *     sub_1C007AE2C @ 0x1C007AE2C (sub_1C007AE2C.c)
 *     sub_1C007B138 @ 0x1C007B138 (sub_1C007B138.c)
 *     sub_1C007B1C8 @ 0x1C007B1C8 (sub_1C007B1C8.c)
 *     sub_1C007F8D0 @ 0x1C007F8D0 (sub_1C007F8D0.c)
 * Callees:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 */

__int64 __fastcall sub_1C007B340(__int64 a1, volatile __int32 *a2, int a3)
{
  if ( a3 == -1073741643 || a3 == -1073741618 || a3 == -1073741436 || a3 == -1073741435 || a3 == -1073741434 )
  {
    a3 = sub_1C007AF40(a1, (__int64)a2);
    if ( a3 >= 0 )
    {
      a3 = -1073741309;
      _InterlockedExchange(a2, 4);
    }
  }
  else if ( a3 == -1073741309 )
  {
    _InterlockedExchange(a2, 4);
  }
  return (unsigned int)a3;
}
