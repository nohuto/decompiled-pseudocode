/*
 * XREFs of sub_1409DE1A0 @ 0x1409DE1A0
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 * Callees:
 *     sub_1403B423C @ 0x1403B423C (sub_1403B423C.c)
 *     sub_14081AB2C @ 0x14081AB2C (sub_14081AB2C.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 */

__int64 __fastcall sub_1409DE1A0(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  P = 0LL;
  v4 = 0;
  v1 = sub_1403B423C(0x200000, &P, &v4);
  if ( v1 >= 0 )
  {
    v1 = sub_14081AB80((__int64)P, v4, 0xAu, 8, (__int64)&v3);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( P )
    sub_14081AB2C((__int64 *)P, v4);
  return (unsigned int)v1;
}
