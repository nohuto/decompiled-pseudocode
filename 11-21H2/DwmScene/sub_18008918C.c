/*
 * XREFs of sub_18008918C @ 0x18008918C
 * Callers:
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_18008918C(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rax
  __m128i *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  __m128i v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v41[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v42[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v43[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v44[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v45[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v46[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v47; // [rsp+140h] [rbp+40h] BYREF
  __int64 v48; // [rsp+148h] [rbp+48h]
  __int128 v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+60h] BYREF
  __int64 v51; // [rsp+168h] [rbp+68h]
  __int64 v52[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v53[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v54[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v55[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v56[4]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v57; // [rsp+220h] [rbp+120h] BYREF

  sub_18001875C(&v47, (__int64)&qword_1801F5B58);
  sub_18001875C(&v50, (__int64)&qword_1801F5B38);
  v29.m128i_i64[0] = (__int64)&v47;
  v29.m128i_i64[1] = (__int64)v52;
  sub_18006C3A8((__int64)v40, &v29);
  sub_18000B4C0((__int64)&v47, 32LL, 2LL);
  sub_18001875C(v52, (__int64)&qword_1801F5B58);
  v29.m128i_i64[0] = (__int64)v52;
  v29.m128i_i64[1] = (__int64)v53;
  sub_18006C3A8((__int64)v39, &v29);
  sub_18000B4C0((__int64)v52, 32LL, 1LL);
  sub_18001875C(&v47, (__int64)&qword_1801F5B98);
  sub_18001875C(&v50, (__int64)&qword_1801F5B58);
  v29.m128i_i64[0] = (__int64)&v47;
  v29.m128i_i64[1] = (__int64)v52;
  sub_18006C3A8((__int64)v38, &v29);
  sub_18000B4C0((__int64)&v47, 32LL, 2LL);
  sub_18001875C(v54, (__int64)&qword_1801F5B98);
  sub_18001875C(v55, (__int64)&qword_1801F5B58);
  sub_18001875C(v56, (__int64)&qword_1801F5B38);
  v29.m128i_i64[0] = (__int64)v54;
  v29.m128i_i64[1] = (__int64)&v57;
  sub_18006C3A8((__int64)v37, &v29);
  sub_18000B4C0((__int64)v54, 32LL, 3LL);
  v4 = sub_180067498(v30, v39);
  v35 = sub_180056C78(a2, v4);
  v5 = sub_180067498(v30, v40);
  v34 = sub_180056C78(a2, v5);
  v6 = sub_180067498(v30, v38);
  v33 = sub_180056C78(a2, v6);
  v7 = sub_180067498(v30, v37);
  v8 = sub_180056C78(a2, v7);
  v31 = v8;
  v32 = 0LL;
  sub_18001875C(v53, (__int64)&qword_1801F5D98);
  v29.m128i_i64[0] = (__int64)v53;
  v29.m128i_i64[1] = (__int64)v54;
  sub_18006C3A8((__int64)v36, &v29);
  sub_18000B4C0((__int64)v53, 32LL, 1LL);
  v9 = sub_180067498(v30, v36);
  v29 = (__m128i)(unsigned __int64)sub_180056C78(a2, v9);
  v10 = &v29;
  v11 = *((_QWORD *)&v32 + 1);
  v12 = v32;
  do
  {
    v13 = v10->m128i_i64[0];
    v14 = sub_180068694(*(_QWORD *)(a1 + 56), v44, v8 | v10->m128i_i64[0], 0LL, 1);
    v15 = *v14;
    v16 = v14[1];
    *v14 = 0LL;
    v14[1] = 0LL;
    v41[0] = v12;
    *(_QWORD *)&v32 = v15;
    v41[1] = v11;
    *((_QWORD *)&v32 + 1) = v16;
    sub_180010910((__int64)v41);
    sub_180010910((__int64)v44);
    v17 = *(_QWORD *)(a1 + 112);
    LODWORD(v47) = 0;
    v48 = v17;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    sub_180095F34(v15, &v47);
    sub_180095740(v15, 1, 1, 3, 1);
    v18 = sub_180068694(*(_QWORD *)(a1 + 56), v45, v33 | v13, 0LL, 1);
    v19 = *v18;
    v20 = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v42[0] = v15;
    *(_QWORD *)&v32 = v19;
    v42[1] = v16;
    *((_QWORD *)&v32 + 1) = v20;
    sub_180010910((__int64)v42);
    sub_180010910((__int64)v45);
    v21 = *(_QWORD *)(a1 + 112);
    LODWORD(v47) = 0;
    v48 = v21;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    sub_180095F34(v19, &v47);
    sub_180095740(v19, 0, 1, 3, 1);
    v22 = sub_180068694(*(_QWORD *)(a1 + 56), v46, v34 | v13, 0LL, 1);
    v23 = *v22;
    v24 = v22[1];
    *v22 = 0LL;
    v22[1] = 0LL;
    v43[0] = v19;
    *(_QWORD *)&v32 = v23;
    v43[1] = v20;
    *((_QWORD *)&v32 + 1) = v24;
    sub_180010910((__int64)v43);
    sub_180010910((__int64)v46);
    v25 = *(_QWORD *)(a1 + 112);
    LODWORD(v47) = 0;
    v48 = v25;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    sub_180095F34(v23, &v47);
    sub_180095740(v23, 1, 1, 3, 1);
    v26 = sub_180068694(*(_QWORD *)(a1 + 56), v52, v35 | v13, 0LL, 1);
    v12 = *v26;
    v11 = v26[1];
    *v26 = 0LL;
    v26[1] = 0LL;
    v30[0] = v23;
    *(_QWORD *)&v32 = v12;
    v30[1] = v24;
    *((_QWORD *)&v32 + 1) = v11;
    sub_180010910((__int64)v30);
    sub_180010910((__int64)v52);
    v27 = *(_QWORD *)(a1 + 112);
    LODWORD(v47) = 0;
    v48 = v27;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    sub_180095F34(v12, &v47);
    sub_180095740(v12, 0, 1, 3, 1);
    v10 = (__m128i *)((char *)v10 + 8);
    v8 = v31;
  }
  while ( v10 != (__m128i *)v30 );
  sub_18005470C(v36, (__int64)v36);
  sub_180010910((__int64)&v32);
  sub_18005470C(v37, (__int64)v37);
  sub_18005470C(v38, (__int64)v38);
  sub_18005470C(v39, (__int64)v39);
  return sub_18005470C(v40, (__int64)v40);
}
