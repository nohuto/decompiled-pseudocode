/*
 * XREFs of sub_1800808B0 @ 0x1800808B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180060138 @ 0x180060138 (sub_180060138.c)
 *     sub_180060340 @ 0x180060340 (sub_180060340.c)
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 *     sub_180060980 @ 0x180060980 (sub_180060980.c)
 *     sub_180063D24 @ 0x180063D24 (sub_180063D24.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 *     sub_180087698 @ 0x180087698 (sub_180087698.c)
 *     sub_180087790 @ 0x180087790 (sub_180087790.c)
 *     sub_180087C3C @ 0x180087C3C (sub_180087C3C.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800808B0(__int64 a1, __int64 a2, int **a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  void **v11; // rax
  __int64 v12; // r12
  char v13; // r8
  char v14; // al
  int *v15; // rsi
  int *v16; // r13
  char v17; // r14
  char v18; // r15
  __int64 *v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __m128i v25; // [rsp+30h] [rbp-D0h] BYREF
  __m128i *v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  void *v35[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  _QWORD v42[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v44[4]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v45[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v46; // [rsp+170h] [rbp+70h] BYREF

  v4 = a2;
  v34 = a2;
  v5 = a1;
  v33 = a1;
  v26 = &v25;
  v6 = sub_18004347C(a1 + 8, &v25);
  v7 = sub_180017648(&v38, (__int64)&unk_1801D8448);
  v8 = sub_18004F760(v4, &v36, v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011020((_QWORD *)(v5 + 56), v8);
  if ( v37 )
    sub_180010530(v37);
  v10 = *v9;
  v11 = (void **)sub_180010DD0(&v38, (__int64)"BackgroundUnlit");
  sub_18007F33C(v10, v11);
  sub_180017C9C((_QWORD *)(*v9 + 528), (__int64)a3);
  v12 = sub_18008C460();
  sub_18005FECC(*v9, (void **)&unk_1801D8468);
  sub_18005FECC(*v9, (void **)&unk_1801D8488);
  sub_18005FECC(*v9, (void **)&unk_1801D84A8);
  sub_18005FECC(*v9, (void **)&unk_1801D84C8);
  v27 = sub_18005FECC(*v9, (void **)&unk_1801D84E8);
  sub_180017648(v42, (__int64)&unk_1801D8468);
  sub_180017648(v43, (__int64)&unk_1801D8488);
  sub_180017648(v44, (__int64)&unk_1801D84A8);
  sub_180017648(v45, (__int64)&unk_1801D84C8);
  v25.m128i_i64[0] = (__int64)v42;
  v25.m128i_i64[1] = (__int64)&v46;
  sub_180063D24((__int64 *)v35, &v25);
  sub_18000B4B0((__int64)v42, 32LL, 4LL);
  sub_18005EA14(v25.m128i_i64, v35, v13);
  v26 = (__m128i *)sub_18004FBD8(v4, (void **)&v25);
  v14 = sub_18005FECC(*v9, (void **)&unk_1801D8508);
  v15 = *a3;
  v16 = a3[1];
  if ( v15 != v16 )
  {
    v17 = v27;
    v18 = v14;
    do
    {
      sub_180060138(*v9, *v15);
      v25 = 0LL;
      v19 = (__int64 *)sub_180060340(*v9, (__int64)&v36, v17);
      sub_180011020(&v25, v19);
      if ( v37 )
        sub_180010530(v37);
      LODWORD(v28) = 0;
      v29 = v12;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v20 = v25.m128i_i64[0];
      sub_180087C3C(v25.m128i_i64[0], &v28);
      sub_180087698(v20, 0, 1, 3, 1);
      v21 = sub_180010DD0(&v28, (__int64)byte_180106082);
      sub_180087790(v20, 5LL, v21);
      v22 = sub_180060378(*v9, &v40, (__int64)v26, 0LL, 1);
      sub_180011020(&v25, v22);
      if ( v41 )
        sub_180010530(v41);
      LODWORD(v28) = 0;
      v29 = v12;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      sub_180087C3C(v25.m128i_i64[0], &v28);
      sub_180087698(v25.m128i_i32[0], 0, 1, 1, 1);
      v23 = (__int64 *)sub_180060340(*v9, (__int64)&v38, v18);
      sub_180011020(&v25, v23);
      if ( v39 )
        sub_180010530(v39);
      LODWORD(v28) = 0;
      v29 = v12;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      sub_180087C3C(v25.m128i_i64[0], &v28);
      sub_180087698(v25.m128i_i32[0], 1, 1, 1, 1);
      sub_180060980(*v9);
      if ( v25.m128i_i64[1] )
        sub_180010530(v25.m128i_i64[1]);
      ++v15;
    }
    while ( v15 != v16 );
    v5 = v33;
    v4 = v34;
  }
  sub_18007FF54(v5, v4);
  sub_180060800(*v9);
  return sub_18004D8C4(v35, (__int64)v35);
}
