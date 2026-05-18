/*
 * XREFs of sub_180064DC0 @ 0x180064DC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012BA0 @ 0x180012BA0 (sub_180012BA0.c)
 *     sub_18002B6CC @ 0x18002B6CC (sub_18002B6CC.c)
 *     sub_180063BB8 @ 0x180063BB8 (sub_180063BB8.c)
 *     sub_180065B74 @ 0x180065B74 (sub_180065B74.c)
 *     sub_18008E828 @ 0x18008E828 (sub_18008E828.c)
 */

__int64 __fastcall sub_180064DC0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 *v13; // rbx
  int v14; // eax
  _DWORD *v15; // rax
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  int v17; // [rsp+38h] [rbp-90h]
  _BYTE v18[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[96]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-18h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x100000) != 0 && result != a1 )
  {
    sub_18002B6CC((__int64)v19, 12LL, 8LL, sub_1800108D0);
    v7 = 0;
    do
    {
      v8 = (_DWORD *)sub_180063BB8((__int64)&v16, v7);
      sub_180012BA0(v9, v8);
      v7 = v10 + 1;
      v12 = v11 + 12;
    }
    while ( v7 < 8 );
    v13 = (__int64 *)v19;
    do
    {
      v14 = *((_DWORD *)v13 + 2);
      v16 = *v13;
      v17 = v14;
      v15 = (_DWORD *)sub_180065B74(a1, v18, &v16, v12);
      sub_180012BA0(v13, v15);
      v13 = (__int64 *)((char *)v13 + 12);
    }
    while ( v13 != &v20 );
    sub_18008E828(a1);
  }
  return result;
}
