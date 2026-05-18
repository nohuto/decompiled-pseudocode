/*
 * XREFs of sub_18008D684 @ 0x18008D684
 * Callers:
 *     sub_180061C08 @ 0x180061C08 (sub_180061C08.c)
 *     sub_18008DE40 @ 0x18008DE40 (sub_18008DE40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 *     sub_180059EA8 @ 0x180059EA8 (sub_180059EA8.c)
 *     sub_18005D318 @ 0x18005D318 (sub_18005D318.c)
 *     sub_18005D36C @ 0x18005D36C (sub_18005D36C.c)
 *     sub_18005D38C @ 0x18005D38C (sub_18005D38C.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

// Hidden C++ exception states: #wind=22
_QWORD *__fastcall sub_18008D684(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  char v6; // r8
  __int64 v7; // rbx
  __m128i *v8; // rax
  char v9; // r8
  __int64 v10; // rbx
  __m128i *v11; // rax
  char v12; // r8
  __int64 v13; // rbx
  __m128i *v14; // rax
  __int64 v15; // rcx
  __m128i v17; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  void *v21[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v22[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v23[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v24[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v25[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v26[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v27; // [rsp+100h] [rbp+0h] BYREF

  v23[2] = a1;
  v3 = sub_18001246C(&v18, a2);
  sub_18005938C((__int64)a1, (__int64)v3);
  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  a1[221] = 0LL;
  a1[223] = 0LL;
  a1[224] = 15LL;
  *((_BYTE *)a1 + 1768) = 0;
  a1[225] = 0LL;
  a1[226] = 0LL;
  a1[227] = 0LL;
  a1[228] = 0LL;
  a1[229] = 0LL;
  a1[230] = 0LL;
  a1[231] = 0LL;
  a1[233] = 0LL;
  a1[234] = 15LL;
  *((_BYTE *)a1 + 1848) = 0;
  a1[235] = 0LL;
  a1[236] = 0LL;
  a1[237] = 0LL;
  a1[238] = 0LL;
  a1[239] = 0LL;
  a1[240] = 0LL;
  *(_QWORD *)((char *)a1 + 1940) = 360LL;
  *((_DWORD *)a1 + 487) = 0;
  *((_WORD *)a1 + 976) = 257;
  *(_QWORD *)((char *)a1 + 1956) = 0LL;
  *((_DWORD *)a1 + 491) = 1;
  *((_DWORD *)a1 + 492) = 1065353216;
  *((_DWORD *)a1 + 493) = 6;
  *((_DWORD *)a1 + 494) = 21;
  v4 = sub_18008141C((__int64)a1);
  v5 = sub_180034870(v4);
  sub_180017648(v24, (__int64)&unk_1801D7D68);
  v17.m128i_i64[0] = (__int64)v24;
  v17.m128i_i64[1] = (__int64)v25;
  sub_180063D24((__int64 *)v23, &v17);
  sub_18000B4B0((__int64)v24, 32LL, 1LL);
  sub_18005EA14(v18.m128i_i64, v23, v6);
  v7 = sub_18004FBD8(v5, (void **)&v18);
  v8 = (__m128i *)sub_18002534C(&v19);
  v17 = 0LL;
  v17 = *v8;
  v8->m128i_i64[0] = 0LL;
  v8->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 482) = sub_180059EA8(a1, 0x10000LL, 0LL, &v17, v7);
  if ( v20 )
    sub_180010530(v20);
  sub_180017648(v26, (__int64)&unk_1801D7DE8);
  v18.m128i_i64[0] = (__int64)v26;
  v18.m128i_i64[1] = (__int64)&v27;
  sub_180063D24((__int64 *)v22, &v18);
  sub_18000B4B0((__int64)v26, 32LL, 1LL);
  sub_18005EA14(v18.m128i_i64, v22, v9);
  v10 = sub_18004FBD8(v5, (void **)&v18);
  v11 = (__m128i *)sub_18002534C(&v19);
  v17 = 0LL;
  v17 = *v11;
  v11->m128i_i64[0] = 0LL;
  v11->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 483) = sub_180059EA8(a1, 0x10000LL, 0LL, &v17, v10);
  if ( v20 )
    sub_180010530(v20);
  sub_180017648(v24, (__int64)&unk_1801D7DE8);
  sub_180017648(v25, (__int64)&unk_1801D7DC8);
  v18.m128i_i64[0] = (__int64)v24;
  v18.m128i_i64[1] = (__int64)v26;
  sub_180063D24((__int64 *)v21, &v18);
  sub_18000B4B0((__int64)v24, 32LL, 2LL);
  sub_18005EA14(v18.m128i_i64, v21, v12);
  v13 = sub_18004FBD8(v5, (void **)&v18);
  v14 = (__m128i *)sub_18002534C(&v19);
  v17 = 0LL;
  v17 = *v14;
  v14->m128i_i64[0] = 0LL;
  v14->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 484) = sub_180059EA8(a1, 256LL, 0LL, &v17, v13);
  if ( v20 )
    sub_180010530(v20);
  sub_18005D38C((__int64)a1, *((_DWORD *)a1 + 482), 1);
  sub_18005D38C((__int64)a1, *((_DWORD *)a1 + 483), 0);
  sub_18005D38C((__int64)a1, *((_DWORD *)a1 + 484), 0);
  sub_18005D318((__int64)a1, 1024, 1);
  *((_DWORD *)a1 + 74) = 1065353216;
  *((_DWORD *)a1 + 75) = 1065353216;
  *((_DWORD *)a1 + 76) = 1065353216;
  *((_DWORD *)a1 + 77) = 1065353216;
  sub_18005D36C(v15, 1);
  sub_18004D8C4(v21, (__int64)v21);
  sub_18004D8C4(v22, (__int64)v22);
  sub_18004D8C4(v23, (__int64)v23);
  return a1;
}
