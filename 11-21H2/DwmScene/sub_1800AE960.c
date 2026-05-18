/*
 * XREFs of sub_1800AE960 @ 0x1800AE960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800AE960(__int64 a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  float v8; // xmm1_4
  float v9; // xmm8_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  int v13; // esi
  int v14; // edi
  int v15; // r15d
  __int64 v16; // r12
  __int128 v17; // kr00_16
  __int64 v18; // rbx
  __int128 v19; // kr10_16
  __int64 v20; // rbx
  __int64 result; // rax
  int v22; // r13d
  unsigned __int64 v23; // r15
  void *v24; // rax
  __int64 v25; // rbx
  __int64 *v26; // rax
  float v27; // xmm6_4
  float v28; // xmm7_4
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  _QWORD *v37; // rdi
  __int64 v38; // rbx
  char *v39; // rdx
  char *v40; // rcx
  _QWORD *v41; // r8
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  _QWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // r12
  _QWORD *v52; // rdi
  _QWORD *v53; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // r8
  char *v56; // rcx
  __int64 v57; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h]
  int v59; // [rsp+50h] [rbp-B8h]
  __int128 v60; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h]
  _QWORD v63[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v64[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v65[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v66[5]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v67[4]; // [rsp+E8h] [rbp-20h] BYREF
  char *v68[3]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v69; // [rsp+120h] [rbp+18h]
  char *v70[3]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v71; // [rsp+140h] [rbp+38h]
  char *v72[3]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v73; // [rsp+160h] [rbp+58h]

  v8 = (float)*(int *)(a1 + 376);
  v9 = (float)a3;
  v10 = (float)a3 / v8;
  v11 = (float)a4;
  v12 = (float)a4 / v8;
  *(float *)(a1 + 264) = v10;
  *(float *)(a1 + 268) = v12;
  o_ceilf();
  v13 = (int)v10;
  o_ceilf();
  v14 = (int)v12;
  if ( !(int)v10 )
    v13 = 1;
  if ( !v14 )
    v14 = 1;
  v59 = *(_DWORD *)(a1 + 376);
  v15 = v59;
  v16 = sub_18002850C(a2);
  v62 = v16;
  sub_180010EC0(v16, &v60);
  v17 = v60;
  v60 = 0LL;
  v63[0] = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = v17;
  v63[1] = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = *((_QWORD *)&v17 + 1);
  sub_180010910((__int64)v63);
  sub_180010910((__int64)&v60);
  v18 = *(_QWORD *)(a1 + 184);
  v65[2] = 0LL;
  v65[3] = 15LL;
  LOBYTE(v65[0]) = 0;
  sub_180012190(v65, "ImageProcessingBlurX", 0x14uLL);
  sub_18002BC44(v18, v65);
  sub_18002A240(*(_QWORD *)(a1 + 184), v13, v14, a5, a6, 0LL);
  sub_180010EC0(v16, &v61);
  v19 = v61;
  v61 = 0LL;
  v64[0] = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = v19;
  v64[1] = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = *((_QWORD *)&v19 + 1);
  sub_180010910((__int64)v64);
  sub_180010910((__int64)&v61);
  v20 = *(_QWORD *)(a1 + 200);
  v66[2] = 0LL;
  v66[3] = 15LL;
  LOBYTE(v66[0]) = 0;
  sub_180012190(v66, "ImageProcessingBlurY", 0x14uLL);
  sub_18002BC44(v20, v66);
  sub_18002A240(*(_QWORD *)(a1 + 200), v13, v14, a5, a6, 0LL);
  sub_1800126E8(*(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 224));
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 216);
  result = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) = result;
  v22 = 2;
  if ( v15 >= 2 )
  {
    v23 = 0xFFFFFFFFFFFFFFFLL;
    do
    {
      sub_180010EC0(v16, &v57);
      sub_180029A18((__int64 *)v68, v22);
      v24 = (void *)sub_18001DD3C((__int64)v70, (__int64)"ImageProcessingBlur Downsample ", v68);
      sub_18001DC84((__int64)v72, v24);
      if ( v71 >= 0x10 )
        sub_180010884(v70[0], v71 + 1);
      v70[2] = 0LL;
      v71 = 15LL;
      LOBYTE(v70[0]) = 0;
      if ( v69 >= 0x10 )
        sub_180010884(v68[0], v69 + 1);
      v68[2] = 0LL;
      v69 = 15LL;
      LOBYTE(v68[0]) = 0;
      v25 = v57;
      v26 = sub_18001875C(v67, (__int64)v72);
      sub_18002BC44(v25, v26);
      v27 = v9 / (float)v22;
      v28 = v11 / (float)v22;
      o_ceilf();
      o_ceilf();
      sub_18002A240(v57, (int)v27, (int)v28, a5, a6, 0LL);
      v29 = *(_QWORD *)(a1 + 224);
      v30 = *(_QWORD *)(a1 + 232);
      if ( v29 == v30 )
      {
        v31 = *(_QWORD *)(a1 + 216);
        v32 = (v29 - v31) >> 4;
        if ( v32 == 0xFFFFFFFFFFFFFFFLL )
          sub_180012170();
        v33 = v32 + 1;
        v34 = (v30 - v31) >> 4;
        v35 = v34 >> 1;
        if ( v34 <= 0xFFFFFFFFFFFFFFFLL - (v34 >> 1) )
        {
          v23 = v32 + 1;
          if ( v35 + v34 >= v33 )
            v23 = v35 + v34;
          if ( v23 > 0xFFFFFFFFFFFFFFFLL )
LABEL_44:
            sub_1800120D4();
        }
        v36 = 2 * v23;
        v37 = (_QWORD *)sub_180011088(v36 * 8);
        v38 = 2 * v32;
        v37[v38] = 0LL;
        v37[v38 + 1] = 0LL;
        if ( v58 )
          _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
        v37[v38] = v57;
        v37[v38 + 1] = v58;
        v39 = *(char **)(a1 + 224);
        v40 = *(char **)(a1 + 216);
        v41 = v37;
        if ( (char *)v29 != v39 )
        {
          sub_18001292C(v40, (char *)v29, v37);
          v41 = &v37[v38 + 2];
          v39 = *(char **)(a1 + 224);
          v40 = (char *)v29;
        }
        sub_18001292C(v40, v39, v41);
        v42 = *(_QWORD *)(a1 + 216);
        if ( v42 )
        {
          sub_1800126E8(v42, *(_QWORD *)(a1 + 224));
          sub_180010884(*(char **)(a1 + 216), (*(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 216)) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        *(_QWORD *)(a1 + 216) = v37;
        *(_QWORD *)(a1 + 224) = &v37[2 * v33];
        *(_QWORD *)(a1 + 232) = &v37[v36];
      }
      else
      {
        *(_QWORD *)v29 = 0LL;
        *(_QWORD *)(v29 + 8) = 0LL;
        if ( v58 )
          _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
        *(_QWORD *)v29 = v57;
        *(_QWORD *)(v29 + 8) = v58;
        *(_QWORD *)(a1 + 224) += 16LL;
      }
      v43 = *(_QWORD **)(a1 + 248);
      v44 = *(_QWORD **)(a1 + 256);
      if ( v43 == v44 )
      {
        v45 = *(_QWORD *)(a1 + 240);
        v46 = ((__int64)v43 - v45) >> 3;
        if ( v46 == 0x1FFFFFFFFFFFFFFFLL )
          sub_180012170();
        v47 = v46 + 1;
        v48 = ((__int64)v44 - v45) >> 3;
        if ( v48 <= 0x1FFFFFFFFFFFFFFFLL - (v48 >> 1) )
        {
          v50 = (v48 >> 1) + v48;
          v49 = v46 + 1;
          if ( v50 >= v47 )
            v49 = v50;
          if ( v49 > 0x1FFFFFFFFFFFFFFFLL )
            goto LABEL_44;
        }
        else
        {
          v49 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v51 = v49;
        v52 = (_QWORD *)sub_180011088(8 * v49);
        v52[v46] = __PAIR64__(LODWORD(v28), LODWORD(v27));
        v53 = *(_QWORD **)(a1 + 248);
        v54 = *(_QWORD **)(a1 + 240);
        v55 = v52;
        if ( v43 != v53 )
        {
          sub_180091930(v54, v43, v52);
          v55 = &v52[v46 + 1];
          v53 = *(_QWORD **)(a1 + 248);
          v54 = v43;
        }
        sub_180091930(v54, v53, v55);
        v56 = *(char **)(a1 + 240);
        if ( v56 )
          sub_180010884(v56, (*(_QWORD *)(a1 + 256) - (_QWORD)v56) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)(a1 + 240) = v52;
        *(_QWORD *)(a1 + 248) = &v52[v47];
        *(_QWORD *)(a1 + 256) = &v52[v51];
      }
      else
      {
        *v43 = __PAIR64__(LODWORD(v28), LODWORD(v27));
        *(_QWORD *)(a1 + 248) += 8LL;
      }
      v22 *= 2;
      if ( v73 >= 0x10 )
        sub_180010884(v72[0], v73 + 1);
      result = sub_180010910((__int64)&v57);
      v16 = v62;
      v23 = 0xFFFFFFFFFFFFFFFLL;
    }
    while ( v22 <= v59 );
  }
  return result;
}
