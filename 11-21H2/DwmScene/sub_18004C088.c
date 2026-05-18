/*
 * XREFs of sub_18004C088 @ 0x18004C088
 * Callers:
 *     sub_18008A4C0 @ 0x18008A4C0 (sub_18008A4C0.c)
 *     sub_18008C990 @ 0x18008C990 (sub_18008C990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18004A1EC @ 0x18004A1EC (sub_18004A1EC.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_18004A498 @ 0x18004A498 (sub_18004A498.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008F6BC @ 0x18008F6BC (sub_18008F6BC.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_1800904AC @ 0x1800904AC (sub_1800904AC.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall sub_18004C088(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int128 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+68h] [rbp-98h] BYREF
  __int128 v40; // [rsp+78h] [rbp-88h] BYREF
  __int128 v41; // [rsp+88h] [rbp-78h] BYREF
  __int128 v42; // [rsp+98h] [rbp-68h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v47; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v48[19]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v49[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v50[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v51[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v52[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v53[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v54[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v55[4]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v56[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v57[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v58[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v59[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v60[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v61[4]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v62[4]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v63[4]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v64[64]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v65[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v66[64]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _BYTE v67[64]; // [rsp+430h] [rbp+330h] BYREF
  _BYTE v68[64]; // [rsp+470h] [rbp+370h] BYREF
  _BYTE v69[64]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v70[64]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _BYTE v71[64]; // [rsp+530h] [rbp+430h] BYREF
  _BYTE v72[64]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v73[64]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v74[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _BYTE v75[64]; // [rsp+630h] [rbp+530h] BYREF
  _BYTE v76[64]; // [rsp+670h] [rbp+570h] BYREF
  _BYTE v77[64]; // [rsp+6B0h] [rbp+5B0h] BYREF
  _BYTE v78[64]; // [rsp+6F0h] [rbp+5F0h] BYREF

  v38 = a2;
  sub_180056524(a1, &v35, 0LL);
  v4 = sub_18001875C(v62, (__int64)&qword_1801F4DB8);
  sub_18004A344((__int64)v64, (__int64)v4, 7);
  v5 = sub_18001875C(v63, (__int64)&qword_1801F4DD8);
  sub_18004A344((__int64)v65, (__int64)v5, 7);
  v6 = sub_18001875C(v49, (__int64)&qword_1801F4DF8);
  sub_18004A344((__int64)v66, (__int64)v6, 2);
  v7 = sub_18001875C(v50, (__int64)&qword_1801F4E18);
  sub_18004A344((__int64)v67, (__int64)v7, 2);
  v8 = sub_18001875C(v51, (__int64)&qword_1801F4E38);
  sub_18004A344((__int64)v68, (__int64)v8, 2);
  v9 = v35;
  sub_18008FB1C(v35, v64, 5LL, 0LL);
  sub_1800904AC(v9, &qword_1801F4DB8);
  *(_OWORD *)&v48[3] = xmmword_1801289D0;
  *(_OWORD *)&v48[5] = xmmword_1801289E0;
  *(_OWORD *)&v48[7] = xmmword_1801289F0;
  *(_OWORD *)&v48[9] = xmmword_180128A00;
  sub_18004A1EC();
  sub_1800904AC(v9, &qword_1801F4DD8);
  *(_OWORD *)&v48[11] = xmmword_1801289D0;
  *(_OWORD *)&v48[13] = xmmword_1801289E0;
  *(_OWORD *)&v48[15] = xmmword_1801289F0;
  *(_OWORD *)&v48[17] = xmmword_180128A00;
  sub_18004A1EC();
  sub_180090304(v9);
  v10 = *a2;
  v37 = 0LL;
  if ( *((_QWORD *)&v35 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL));
  v37 = v35;
  sub_180069D0C(v10, &v37);
  sub_18000B4C0((__int64)v64, 64LL, 5LL);
  sub_180010910((__int64)&v35);
  sub_180056524(a1, &v36, 9LL);
  v11 = v36;
  sub_18008F6BC(v36, &qword_1801F4FD8, 7LL, 3LL);
  v39 = 0LL;
  v12 = sub_18001875C(v52, (__int64)&qword_1801F4E58);
  sub_18004A498((__int64)v69, (__int64)v12, v13, &v39);
  v40 = 0LL;
  v14 = sub_18001875C(v53, (__int64)&qword_1801F4E78);
  sub_18004A498((__int64)v70, (__int64)v14, v15, &v40);
  v41 = 0LL;
  v16 = sub_18001875C(v54, (__int64)&qword_1801F4E98);
  sub_18004A498((__int64)v71, (__int64)v16, v17, &v41);
  v42 = 0LL;
  v18 = sub_18001875C(v55, (__int64)&qword_1801F4EB8);
  sub_18004A498((__int64)v72, (__int64)v18, v19, &v42);
  v43 = 0LL;
  v20 = sub_18001875C(v56, (__int64)&qword_1801F4ED8);
  sub_18004A498((__int64)v73, (__int64)v20, v21, &v43);
  v44 = 0LL;
  v22 = sub_18001875C(v57, (__int64)&qword_1801F4EF8);
  sub_18004A498((__int64)v74, (__int64)v22, v23, &v44);
  v45 = 0LL;
  v24 = sub_18001875C(v58, (__int64)&qword_1801F4F18);
  sub_18004A498((__int64)v75, (__int64)v24, v25, &v45);
  v46 = 0LL;
  v26 = sub_18001875C(v59, (__int64)&qword_1801F4F38);
  sub_18004A498((__int64)v76, (__int64)v26, v27, &v46);
  v47 = 0LL;
  v28 = sub_18001875C(v60, (__int64)&qword_1801F4F58);
  sub_18004A498((__int64)v77, (__int64)v28, v29, &v47);
  *(_OWORD *)v48 = 0LL;
  v30 = sub_18001875C(v61, (__int64)&qword_1801F4F78);
  sub_18004A498((__int64)v78, (__int64)v30, v31, (__int128 *)v48);
  sub_18008FB1C(v11, v69, 10LL, 0LL);
  sub_18008F6BC(v11, &qword_1801F4FF8, 5LL, 3LL);
  sub_18008F6BC(v11, &qword_1801F5018, 5LL, 3LL);
  sub_18008F6BC(v11, &qword_1801F5038, 5LL, 3LL);
  sub_18008F6BC(v11, &qword_1801F4F98, 5LL, 3LL);
  sub_18008F6BC(v11, &qword_1801F4FB8, 5LL, 3LL);
  sub_180090304(v11);
  v32 = *a2;
  v34 = 0LL;
  if ( *((_QWORD *)&v36 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL));
  v34 = v36;
  sub_180069D0C(v32, &v34);
  sub_18000B4C0((__int64)v69, 64LL, 10LL);
  sub_180010910((__int64)&v36);
  return sub_180010910((__int64)a2);
}
