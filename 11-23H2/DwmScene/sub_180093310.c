/*
 * XREFs of sub_180093310 @ 0x180093310
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180034924 @ 0x180034924 (sub_180034924.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_1800915D4 @ 0x1800915D4 (sub_1800915D4.c)
 *     sub_180091900 @ 0x180091900 (sub_180091900.c)
 *     sub_180091C84 @ 0x180091C84 (sub_180091C84.c)
 *     sub_180091E20 @ 0x180091E20 (sub_180091E20.c)
 *     sub_180092138 @ 0x180092138 (sub_180092138.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180093310(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[15]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v16[72]; // [rsp+F8h] [rbp-8h] BYREF

  sub_18008141C(a1);
  sub_180011C50(a1 + 56, &v7);
  v2 = (__int64 *)sub_18001265C(v7, &v9);
  sub_180034924(v3, &v13, v2);
  if ( v10 )
    sub_180010530(v10);
  if ( v8 )
    sub_180010530(v8);
  sub_180092138(a1, &v11);
  sub_180091C84(v15, &v11, *(float *)(a1 + 1840));
  v15[5] = (unsigned int)(int)(float)(*(float *)(a1 + 1848) * 1000000000.0);
  v7 = a1;
  sub_1800915D4((__int64)v16, &v7);
  v4 = sub_180091900(v13, &v9, v15);
  sub_180011020((_QWORD *)(a1 + 1768), v4);
  if ( v10 )
    sub_180010530(v10);
  *(_WORD *)(a1 + 1896) = 1;
  result = sub_180091E20(v15, v5);
  if ( v12 )
    result = sub_180010530(v12);
  if ( v14 )
    return sub_180010530(v14);
  return result;
}
