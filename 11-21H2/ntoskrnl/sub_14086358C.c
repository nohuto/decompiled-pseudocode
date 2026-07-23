/*
 * XREFs of sub_14086358C @ 0x14086358C
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14086358C(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _DWORD v4[6]; // [rsp+60h] [rbp-18h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4[0] = 0;
  v5 = 1;
  v6 = 0;
  if ( (int)sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              a1,
              1,
              a2,
              0LL,
              (__int64)&qword_140010A48,
              (__int64)&v5,
              (__int64)v4,
              4,
              (__int64)&v6,
              0) >= 0
    && v5 == 23
    && v6 == 4 )
  {
    switch ( v4[0] )
    {
      case 0xE0000228:
        return (unsigned int)-1073740656;
      case 0xE0000219:
        return (unsigned int)-1073740652;
      case 0xE0000250:
        return (unsigned int)-1073740655;
      case 0xE0000251:
        return (unsigned int)-1073740654;
      case 0xE0000252:
        return (unsigned int)-1073740653;
    }
  }
  return v2;
}
