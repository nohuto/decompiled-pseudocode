/*
 * XREFs of sub_180088528 @ 0x180088528
 * Callers:
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 *     sub_1800C2530 @ 0x1800C2530 (sub_1800C2530.c)
 *     sub_1800C2990 @ 0x1800C2990 (sub_1800C2990.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180087FA4 @ 0x180087FA4 (sub_180087FA4.c)
 *     sub_180088100 @ 0x180088100 (sub_180088100.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_180088528(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  _QWORD *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v13[2]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v14; // [rsp+38h] [rbp-39h] BYREF
  __int128 v15; // [rsp+48h] [rbp-29h]
  _QWORD v16[3]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v17[5]; // [rsp+78h] [rbp+7h] BYREF

  v17[4] = a1;
  sub_180088100(v16, *(_DWORD *)(a2 + 20));
  v4 = sub_18001875C(v17, a1);
  v16[2] = v4;
  v5 = (_QWORD *)(v16[0] + 16LL);
  v6 = *(_QWORD *)(v16[0] + 16LL);
  v7 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)&v15 = v7;
  DWORD2(v15) = 0;
  v8 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)&v15 = v7;
    if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v7 + 32), v4) )
    {
      DWORD2(v15) = 0;
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      DWORD2(v15) = 1;
      v8 = v7;
      v7 = *(_QWORD *)v7;
    }
  }
  if ( *(_BYTE *)(v8 + 25) || (unsigned __int8)sub_18001DE04(v4, (_QWORD *)(v8 + 32)) )
  {
    if ( v5[1] == 0x2AAAAAAAAAAAAAALL )
      sub_18001F56C();
    v13[0] = v6;
    *(_QWORD *)&v14 = v5;
    v9 = sub_180011088(0x60uLL);
    *((_QWORD *)&v14 + 1) = v9;
    sub_18001875C((__int64 *)(v9 + 32), (__int64)v4);
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    sub_18001DE7C((__int64 *)v9, v13);
    sub_18001DE7C((__int64 *)(v9 + 8), v13);
    sub_18001DE7C((__int64 *)(v9 + 16), v13);
    *(_WORD *)(v9 + 24) = 0;
    v14 = v15;
    v8 = sub_18001F31C(v5, (__int64)&v14, v9);
  }
  *(_OWORD *)(v8 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v8 + 80) = *(_OWORD *)(a2 + 16);
  v10 = v4[3];
  if ( v10 >= 0x10 )
    sub_180010884((char *)*v4, v10 + 1);
  v4[2] = 0LL;
  v4[3] = 15LL;
  *(_BYTE *)v4 = 0;
  sub_180087FA4((__int64)v16);
  v11 = *(_QWORD *)(a1 + 24);
  if ( v11 >= 0x10 )
    sub_180010884(*(char **)a1, v11 + 1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return 1;
}
