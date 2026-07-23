/*
 * XREFs of sub_140947274 @ 0x140947274
 * Callers:
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_140947274(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+60h] [rbp-10h] BYREF
  int v9; // [rsp+A8h] [rbp+38h] BYREF
  int v10; // [rsp+ACh] [rbp+3Ch]
  int v11; // [rsp+B0h] [rbp+40h] BYREF
  char v12; // [rsp+B8h] [rbp+48h] BYREF

  v10 = HIDWORD(a2);
  v3 = 0;
  v12 = 0;
  v11 = 0;
  v9 = 0;
  v8[0] = 0LL;
  if ( (int)sub_14077DA5C(
              *(__int64 *)&qword_140D00AC0,
              a1,
              1,
              0,
              0LL,
              (__int64)&qword_14000DFF0,
              (__int64)&v9,
              (__int64)&v12,
              1,
              (__int64)&v11,
              0) >= 0
    && v9 == 17
    && v11 == 1
    && v12 == -1
    && ((int)sub_14077DA5C(
               *(__int64 *)&qword_140D00AC0,
               a1,
               1,
               0,
               0LL,
               (__int64)qword_14000FE18,
               (__int64)&v9,
               (__int64)v8,
               8,
               (__int64)&v11,
               0) < 0
     || v9 != 9
     || v11 != 8) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = v8[0];
  }
  v8[0] = a3 | v6;
  if ( a3 | v6 )
    return (unsigned int)sub_14077198C(
                           *(__int64 *)&qword_140D00AC0,
                           a1,
                           1,
                           0LL,
                           0LL,
                           (__int64)qword_14000FE18,
                           9,
                           (__int64)v8,
                           8u,
                           0);
  else
    sub_14077198C(*(__int64 *)&qword_140D00AC0, a1, 1, 0LL, 0LL, (__int64)qword_14000FE18, 0, 0LL, 0, 0);
  return v3;
}
