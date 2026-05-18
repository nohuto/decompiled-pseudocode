/*
 * XREFs of sub_1800A2CD0 @ 0x1800A2CD0
 * Callers:
 *     sub_1800A2D68 @ 0x1800A2D68 (sub_1800A2D68.c)
 * Callees:
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1F78 @ 0x1800A1F78 (sub_1800A1F78.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800A2CD0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h]
  __int64 v8[24]; // [rsp+38h] [rbp-C0h] BYREF

  result = sub_1800A1DF4();
  if ( result )
  {
    result = sub_1800A1F78(a2, (__int64)&v6);
    if ( v6 == 2 )
    {
      *a3 = v7;
      sub_1800A1BDC((__int64)v8);
      sub_1800A1CB4(a2, v8);
    }
    else
    {
      if ( v6 != 5 )
        return result;
      sub_1800A1BDC((__int64)v8);
      sub_1800A1CB4(a2, v8);
    }
    return sub_1800A1C58(v8);
  }
  return result;
}
