/*
 * XREFs of sub_18008C410 @ 0x18008C410
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
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180068338 @ 0x180068338 (sub_180068338.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069008 @ 0x180069008 (sub_180069008.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008BCEC @ 0x18008BCEC (sub_18008BCEC.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009B038 @ 0x18009B038 (sub_18009B038.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 *     sub_18009B430 @ 0x18009B430 (sub_18009B430.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008C410(__int64 a1, __int128 *a2, int **a3)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int *v22; // r15
  int *v23; // r14
  unsigned __int128 v24; // kr00_16
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int128 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v37; // [rsp+70h] [rbp-90h]
  _QWORD v38[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int128 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v42[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v43; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  __int64 v48[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v49[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v50[4]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v51[4]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v52[5]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v53[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v54[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  v4 = a2;
  *(_QWORD *)&v34 = a2;
  v37 = &v36;
  v36 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
LABEL_15:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_15;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  v36 = *(_OWORD *)(a1 + 8);
  v9 = sub_18001875C(v50, (__int64)&qword_1801F6358);
  v10 = sub_180056668(v4, v48, (char **)v9, &v36);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v38[0] = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  v38[1] = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v12;
  sub_180010910((__int64)v38);
  sub_180010910((__int64)v48);
  v13 = *(_QWORD *)(a1 + 56);
  v40[2] = 0LL;
  v40[3] = 15LL;
  LOBYTE(v40[0]) = 0;
  sub_180012190(v40, "Font", 4uLL);
  sub_18008BCEC(v13, v40);
  v14 = *(_QWORD *)(a1 + 56) + 528LL;
  if ( (int **)v14 != a3 )
    sub_18001CB90(v14, (__int64)a3);
  v15 = sub_18009B410(v14);
  v18 = sub_18009B430(v17, v16) | v15;
  v21 = sub_18009B038(v20, v19) | v18;
  v35 = 0LL;
  v22 = *a3;
  v23 = a3[1];
  if ( v22 != v23 )
  {
    v24 = v35;
    do
    {
      sub_180068338(*(_QWORD *)(a1 + 56), *v22);
      v25 = sub_180068694(*(_QWORD *)(a1 + 56), v49, 0LL, 0LL, 1);
      v26 = *v25;
      v27 = v25[1];
      *v25 = 0LL;
      v25[1] = 0LL;
      v39 = v24;
      *(_QWORD *)&v35 = v26;
      v28 = v27;
      *((_QWORD *)&v35 + 1) = v27;
      sub_180010910((__int64)&v39);
      sub_180010910((__int64)v49);
      *(_QWORD *)&v33 = v41;
      v41[2] = 0LL;
      v41[3] = 15LL;
      LOBYTE(v41[0]) = 0;
      sub_180012190(v41, byte_180128042, 0LL);
      v42[2] = 0LL;
      v42[3] = 15LL;
      LOBYTE(v42[0]) = 0;
      sub_180012190(v42, "Font", 4uLL);
      sub_180095A64(v26, v42, 0LL, v41);
      sub_180095740(v26, 8, 2, 0, 1);
      v43 = 0;
      v44 = v21;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      sub_180095F34(v26, &v43);
      sub_180069008(*(_QWORD *)(a1 + 56));
      ++v22;
      v24 = __PAIR128__(v28, v26);
    }
    while ( v22 != v23 );
    v4 = (__int128 *)v34;
  }
  sub_180056524(v4, &v34, 2u);
  v29 = sub_18001875C(v51, (__int64)&qword_1801F6398);
  sub_18004A344((__int64)v53, (__int64)v29, 5);
  v30 = sub_18001875C(v52, (__int64)&qword_1801F6378);
  sub_18004A344((__int64)v54, (__int64)v30, 8);
  sub_18008FB1C(v34, v53, 2LL, 0LL);
  sub_180090304(v34);
  v31 = *(_QWORD *)(a1 + 56);
  v33 = 0LL;
  if ( *((_QWORD *)&v34 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
  v33 = v34;
  sub_180069D0C(v31, &v33);
  sub_18000B4C0((__int64)v53, 64LL, 2LL);
  sub_180010910((__int64)&v34);
  sub_180068E10(*(_QWORD *)(a1 + 56));
  return sub_180010910((__int64)&v35);
}
