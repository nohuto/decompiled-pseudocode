/*
 * XREFs of sub_18007CD0C @ 0x18007CD0C
 * Callers:
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_18007CD0C(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // r15
  char v6; // r8
  __int64 v7; // r12
  char v8; // r8
  __int64 v9; // r13
  char v10; // r8
  __int64 v11; // r14
  char v12; // r8
  __m128i *v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  __m128i v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+48h] [rbp-B8h] BYREF
  void *v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *v28[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v29[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v30[2]; // [rsp+88h] [rbp-78h] BYREF
  void *v31[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+120h] [rbp+20h] BYREF
  __int64 v44; // [rsp+128h] [rbp+28h]
  _QWORD v45[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v46[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v47[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v48[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v49; // [rsp+1C0h] [rbp+C0h] BYREF

  sub_180017648(&v38, (__int64)&unk_1801D7D48);
  sub_180017648(&v41, (__int64)&unk_1801D7D28);
  v24.m128i_i64[0] = (__int64)&v38;
  v24.m128i_i64[1] = (__int64)&v43;
  sub_180063D24((__int64 *)v31, &v24);
  sub_18000B4B0((__int64)&v38, 32LL, 2LL);
  sub_180017648(&v43, (__int64)&unk_1801D7D48);
  v24.m128i_i64[0] = (__int64)&v43;
  v24.m128i_i64[1] = (__int64)v45;
  sub_180063D24((__int64 *)v30, &v24);
  sub_18000B4B0((__int64)&v43, 32LL, 1LL);
  sub_180017648(&v38, (__int64)qword_1801D7D88);
  sub_180017648(&v41, (__int64)&unk_1801D7D48);
  v24.m128i_i64[0] = (__int64)&v38;
  v24.m128i_i64[1] = (__int64)&v43;
  sub_180063D24((__int64 *)v29, &v24);
  sub_18000B4B0((__int64)&v38, 32LL, 2LL);
  sub_180017648(v46, (__int64)qword_1801D7D88);
  sub_180017648(v47, (__int64)&unk_1801D7D48);
  sub_180017648(v48, (__int64)&unk_1801D7D28);
  v24.m128i_i64[0] = (__int64)v46;
  v24.m128i_i64[1] = (__int64)&v49;
  sub_180063D24((__int64 *)v28, &v24);
  sub_18000B4B0((__int64)v46, 32LL, 3LL);
  sub_18005EA14(v24.m128i_i64, v30, v4);
  v5 = sub_18004FBD8(a2, (void **)&v24);
  sub_18005EA14(v24.m128i_i64, v31, v6);
  v7 = sub_18004FBD8(a2, (void **)&v24);
  sub_18005EA14(v24.m128i_i64, v29, v8);
  v9 = sub_18004FBD8(a2, (void **)&v24);
  sub_18005EA14(v24.m128i_i64, v28, v10);
  v11 = sub_18004FBD8(a2, (void **)&v24);
  v26 = 0LL;
  sub_180017648(v45, (__int64)&unk_1801D7E68);
  v24.m128i_i64[0] = (__int64)v45;
  v24.m128i_i64[1] = (__int64)v46;
  sub_180063D24((__int64 *)v27, &v24);
  sub_18000B4B0((__int64)v45, 32LL, 1LL);
  sub_18005EA14(v24.m128i_i64, v27, v12);
  v24 = (__m128i)(unsigned __int64)sub_18004FBD8(a2, (void **)&v24);
  v13 = &v24;
  do
  {
    v14 = v13->m128i_i64[0];
    v15 = sub_180060378(*(_QWORD *)(a1 + 56), &v32, v11 | v13->m128i_i64[0], 0LL, 1);
    sub_180011020(&v26, v15);
    if ( v33 )
      sub_180010530(v33);
    v16 = *(_QWORD *)(a1 + 112);
    LODWORD(v38) = 0;
    v39 = v16;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    sub_180087C3C(v26, &v38);
    sub_180087698(v26, 1, 1, 3, 1);
    v17 = sub_180060378(*(_QWORD *)(a1 + 56), &v34, v9 | v14, 0LL, 1);
    sub_180011020(&v26, v17);
    if ( v35 )
      sub_180010530(v35);
    v18 = *(_QWORD *)(a1 + 112);
    LODWORD(v38) = 0;
    v39 = v18;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    sub_180087C3C(v26, &v38);
    sub_180087698(v26, 0, 1, 3, 1);
    v19 = sub_180060378(*(_QWORD *)(a1 + 56), &v36, v7 | v14, 0LL, 1);
    sub_180011020(&v26, v19);
    if ( v37 )
      sub_180010530(v37);
    v20 = *(_QWORD *)(a1 + 112);
    LODWORD(v38) = 0;
    v39 = v20;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    sub_180087C3C(v26, &v38);
    sub_180087698(v26, 1, 1, 3, 1);
    v21 = sub_180060378(*(_QWORD *)(a1 + 56), &v43, v5 | v14, 0LL, 1);
    sub_180011020(&v26, v21);
    if ( v44 )
      sub_180010530(v44);
    v22 = *(_QWORD *)(a1 + 112);
    LODWORD(v38) = 0;
    v39 = v22;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    sub_180087C3C(v26, &v38);
    sub_180087698(v26, 0, 1, 3, 1);
    v13 = (__m128i *)((char *)v13 + 8);
  }
  while ( v13 != (__m128i *)&v25 );
  sub_18004D8C4(v27, (__int64)v27);
  if ( *((_QWORD *)&v26 + 1) )
    sub_180010530(*((__int64 *)&v26 + 1));
  sub_18004D8C4(v28, (__int64)v28);
  sub_18004D8C4(v29, (__int64)v29);
  sub_18004D8C4(v30, (__int64)v30);
  return sub_18004D8C4(v31, (__int64)v31);
}
