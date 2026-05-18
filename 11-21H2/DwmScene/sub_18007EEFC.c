/*
 * XREFs of sub_18007EEFC @ 0x18007EEFC
 * Callers:
 *     sub_180061A10 @ 0x180061A10 (sub_180061A10.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18007ED30 @ 0x18007ED30 (sub_18007ED30.c)
 *     sub_18007ED70 @ 0x18007ED70 (sub_18007ED70.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18007EEFC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int128 v8; // kr00_16
  __int64 *v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rax
  _QWORD *v15; // [rsp+30h] [rbp-89h] BYREF
  __int128 v16; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-71h] BYREF
  float v18[4]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19[4]; // [rsp+68h] [rbp-51h] BYREF
  char *v20[3]; // [rsp+88h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp-19h]
  char *v22[3]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int64 v23; // [rsp+C0h] [rbp+7h]
  char *v24[3]; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v25; // [rsp+E0h] [rbp+27h]

  v3 = a3;
  v15 = a2;
  v6 = 2 * (a3 + 5LL);
  if ( !*(_QWORD *)(a1 + 16 * (a3 + 5LL)) )
  {
    v7 = sub_18002850C(*(_QWORD *)(a1 + 32));
    sub_180010EC0(v7, &v16);
    v8 = v16;
    v16 = 0LL;
    v17[0] = *(_QWORD *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * v6) = v8;
    v17[1] = *(_QWORD *)(a1 + 8 * v6 + 8);
    *(_QWORD *)(a1 + 8 * v6 + 8) = *((_QWORD *)&v8 + 1);
    sub_180010910((__int64)v17);
    sub_180010910((__int64)&v16);
    v9 = (__int64 *)sub_18007ED30(a1, v18, v3);
    sub_18007ED70((int *)&v15, *v9);
    sub_180029A18((__int64 *)v20, (int)flt_180135010[v3]);
    v10 = (void *)sub_18001DD3C((__int64)v22, (__int64)"ImageProcessing Scaled ", v20);
    sub_18001DC84((__int64)v24, v10);
    if ( v23 >= 0x10 )
      sub_180010884(v22[0], v23 + 1);
    v22[2] = 0LL;
    v23 = 15LL;
    LOBYTE(v22[0]) = 0;
    if ( v21 >= 0x10 )
      sub_180010884(v20[0], v21 + 1);
    v20[2] = 0LL;
    v21 = 15LL;
    LOBYTE(v20[0]) = 0;
    v11 = *(_QWORD *)(a1 + 8 * v6);
    v12 = sub_18001875C(v19, (__int64)v24);
    sub_18002BC44(v11, v12);
    sub_18002A240(
      *(_QWORD *)(a1 + 8 * v6),
      (int)v15,
      SHIDWORD(v15),
      *(_DWORD *)(a1 + 20),
      *(_DWORD *)(a1 + 28) & 0xFFFFFFBF,
      *(_QWORD *)(a1 + 32));
    if ( v25 >= 0x10 )
      sub_180010884(v24[0], v25 + 1);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = *(_QWORD *)(a1 + 8 * v6 + 8);
  if ( v13 )
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  *a2 = *(_QWORD *)(a1 + 8 * v6);
  a2[1] = *(_QWORD *)(a1 + 8 * v6 + 8);
  return a2;
}
