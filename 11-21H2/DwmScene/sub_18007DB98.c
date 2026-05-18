/*
 * XREFs of sub_18007DB98 @ 0x18007DB98
 * Callers:
 *     sub_18002E690 @ 0x18002E690 (sub_18002E690.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002C358 @ 0x18002C358 (sub_18002C358.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_180040B04 @ 0x180040B04 (sub_180040B04.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180049AF0 @ 0x180049AF0 (sub_180049AF0.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18006180C @ 0x18006180C (sub_18006180C.c)
 *     sub_180068348 @ 0x180068348 (sub_180068348.c)
 *     sub_1800694A0 @ 0x1800694A0 (sub_1800694A0.c)
 *     sub_18007CE64 @ 0x18007CE64 (sub_18007CE64.c)
 *     sub_18007CECC @ 0x18007CECC (sub_18007CECC.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18007DB98(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // r15
  _QWORD *v20; // r14
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  bool v23; // bl
  _QWORD *v24; // rax
  char v25; // di
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __m128i v29; // xmm6
  __m128i v30; // kr00_16
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  __int128 *v63; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-D0h]
  __m128i v65; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h]
  __int128 v68; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+78h] [rbp-90h] BYREF
  __m128i v70; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v71[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v72; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v73[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v74[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v75[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v77[2]; // [rsp+F8h] [rbp-10h] BYREF
  int v78; // [rsp+108h] [rbp+0h] BYREF
  __int64 v79; // [rsp+10Ch] [rbp+4h]
  int v80; // [rsp+114h] [rbp+Ch]
  int v81; // [rsp+118h] [rbp+10h]
  int v82; // [rsp+11Ch] [rbp+14h]
  int v83; // [rsp+120h] [rbp+18h]
  __int128 v84; // [rsp+124h] [rbp+1Ch]
  int v85; // [rsp+134h] [rbp+2Ch]
  int v86; // [rsp+138h] [rbp+30h]
  __int128 v87; // [rsp+140h] [rbp+38h] BYREF
  __int64 v88[3]; // [rsp+150h] [rbp+48h] BYREF
  __m128i v89; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v90[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v91[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v92[2]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v93[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v94[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v95[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v96[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v97[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v98[2]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v99[2]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v100[2]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v101[2]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v102[2]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v103[2]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v104[16]; // [rsp+268h] [rbp+160h] BYREF
  _QWORD v105[2]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v106[4]; // [rsp+288h] [rbp+180h] BYREF
  __int64 v107[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v108[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char *v109[3]; // [rsp+2E8h] [rbp+1E0h] BYREF
  unsigned __int64 v110; // [rsp+300h] [rbp+1F8h]

  *(_QWORD *)(a1 + 32) = a2;
  v4 = sub_18002850C(a2);
  v5 = sub_18004576C(v99, v4);
  v6 = *v5;
  v7 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  v66 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 288) = v6;
  v67 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 296) = v7;
  sub_180010910((__int64)&v66);
  sub_180010910((__int64)v99);
  v63 = &v68;
  v68 = 0LL;
  v8 = *(_QWORD *)(a1 + 296);
  if ( v8 )
  {
    *(_QWORD *)&v68 = (*(_QWORD *)(a1 + 288) + 16LL) & -(__int64)(*(_QWORD *)(a1 + 288) != 0LL);
    *((_QWORD *)&v68 + 1) = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
  }
  v9 = *(_QWORD *)(a1 + 32);
  v87 = 0LL;
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
LABEL_42:
    sub_1800120F4();
  v11 = *(_DWORD *)(v10 + 8);
  do
  {
    if ( !v11 )
      goto LABEL_42;
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
  }
  while ( v12 != v11 );
  v13 = *(_QWORD *)(v9 + 8);
  v14 = *(_QWORD *)(v9 + 16);
  v74[0] = (v13 + 24) & -(__int64)(v13 != 0);
  v74[1] = v14;
  v87 = 0LL;
  sub_18002C358((__int64)v74, (__int64)&v68);
  sub_180010910((__int64)&v87);
  v15 = *(_QWORD *)(a1 + 288);
  v16 = sub_1800129F4(v106, (__int64)&qword_1801F8078);
  v109[2] = 0LL;
  v110 = 15LL;
  LOBYTE(v109[0]) = 0;
  sub_180012190((__int64 *)v109, "ImageProcessingCamera", 0x15uLL);
  v17 = sub_180040B04(v109);
  sub_180045304(v15, (__int64)v73, v17, (__int64)v16);
  if ( v110 >= 0x10 )
    sub_180010884(v109[0], v110 + 1);
  v18 = v73[0];
  sub_1800436D4(v73[0]);
  sub_180043668(v18);
  v19 = (_QWORD *)(v18 + 384);
  v20 = *(_QWORD **)(v18 + 384);
  v21 = *(_QWORD **)(v18 + 376);
  if ( v21 != v20 )
  {
    do
    {
      v22 = v21[1];
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
        v22 = v21[1];
      }
      v75[0] = *v21;
      v75[1] = v22;
      sub_18007CE64(v88, v75);
      v23 = sub_1800122C0(v88);
      sub_180010910((__int64)v88);
      sub_180010910((__int64)v75);
      if ( v23 )
        break;
      v21 += 2;
    }
    while ( v21 != v20 );
    v18 = v73[0];
  }
  v24 = (_QWORD *)sub_18001287C((__int64)v21);
  if ( v24 == (_QWORD *)*v19 )
  {
    v76 = 0LL;
LABEL_18:
    v25 = 0;
    goto LABEL_19;
  }
  sub_18007CE64((__int64 *)&v76, v24);
  if ( !(_QWORD)v76 )
    goto LABEL_18;
  v25 = 1;
LABEL_19:
  sub_180010910((__int64)&v76);
  if ( v25 )
  {
    v65 = 0LL;
  }
  else
  {
    v69 = 0LL;
    v26 = *(_QWORD *)(v18 + 16);
    if ( !v26 )
LABEL_43:
      sub_1800120F4();
    v27 = *(_DWORD *)(v26 + 8);
    do
    {
      if ( !v27 )
        goto LABEL_43;
      v28 = v27;
      v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27);
    }
    while ( v28 != v27 );
    v69 = *(_OWORD *)(v18 + 8);
    sub_18007CECC(&v70);
    sub_180010910((__int64)&v69);
    if ( v70.m128i_i64[1] )
      _InterlockedAdd((volatile signed __int32 *)(v70.m128i_i64[1] + 8), 1u);
    v29 = _mm_load_si128(&v70);
    v89 = v29;
    sub_18003FE40(v73[0], (__int64 **)&v89);
    sub_180010910((__int64)&v89);
    v65 = v29;
    v70 = 0LL;
    sub_180010910((__int64)&v70);
  }
  v30 = v65;
  v65 = 0LL;
  v90[0] = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 272) = v30.m128i_i64[0];
  v90[1] = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = v30.m128i_i64[1];
  sub_180010910((__int64)v90);
  sub_180010910((__int64)&v65);
  sub_18006180C(*(_QWORD *)(a1 + 272), &qword_1801F8038);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 16LL))(*(_QWORD *)(a1 + 272));
  v31 = (__int64 *)sub_18002850C(a2);
  v32 = sub_180017428(v31, v100);
  v33 = *v32;
  v34 = v32[1];
  *v32 = 0LL;
  v32[1] = 0LL;
  v91[0] = *(_QWORD *)(a1 + 304);
  *(_QWORD *)(a1 + 304) = v33;
  v91[1] = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(a1 + 312) = v34;
  sub_180010910((__int64)v91);
  sub_180010910((__int64)v100);
  v35 = *(_QWORD *)(a1 + 304);
  v97[2] = 0LL;
  v97[3] = 15LL;
  LOBYTE(v97[0]) = 0;
  sub_180012190(v97, "Image Processing Manager Sampler", 0x20uLL);
  sub_18002BC44(v35, v97);
  v79 = 0LL;
  v80 = 0;
  v81 = 0;
  v82 = 1;
  v83 = 7;
  v85 = 0;
  v86 = 2139095039;
  v78 = 2;
  v84 = 0LL;
  sub_18005C210(*(_QWORD **)(a1 + 304), &v78, 0LL);
  v36 = sub_180037388(v4);
  v37 = sub_18001875C(v107, (__int64)&qword_1801F5FF8);
  v38 = sub_180057684(v36, v101, (char **)v37);
  v39 = *v38;
  v40 = v38[1];
  *v38 = 0LL;
  v38[1] = 0LL;
  v98[0] = *(_QWORD *)(a1 + 432);
  *(_QWORD *)(a1 + 432) = v39;
  v98[1] = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = v40;
  sub_180010910((__int64)v98);
  sub_180010910((__int64)v101);
  v41 = (__int64 *)sub_1800694A0(*(_QWORD *)(a1 + 432), v102);
  v42 = *v41;
  v43 = v41[1];
  *v41 = 0LL;
  v41[1] = 0LL;
  v92[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v42;
  v92[1] = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = v43;
  sub_180010910((__int64)v92);
  sub_180010910((__int64)v102);
  v44 = sub_180068348(*(__int128 **)(a1 + 432), v103);
  v45 = *v44;
  v46 = v44[1];
  *v44 = 0LL;
  v44[1] = 0LL;
  v93[0] = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v45;
  v93[1] = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = v46;
  sub_180010910((__int64)v93);
  sub_180010910((__int64)v103);
  v47 = sub_18002850C(a2);
  v48 = sub_180036808(v47, 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v48 + 72LL))(
                            v48,
                            &qword_1801F99D8,
                            0LL);
  LOBYTE(v49) = 1;
  sub_180049AF0(*(_QWORD *)(a1 + 400), (__int64)&qword_1801F5FB8, v49);
  v50 = (__int64 *)sub_18009BCE8(v104, v4);
  v51 = *v50;
  v52 = v50[1];
  *v50 = 0LL;
  v50[1] = 0LL;
  v94[0] = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 320) = v51;
  v94[1] = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v52;
  sub_180010910((__int64)v94);
  sub_180010910((__int64)v104);
  v53 = *(_QWORD *)(a1 + 288);
  v54 = sub_1800129F4(v108, (__int64)&qword_1801F8038);
  sub_180046470(v53, (__int64)v77, (char **)v54);
  sub_18001490C(v77[0], &v63);
  v55 = (__int64)v63;
  if ( !v63 )
  {
    v56 = sub_1800146D0(v77[0], v105);
    v55 = *v56;
    v57 = v56[1];
    *v56 = 0LL;
    v56[1] = 0LL;
    v95[0] = 0LL;
    v63 = (__int128 *)v55;
    v95[1] = v64;
    v64 = v57;
    sub_180010910((__int64)v95);
    sub_180010910((__int64)v105);
  }
  v58 = *(_QWORD *)(a1 + 328);
  if ( v58 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
    v58 = *(_QWORD *)(a1 + 328);
    v55 = (__int64)v63;
  }
  v59 = *(_QWORD *)(a1 + 320);
  v71[0] = v59;
  v71[1] = v58;
  v60 = (_QWORD *)(v55 + 88);
  if ( v58 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
    v55 = (__int64)v63;
    v59 = v71[0];
  }
  v96[0] = *v60;
  *v60 = v59;
  v96[1] = v60[1];
  v60[1] = v58;
  sub_180010910((__int64)v96);
  sub_180010910((__int64)v71);
  v72 = 0LL;
  v61 = *(_QWORD *)(a1 + 376);
  if ( v61 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v61 + 8), 1u);
    v61 = *(_QWORD *)(a1 + 376);
    v55 = (__int64)v63;
  }
  *(_QWORD *)&v72 = *(_QWORD *)(a1 + 368);
  *((_QWORD *)&v72 + 1) = v61;
  sub_180053418(v55, &v72);
  *(_BYTE *)(v55 + 72) = 0;
  if ( v64 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v64 + 8), 1u);
    v55 = (__int64)v63;
  }
  v66 = *(_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 336) = v55;
  v67 = *(_QWORD *)(a1 + 344);
  *(_QWORD *)(a1 + 344) = v64;
  sub_180010910((__int64)&v66);
  sub_180010910((__int64)&v63);
  sub_180010910((__int64)v77);
  return sub_180010910((__int64)v73);
}
