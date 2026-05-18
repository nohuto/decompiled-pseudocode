/*
 * XREFs of sub_18009BCE8 @ 0x18009BCE8
 * Callers:
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800108D0 @ 0x1800108D0 (sub_1800108D0.c)
 *     sub_180017240 @ 0x180017240 (sub_180017240.c)
 *     sub_180018A0C @ 0x180018A0C (sub_180018A0C.c)
 *     sub_18004E560 @ 0x18004E560 (sub_18004E560.c)
 *     sub_18004F498 @ 0x18004F498 (sub_18004F498.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F8C8 @ 0x18004F8C8 (sub_18004F8C8.c)
 *     sub_18004FA18 @ 0x18004FA18 (sub_18004FA18.c)
 *     sub_18004FCA0 @ 0x18004FCA0 (sub_18004FCA0.c)
 *     sub_18004FD34 @ 0x18004FD34 (sub_18004FD34.c)
 *     sub_18004FFB4 @ 0x18004FFB4 (sub_18004FFB4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18009BCE8(__int64 *a1, __int64 *a2)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  _OWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r8
  _OWORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v13[3]; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v14[3]; // [rsp+80h] [rbp-29h] BYREF
  int v15; // [rsp+B0h] [rbp+7h]
  int v16; // [rsp+B4h] [rbp+Bh]
  int v17; // [rsp+B8h] [rbp+Fh]

  v4 = v13;
  v5 = 4LL;
  do
  {
    sub_1800108D0((__int64)v4);
    v4 = (_OWORD *)((char *)v4 + 12);
    --v5;
  }
  while ( v5 );
  v6 = v12;
  v7 = 4LL;
  do
  {
    sub_180018A0C(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v8 = v14;
  v9 = 4LL;
  do
  {
    sub_1800108D0((__int64)v8);
    v8 = (_OWORD *)((char *)v8 + 12);
    --v9;
  }
  while ( v9 );
  v13[0] = xmmword_18012A4D0;
  v13[1] = xmmword_18012A4F0;
  v13[2] = xmmword_1801BD9C0;
  v14[0] = xmmword_1801BD770;
  v14[1] = xmmword_1801BD740;
  v14[2] = xmmword_1801BD990;
  v12[0] = xmmword_1801BD9B0;
  v12[1] = xmmword_1801BD770;
  v15 = 0x10000;
  v16 = 65538;
  v17 = 131075;
  sub_180017240(a2, a1);
  sub_18004FFB4(*a1, 4);
  sub_18004F498(*a1, 6);
  sub_18004FCA0(*a1);
  sub_18004FA18(*a1);
  sub_18004F4AC(*a1);
  sub_18004F8C8(*a1);
  sub_18004FD34(*a1);
  sub_18004E560(*a1, 0LL, v10);
  return a1;
}
