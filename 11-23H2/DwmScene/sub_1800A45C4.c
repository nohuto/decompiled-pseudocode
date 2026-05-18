/*
 * XREFs of sub_1800A45C4 @ 0x1800A45C4
 * Callers:
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_1800A4058 @ 0x1800A4058 (sub_1800A4058.c)
 *     sub_1800A4738 @ 0x1800A4738 (sub_1800A4738.c)
 *     sub_1800A47C0 @ 0x1800A47C0 (sub_1800A47C0.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 *     sub_1800A4FA0 @ 0x1800A4FA0 (sub_1800A4FA0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A45C4(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-51h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v22; // [rsp+58h] [rbp-19h]
  _BYTE v23[48]; // [rsp+60h] [rbp-11h] BYREF

  sub_1800A4058(v20, *a1, a1[1]);
  sub_1800A4058(v19, *a2, a2[1]);
  if ( (unsigned __int64)((__int64)(v20[1] - v20[0]) >> 4) > 3 )
    sub_1800A47C0(v20);
  if ( (unsigned __int64)((__int64)(v19[1] - v19[0]) >> 4) > 1 )
    sub_1800A4738(v19);
  v8 = (__int64 *)(a5 + 8);
  v9 = sub_1800A47E4(v23, v20, a3) - a5;
  v10 = 3LL;
  do
  {
    v11 = *(__int64 *)((char *)v8 + v9 - 8);
    v12 = *(__int64 *)((char *)v8 + v9);
    *(__int64 *)((char *)v8 + v9 - 8) = 0LL;
    *(__int64 *)((char *)v8 + v9) = 0LL;
    *(v8 - 1) = v11;
    v13 = *v8;
    *v8 = v12;
    if ( v13 )
      sub_180010530(v13);
    v8 += 2;
    --v10;
  }
  while ( v10 );
  sub_18000B4B0((__int64)v23, 16LL, 3LL);
  v14 = (__int64 *)sub_1800A4FA0(v21, v19, a3);
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  *a4 = v15;
  v17 = a4[1];
  a4[1] = v16;
  if ( v17 )
    sub_180010530(v17);
  if ( v22 )
    sub_180010530(v22);
  sub_180013300((__int64)v19);
  return sub_180013300((__int64)v20);
}
