/*
 * XREFs of sub_180093190 @ 0x180093190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180034924 @ 0x180034924 (sub_180034924.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_180091900 @ 0x180091900 (sub_180091900.c)
 *     sub_180091C84 @ 0x180091C84 (sub_180091C84.c)
 *     sub_180091E20 @ 0x180091E20 (sub_180091E20.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180093190(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  _QWORD v17[24]; // [rsp+80h] [rbp-80h] BYREF

  sub_18008141C(a1);
  sub_180011C50(a1 + 56, &v9);
  v2 = (__int64 *)sub_18001265C(v9, &v15);
  sub_180034924(v3, &v13, v2);
  if ( v16 )
    sub_180010530(v16);
  if ( v10 )
    sub_180010530(v10);
  v4 = sub_18004347C(a1 + 8, &v11);
  v9 = a1 + 1900;
  v5 = v4[1];
  v10 = v5;
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( v12 )
    sub_180010530(v12);
  sub_180091C84(v17, &v9, *(float *)(a1 + 1852));
  v17[5] = (unsigned int)(int)(float)(*(float *)(a1 + 1860) * 1000000000.0);
  v6 = sub_180091900(v13, &v11, v17);
  sub_180011020((_QWORD *)(a1 + 1784), v6);
  if ( v12 )
    sub_180010530(v12);
  *(_BYTE *)(a1 + 1898) = 1;
  result = sub_180091E20(v17, v7);
  if ( v5 )
    result = sub_180010530(v5);
  if ( v14 )
    return sub_180010530(v14);
  return result;
}
