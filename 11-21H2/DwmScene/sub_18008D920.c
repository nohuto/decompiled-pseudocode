/*
 * XREFs of sub_18008D920 @ 0x18008D920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_1800680DC @ 0x1800680DC (sub_1800680DC.c)
 *     sub_180068338 @ 0x180068338 (sub_180068338.c)
 *     sub_18006865C @ 0x18006865C (sub_18006865C.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069008 @ 0x180069008 (sub_180069008.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_18008BCEC @ 0x18008BCEC (sub_18008BCEC.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_18009587C @ 0x18009587C (sub_18009587C.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18008D920(__int64 a1, __int128 *a2, int **a3)
{
  __int128 *v4; // r12
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  char v18; // bl
  __int64 *v19; // rax
  int *v20; // r13
  int *v21; // rax
  int *v22; // r12
  __int64 *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int128 v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int128 v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int128 *v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int128 v41; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v42; // [rsp+98h] [rbp-68h]
  __int64 v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v45; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v46[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v49[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v50[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v51[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v52[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v53[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v54[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v55[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v56[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v57; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = a2;
  v42 = a2;
  v38 = &v41;
  v41 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
LABEL_13:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_13;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  v41 = *(_OWORD *)(a1 + 8);
  v9 = sub_18001875C(v52, (__int64)&qword_1801F6478);
  v10 = sub_180056668(v4, v48, (char **)v9, &v41);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  *((_QWORD *)&v32 + 1) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v12;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v48);
  v13 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 15LL;
  LOBYTE(v33) = 0;
  sub_180012190(&v33, "BackgroundUnlit", 0xFuLL);
  sub_18008BCEC(v13, &v33);
  v14 = *(_QWORD *)(a1 + 56);
  if ( (int **)(v14 + 528) != a3 )
  {
    sub_18001CB90(v14 + 528, (__int64)a3);
    v14 = *(_QWORD *)(a1 + 56);
  }
  v15 = sub_18009B410(v14);
  *(_QWORD *)&v41 = v15;
  sub_1800680DC(v16, &qword_1801F66F8);
  sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6718);
  sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6738);
  sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6758);
  v17 = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F63F8);
  v18 = v17;
  v40 = v17;
  sub_18001875C(v53, (__int64)&qword_1801F66F8);
  sub_18001875C(v54, (__int64)&qword_1801F6718);
  sub_18001875C(v55, (__int64)&qword_1801F6738);
  sub_18001875C(v56, (__int64)&qword_1801F6758);
  v45.m128i_i64[0] = (__int64)v53;
  v45.m128i_i64[1] = (__int64)&v57;
  sub_18006C3A8((__int64)v43, &v45);
  sub_18000B4C0((__int64)v53, 32LL, 4LL);
  v19 = sub_180067498((__int64 *)&v44, v43);
  v38 = (__int128 *)sub_180056C78((__int64)v4, v19);
  v39 = sub_1800680DC(*(_QWORD *)(a1 + 56), &qword_1801F6498);
  v20 = *a3;
  v21 = a3[1];
  if ( *a3 != v21 )
  {
    v44 = 0LL;
    v22 = v21;
    do
    {
      sub_180068338(*(_QWORD *)(a1 + 56), *v20);
      v32 = 0LL;
      v23 = (__int64 *)sub_18006865C(*(_QWORD *)(a1 + 56), (__int64)v49, v18);
      v24 = *v23;
      v25 = v23[1];
      *v23 = 0LL;
      v23[1] = 0LL;
      *(_QWORD *)&v32 = v24;
      *((_QWORD *)&v32 + 1) = v25;
      sub_180010910((__int64)&v44);
      sub_180010910((__int64)v49);
      LODWORD(v33) = 0;
      v34 = v15;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      sub_180095F34(v24, &v33);
      sub_180095740(v24, 0, 1, 3, 1);
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = 15LL;
      LOBYTE(v33) = 0;
      sub_180012190(&v33, byte_180128042, 0LL);
      sub_18009587C(v24, 5LL, &v33);
      v26 = sub_180068694(*(_QWORD *)(a1 + 56), v50, (__int64)v38, 0LL, 1);
      v27 = *(_OWORD *)v26;
      *v26 = 0LL;
      v26[1] = 0LL;
      v46[0] = v24;
      v32 = v27;
      v46[1] = v25;
      sub_180010910((__int64)v46);
      sub_180010910((__int64)v50);
      LODWORD(v33) = 0;
      v34 = v41;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      sub_180095F34(v27, &v33);
      sub_180095740(v27, 0, 1, 1, 1);
      v28 = (__int64 *)sub_18006865C(*(_QWORD *)(a1 + 56), (__int64)v51, v39);
      v29 = *v28;
      v30 = v28[1];
      *v28 = 0LL;
      v28[1] = 0LL;
      v47 = v27;
      *(_QWORD *)&v32 = v29;
      *((_QWORD *)&v32 + 1) = v30;
      sub_180010910((__int64)&v47);
      sub_180010910((__int64)v51);
      LODWORD(v33) = 0;
      v15 = v41;
      v34 = v41;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      sub_180095F34(v29, &v33);
      sub_180095740(v29, 1, 1, 1, 1);
      sub_180069008(*(_QWORD *)(a1 + 56));
      sub_180010910((__int64)&v32);
      ++v20;
      v18 = v40;
    }
    while ( v20 != v22 );
    v4 = v42;
  }
  sub_18008CCE4(a1, v4);
  sub_180068E10(*(_QWORD *)(a1 + 56));
  return sub_18005470C(v43, (__int64)v43);
}
