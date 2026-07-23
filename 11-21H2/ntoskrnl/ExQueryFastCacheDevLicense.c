/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x140699500
 * Callers:
 *     sub_1409C599C @ 0x1409C599C (sub_1409C599C.c)
 * Callees:
 *     sub_14069954C @ 0x14069954C (sub_14069954C.c)
 */

char ExQueryFastCacheDevLicense()
{
  char result; // al
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v1[0] = 4456514LL;
  v1[1] = L"AllowDevelopmentWithoutDevLicense";
  v2 = 0xFFFF;
  if ( (int)sub_14069954C(v1, &v2) < 0 )
    return 0;
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
