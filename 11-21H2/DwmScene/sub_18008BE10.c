/*
 * XREFs of sub_18008BE10 @ 0x18008BE10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
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
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009B038 @ 0x18009B038 (sub_18009B038.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 *     sub_18009B420 @ 0x18009B420 (sub_18009B420.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18008BE10(__int64 a1, __int128 *a2, int **a3)
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
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int128 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int128 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v46; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v47; // [rsp+100h] [rbp+0h]
  __int128 v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 v50; // [rsp+120h] [rbp+20h]
  __int64 v51[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v52[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v53[4]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v54[4]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v55[4]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v56[4]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v57[5]; // [rsp+1C8h] [rbp+C8h] BYREF
  char *v58[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v59; // [rsp+208h] [rbp+108h]
  char *v60; // [rsp+218h] [rbp+118h]
  __int128 v61; // [rsp+220h] [rbp+120h]
  char *v62[3]; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v63; // [rsp+248h] [rbp+148h]
  char *v64; // [rsp+258h] [rbp+158h]
  __int128 v65; // [rsp+260h] [rbp+160h]
  char *v66[3]; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v67; // [rsp+288h] [rbp+188h]
  char *v68; // [rsp+298h] [rbp+198h]
  __int128 v69; // [rsp+2A0h] [rbp+1A0h]
  char *v70[3]; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned __int64 v71; // [rsp+2C8h] [rbp+1C8h]
  char *v72; // [rsp+2D8h] [rbp+1D8h]
  __int128 v73; // [rsp+2E0h] [rbp+1E0h]

  v4 = a2;
  *(_QWORD *)&v37 = a2;
  v40 = &v39;
  v39 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
LABEL_31:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_31;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  v39 = *(_OWORD *)(a1 + 8);
  v9 = sub_18001875C(v53, (__int64)&qword_1801F6258);
  v10 = sub_180056668(v4, v51, (char **)v9, &v39);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v41[0] = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  v41[1] = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v12;
  sub_180010910((__int64)v41);
  sub_180010910((__int64)v51);
  v13 = *(_QWORD *)(a1 + 56);
  v43[2] = 0LL;
  v43[3] = 15LL;
  LOBYTE(v43[0]) = 0;
  sub_180012190(v43, "Symbol", 6uLL);
  sub_18008BCEC(v13, v43);
  v14 = *(_QWORD *)(a1 + 56) + 528LL;
  if ( (int **)v14 != a3 )
    sub_18001CB90(v14, (__int64)a3);
  v15 = sub_18009B410(v14);
  v18 = sub_18009B038(v17, v16) | v15;
  v21 = sub_18009B420(v20, v19) | v18;
  v38 = 0LL;
  v22 = *a3;
  v23 = a3[1];
  if ( v22 != v23 )
  {
    v24 = v38;
    do
    {
      sub_180068338(*(_QWORD *)(a1 + 56), *v22);
      v25 = sub_180068694(*(_QWORD *)(a1 + 56), v52, 0LL, 0LL, 1);
      v26 = *v25;
      v27 = v25[1];
      *v25 = 0LL;
      v25[1] = 0LL;
      v42 = v24;
      *(_QWORD *)&v38 = v26;
      v28 = v27;
      *((_QWORD *)&v38 + 1) = v27;
      sub_180010910((__int64)&v42);
      sub_180010910((__int64)v52);
      *(_QWORD *)&v36 = v44;
      v44[2] = 0LL;
      v44[3] = 15LL;
      LOBYTE(v44[0]) = 0;
      sub_180012190(v44, byte_180128042, 0LL);
      v45[2] = 0LL;
      v45[3] = 15LL;
      LOBYTE(v45[0]) = 0;
      sub_180012190(v45, "Symbol", 6uLL);
      sub_180095A64(v26, v45, 0LL, v44);
      sub_180095740(v26, 8, 2, 0, 1);
      v46 = 0;
      v47 = v21;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      sub_180095F34(v26, &v46);
      sub_180069008(*(_QWORD *)(a1 + 56));
      ++v22;
      v24 = __PAIR128__(v28, v26);
    }
    while ( v22 != v23 );
    v4 = (__int128 *)v37;
  }
  sub_180056524(v4, &v37, 4u);
  v29 = sub_18001875C(v54, (__int64)&qword_1801F6278);
  sub_18004A344((__int64)v58, (__int64)v29, 7);
  v30 = v37;
  sub_18008FBE8(v37, v58, 0LL);
  if ( v60 )
  {
    sub_180010884(v60, (*((_QWORD *)&v61 + 1) - (_QWORD)v60) & 0xFFFFFFFFFFFFFFFCuLL);
    v60 = 0LL;
    v61 = 0LL;
  }
  if ( v59 >= 0x10 )
    sub_180010884(v58[0], v59 + 1);
  v31 = sub_18001875C(v55, (__int64)&qword_1801F6298);
  sub_18004A344((__int64)v62, (__int64)v31, 5);
  sub_18008FBE8(v30, v62, 0LL);
  if ( v64 )
  {
    sub_180010884(v64, (*((_QWORD *)&v65 + 1) - (_QWORD)v64) & 0xFFFFFFFFFFFFFFFCuLL);
    v64 = 0LL;
    v65 = 0LL;
  }
  if ( v63 >= 0x10 )
    sub_180010884(v62[0], v63 + 1);
  v32 = sub_18001875C(v56, (__int64)&qword_1801F62B8);
  sub_18004A344((__int64)v66, (__int64)v32, 2);
  sub_18008FBE8(v30, v66, 0LL);
  if ( v68 )
  {
    sub_180010884(v68, (*((_QWORD *)&v69 + 1) - (_QWORD)v68) & 0xFFFFFFFFFFFFFFFCuLL);
    v68 = 0LL;
    v69 = 0LL;
  }
  if ( v67 >= 0x10 )
    sub_180010884(v66[0], v67 + 1);
  v33 = sub_18001875C(v57, (__int64)&qword_1801F62D8);
  sub_18004A344((__int64)v70, (__int64)v33, 2);
  sub_18008FBE8(v30, v70, 0LL);
  if ( v72 )
  {
    sub_180010884(v72, (*((_QWORD *)&v73 + 1) - (_QWORD)v72) & 0xFFFFFFFFFFFFFFFCuLL);
    v72 = 0LL;
    v73 = 0LL;
  }
  if ( v71 >= 0x10 )
    sub_180010884(v70[0], v71 + 1);
  sub_180090304(v30);
  v34 = *(_QWORD *)(a1 + 56);
  v36 = 0LL;
  if ( *((_QWORD *)&v37 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
  v36 = v37;
  sub_180069D0C(v34, &v36);
  sub_180010910((__int64)&v37);
  sub_180068E10(*(_QWORD *)(a1 + 56));
  return sub_180010910((__int64)&v38);
}
