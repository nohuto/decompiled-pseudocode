/*
 * XREFs of sub_14053E57C @ 0x14053E57C
 * Callers:
 *     sub_1405397A8 @ 0x1405397A8 (sub_1405397A8.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14053E57C(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+3Ch] [rbp-3Ch]
  _DWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  if ( a1 == 2 )
  {
    v8[0] = 1;
  }
  else
  {
    if ( a1 != 3 )
      return;
    v8[0] = 2;
  }
  v7 = 0;
  v11 = a5;
  v8[1] = a2;
  v9 = a3;
  v10 = a4;
  v5 = v8;
  v6 = 32;
  sub_14035EDE4((__int64)&v5, 1u, 0x80020000, 0x160Eu, 0x401902u);
}
