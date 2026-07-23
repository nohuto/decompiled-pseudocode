/*
 * XREFs of sub_1409F8018 @ 0x1409F8018
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1409F76FC @ 0x1409F76FC (sub_1409F76FC.c)
 * Callees:
 *     sub_1409F8048 @ 0x1409F8048 (sub_1409F8048.c)
 */

bool sub_1409F8018()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  sub_1409F8048(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
