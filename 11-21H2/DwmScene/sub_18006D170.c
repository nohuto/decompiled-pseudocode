/*
 * XREFs of sub_18006D170 @ 0x18006D170
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 *     sub_180026A30 @ 0x180026A30 (sub_180026A30.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18003460C @ 0x18003460C (sub_18003460C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180040B04 @ 0x180040B04 (sub_180040B04.c)
 *     sub_180045304 @ 0x180045304 (sub_180045304.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x1800474EC (-SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18006180C @ 0x18006180C (sub_18006180C.c)
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 *     sub_180065628 @ 0x180065628 (sub_180065628.c)
 *     sub_18006564C @ 0x18006564C (sub_18006564C.c)
 *     sub_180065724 @ 0x180065724 (sub_180065724.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_18006A2D8 @ 0x18006A2D8 (sub_18006A2D8.c)
 *     sub_18006A444 @ 0x18006A444 (sub_18006A444.c)
 *     sub_18006B798 @ 0x18006B798 (sub_18006B798.c)
 *     sub_18006C060 @ 0x18006C060 (sub_18006C060.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_18006C518 @ 0x18006C518 (sub_18006C518.c)
 *     sub_18006C764 @ 0x18006C764 (sub_18006C764.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_180078514 @ 0x180078514 (sub_180078514.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_18006D170(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // xmm6_8
  __int64 *v9; // rsi
  void **v10; // rdx
  __int64 v11; // rcx
  char v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  void **v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // xmm1_8
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // xmm1_8
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rsi
  char v35; // bl
  struct Concurrency::details::_TaskCollectionBase *v36; // rdi
  __int64 v37; // rbx
  __int64 *v38; // rax
  Concurrency::details::ContextBase **v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  char *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // r8
  __int64 *v45; // rax
  __int64 *v46; // rax
  char v47; // si
  __int64 result; // rax
  int v49; // [rsp+38h] [rbp-D0h]
  __int64 v50; // [rsp+40h] [rbp-C8h]
  __int128 v51; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v52; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v53[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h] BYREF
  __int128 v55; // [rsp+98h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v60; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v62; // [rsp+108h] [rbp+0h] BYREF
  __int128 v63; // [rsp+118h] [rbp+10h] BYREF
  __int128 v64; // [rsp+128h] [rbp+20h] BYREF
  __int64 v65; // [rsp+138h] [rbp+30h]
  __int128 v66; // [rsp+148h] [rbp+40h] BYREF
  __int128 v67; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v68[2]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v69[2]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v70[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v71[2]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v72[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v73; // [rsp+1B8h] [rbp+B0h] BYREF
  char v74; // [rsp+1C0h] [rbp+B8h]
  __m128i v75; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128i v76; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v77[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v78[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v79; // [rsp+208h] [rbp+100h] BYREF
  char v80; // [rsp+210h] [rbp+108h]
  __int64 v81[4]; // [rsp+218h] [rbp+110h] BYREF
  __int64 v82[4]; // [rsp+238h] [rbp+130h] BYREF
  __m128i si128; // [rsp+258h] [rbp+150h] BYREF
  int v84; // [rsp+268h] [rbp+160h]
  __int64 v85; // [rsp+26Ch] [rbp+164h]
  __int128 v86; // [rsp+274h] [rbp+16Ch]
  int v87; // [rsp+284h] [rbp+17Ch]
  int v88; // [rsp+288h] [rbp+180h]
  __m128i v89; // [rsp+290h] [rbp+188h] BYREF
  int v90; // [rsp+2A0h] [rbp+198h]
  int v91; // [rsp+2A4h] [rbp+19Ch]
  int v92; // [rsp+2A8h] [rbp+1A0h]
  __int128 v93; // [rsp+2ACh] [rbp+1A4h]
  int v94; // [rsp+2BCh] [rbp+1B4h]
  int v95; // [rsp+2C0h] [rbp+1B8h]
  float v96; // [rsp+2C8h] [rbp+1C0h] BYREF
  char *v97; // [rsp+2D0h] [rbp+1C8h] BYREF
  char *v98; // [rsp+2E0h] [rbp+1D8h]
  __int128 v99; // [rsp+2E8h] [rbp+1E0h]
  __int64 v100; // [rsp+308h] [rbp+200h] BYREF
  __int64 v101; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v102[16]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v103[4]; // [rsp+338h] [rbp+230h] BYREF
  char *v104; // [rsp+358h] [rbp+250h] BYREF
  char *v105; // [rsp+360h] [rbp+258h]
  __int64 v106; // [rsp+368h] [rbp+260h]
  unsigned __int64 v107; // [rsp+370h] [rbp+268h]
  char *v108[2]; // [rsp+378h] [rbp+270h] BYREF
  __int64 v109; // [rsp+388h] [rbp+280h]
  unsigned __int64 v110; // [rsp+390h] [rbp+288h]
  void *Src[2]; // [rsp+398h] [rbp+290h] BYREF
  size_t Size; // [rsp+3A8h] [rbp+2A0h]
  unsigned __int64 v113; // [rsp+3B0h] [rbp+2A8h]
  void *v114[2]; // [rsp+3B8h] [rbp+2B0h] BYREF
  size_t v115; // [rsp+3C8h] [rbp+2C0h]
  unsigned __int64 v116; // [rsp+3D0h] [rbp+2C8h]
  char *v117[2]; // [rsp+3D8h] [rbp+2D0h] BYREF
  unsigned __int64 v118; // [rsp+3E8h] [rbp+2E0h]
  unsigned __int64 v119; // [rsp+3F0h] [rbp+2E8h]
  char *v120[3]; // [rsp+3F8h] [rbp+2F0h] BYREF
  unsigned __int64 v121; // [rsp+410h] [rbp+308h]
  char *v122[3]; // [rsp+418h] [rbp+310h] BYREF
  unsigned __int64 v123; // [rsp+430h] [rbp+328h]
  char *v124[3]; // [rsp+438h] [rbp+330h] BYREF
  unsigned __int64 v125; // [rsp+450h] [rbp+348h]
  __int64 v126[4]; // [rsp+458h] [rbp+350h] BYREF
  __int64 v127[4]; // [rsp+478h] [rbp+370h] BYREF
  __int64 v128; // [rsp+498h] [rbp+390h] BYREF

  v49 = 0;
  sub_18002C3FC(*a2 + 16, (__int64)&v79);
  v4 = (_QWORD *)sub_18006A444(*a2);
  v5 = *a2;
  v6 = sub_1800129F4((__int64 *)v122, (__int64)&qword_1801F8078);
  v106 = 0LL;
  v107 = 15LL;
  LOBYTE(v104) = 0;
  sub_180012190((__int64 *)&v104, "MainCamera", 0xAuLL);
  v7 = sub_180040B04(&v104);
  sub_180045304(v5, (__int64)v78, v7, (__int64)v6);
  if ( v107 >= 0x10 )
    sub_180010884(v104, v107 + 1);
  sub_18006A2D8(v78[0], &v52);
  v66 = 0LL;
  if ( *((_QWORD *)&v52 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL));
  v8 = v52;
  v66 = v52;
  sub_18003460C((__int64)a1, (__int64 *)&v66);
  Size = 0LL;
  v113 = 15LL;
  LOBYTE(Src[0]) = 0;
  sub_180012190((__int64 *)Src, "MainCamera", 0xAuLL);
  v9 = (__int64 *)v8;
  if ( (void **)(v8 + 24) != Src )
  {
    v10 = Src;
    if ( v113 >= 0x10 )
      v10 = (void **)Src[0];
    sub_180012190((__int64 *)(v8 + 24), v10, Size);
  }
  if ( v113 >= 0x10 )
    sub_180010884((char *)Src[0], v113 + 1);
  if ( *(_BYTE *)(v8 + 336) != 1 )
  {
    *(_BYTE *)(v8 + 336) = 1;
    *(_BYTE *)(v8 + 1612) = 1;
  }
  sub_180065628(v8, 256, 1);
  sub_180065628(v11, 0x2000000, v12);
  sub_18006180C(v13, &qword_1801F7FF8);
  sub_18006180C(v8, &qword_1801F7FD8);
  sub_18006180C(v8, &qword_1801F8018);
  sub_18006180C(v8, &qword_1801F8058);
  *(_BYTE *)(v8 + 465) |= 7u;
  v14 = *a2;
  v15 = sub_1800129F4(v103, (__int64)&qword_1801F8078);
  v120[2] = 0LL;
  v121 = 15LL;
  LOBYTE(v120[0]) = 0;
  sub_180012190((__int64 *)v120, "ReflectionCamera", 0x10uLL);
  v16 = sub_180040B04(v120);
  sub_180045304(v14, (__int64)v77, v16, (__int64)v15);
  if ( v121 >= 0x10 )
    sub_180010884(v120[0], v121 + 1);
  sub_18006A2D8(v77[0], &v51);
  v67 = 0LL;
  v17 = *((_QWORD *)&v51 + 1);
  if ( *((_QWORD *)&v51 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v51 + 1) + 8LL));
    v9 = (__int64 *)v52;
    v17 = *((_QWORD *)&v51 + 1);
  }
  v67 = v51;
  sub_18003460C((__int64)a1, (__int64 *)&v67);
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v9 = (__int64 *)v52;
    v17 = *((_QWORD *)&v51 + 1);
  }
  v72[0] = v4[23];
  v18 = v51;
  v4[23] = v51;
  v72[1] = v4[24];
  v4[24] = v17;
  sub_180010910((__int64)v72);
  sub_180065628(v18, 512, 1);
  v115 = 0LL;
  v116 = 15LL;
  LOBYTE(v114[0]) = 0;
  sub_180012190((__int64 *)v114, "PlanarReflectionCamera", 0x16uLL);
  if ( (void **)(v18 + 24) != v114 )
  {
    v19 = v114;
    if ( v116 >= 0x10 )
      v19 = (void **)v114[0];
    sub_180012190((__int64 *)(v18 + 24), v19, v115);
  }
  if ( v116 >= 0x10 )
    sub_180010884((char *)v114[0], v116 + 1);
  *(_QWORD *)(v18 + 296) = 0LL;
  *(_DWORD *)(v18 + 304) = 0;
  *(_DWORD *)(v18 + 308) = 1065353216;
  sub_18006564C(v18, 0);
  sub_18006180C(v20, &qword_1801F7FF8);
  sub_18006180C(v18, &qword_1801F7FD8);
  sub_180065724(v18, 100);
  sub_18002C460((__int64)(a1 + 1), (__int64)&v73);
  sub_180017428(a1, &v54);
  v84 = 0;
  v85 = 1LL;
  v88 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7A0);
  v86 = xmmword_1801BD9C0;
  v87 = -8388609;
  sub_18005C210((_QWORD *)v54, &si128, 0LL);
  v21 = v54;
  v81[2] = 0LL;
  v81[3] = 15LL;
  LOBYTE(v81[0]) = 0;
  sub_180012190(v81, "ColorTransformSampler", 0x15uLL);
  sub_18002BC44(v21, v81);
  v22 = v54;
  v56 = v54;
  v54 = 0LL;
  *(_QWORD *)&v56 = v4[29];
  v4[29] = v22;
  v23 = *((_QWORD *)&v56 + 1);
  *((_QWORD *)&v56 + 1) = v4[30];
  v4[30] = v23;
  sub_180010910((__int64)&v56);
  sub_180010910((__int64)&v54);
  sub_180017428(a1, &v55);
  v90 = 0;
  v91 = 1;
  v92 = 7;
  v93 = xmmword_1801BD980;
  v94 = 0;
  v95 = 2139095039;
  v89 = _mm_load_si128((const __m128i *)&xmmword_1801BD730);
  sub_18005C210((_QWORD *)v55, &v89, 0LL);
  v24 = v55;
  v82[2] = 0LL;
  v82[3] = 15LL;
  LOBYTE(v82[0]) = 0;
  sub_180012190(v82, "EnvironmentMapSampler", 0x15uLL);
  sub_18002BC44(v24, v82);
  v25 = v55;
  v57 = v55;
  v55 = 0LL;
  *(_QWORD *)&v57 = v4[31];
  v4[31] = v25;
  v26 = *((_QWORD *)&v57 + 1);
  *((_QWORD *)&v57 + 1) = v4[32];
  v4[32] = v26;
  sub_180010910((__int64)&v57);
  sub_180010910((__int64)&v55);
  if ( v74 )
    j_LanguageEnumProc(v73);
  v27 = sub_180037388((__int64)a1);
  sub_18001875C(v127, (__int64)&qword_1801F5B78);
  v75.m128i_i64[0] = (__int64)v127;
  v75.m128i_i64[1] = (__int64)&v128;
  sub_18006C3A8((__int64)v71, &v75);
  sub_18000B4C0((__int64)v127, 32LL, 1LL);
  v28 = sub_180067498(&v100, v71);
  v65 = sub_180056C78(v27, v28);
  sub_18001875C(v126, (__int64)&qword_1801F5BB8);
  v76.m128i_i64[0] = (__int64)v126;
  v76.m128i_i64[1] = (__int64)v127;
  sub_18006C3A8((__int64)v70, &v76);
  sub_18000B4C0((__int64)v126, 32LL, 1LL);
  v29 = sub_180067498(&v101, v70);
  v50 = sub_180056C78(v27, v29);
  v30 = sub_18001D684();
  v31 = v30;
  if ( v30 )
  {
    *(_DWORD *)(v30 + 8) = 1;
    *(_DWORD *)(v30 + 12) = 1;
    *(_QWORD *)v30 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180026A30();
  }
  else
  {
    v31 = 0LL;
  }
  v53[0] = v31 + 16;
  v53[1] = v31;
  v32 = sub_18001D684();
  if ( v32 )
  {
    *(_DWORD *)(v32 + 8) = 1;
    *(_DWORD *)(v32 + 12) = 1;
    *(_QWORD *)v32 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18006B798(v32 + 16);
  }
  v69[0] = v32 + 16;
  v69[1] = v32;
  v58 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v9 = (__int64 *)v52;
    v18 = v51;
  }
  *(_QWORD *)&v58 = v53[0];
  *((_QWORD *)&v58 + 1) = v31;
  sub_1800618A8(v9, 0LL, 256LL, (__int64 *)&v58, v65);
  v59 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v9 = (__int64 *)v52;
    v18 = v51;
  }
  *(_QWORD *)&v59 = v53[0];
  *((_QWORD *)&v59 + 1) = v31;
  sub_1800618A8(v9, 0LL, 768LL, (__int64 *)&v59, 0LL);
  v60 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v9 = (__int64 *)v52;
    v18 = v51;
  }
  *(_QWORD *)&v60 = v53[0];
  *((_QWORD *)&v60 + 1) = v31;
  sub_1800618A8(v9, 512LL, 0LL, (__int64 *)&v60, 0LL);
  v61 = 0LL;
  if ( v32 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
    v9 = (__int64 *)v52;
    v18 = v51;
  }
  *(_QWORD *)&v61 = v69[0];
  *((_QWORD *)&v61 + 1) = v32;
  sub_1800618A8(v9, 256LL, 0LL, (__int64 *)&v61, v50);
  v33 = sub_18001D684();
  v34 = v33;
  if ( v33 )
  {
    *(_DWORD *)(v33 + 8) = 1;
    *(_DWORD *)(v33 + 12) = 1;
    *(_QWORD *)v33 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18006B798(v33 + 16);
  }
  else
  {
    v34 = 0LL;
  }
  v68[0] = v34 + 16;
  v68[1] = v34;
  v62 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v18 = v51;
  }
  *(_QWORD *)&v62 = v53[0];
  *((_QWORD *)&v62 + 1) = v31;
  sub_1800618A8((__int64 *)v18, 512LL, 0LL, (__int64 *)&v62, 0LL);
  v63 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
    v18 = v51;
  }
  *(_QWORD *)&v63 = v53[0];
  *((_QWORD *)&v63 + 1) = v31;
  sub_1800618A8((__int64 *)v18, 512LL, 768LL, (__int64 *)&v63, 0LL);
  v64 = 0LL;
  if ( v34 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
    v18 = v51;
  }
  *(_QWORD *)&v64 = v68[0];
  *((_QWORD *)&v64 + 1) = v34;
  sub_1800618A8((__int64 *)v18, 256LL, 0LL, (__int64 *)&v64, v50);
  v109 = 0LL;
  v110 = 15LL;
  LOBYTE(v108[0]) = 0;
  sub_180012190((__int64 *)v108, "Background", 0xAuLL);
  v35 = sub_180055F60(v27, (__int64 *)v108);
  if ( v110 >= 0x10 )
    sub_180010884(v108[0], v110 + 1);
  v36 = (struct Concurrency::details::_TaskCollectionBase *)(1LL << v35);
  v37 = *a2;
  v38 = sub_1800129F4((__int64 *)v122, (__int64)&qword_1801F7FF8);
  v39 = (Concurrency::details::ContextBase **)sub_18004614C(v37, v117, (char *)v38);
  Concurrency::details::ContextBase::SetExecutingCollection(*v39, v36);
  sub_180010910((__int64)v117);
  (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(*a1 + 168))(a1, v27, a2);
  sub_18006E9E4(a1, a2);
  sub_18006C518((__int64)&v96);
  v40 = sub_180036808((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, char **))(*(_QWORD *)v40 + 208LL))(v40, &v104);
  v42 = v104;
  v43 = (__int64)v105;
  if ( v104 != v105 )
  {
    do
    {
      sub_18001FB6C((__int64 *)v124, L"Camera.", v41);
      sub_18001FB6C((__int64 *)v117, L"/Internal/Camera.", v44);
      v45 = sub_180020E2C(v42, (__int64 *)v122, 0LL, (unsigned __int64)v124[2]);
      v49 |= 1u;
      if ( sub_18001FE44((char *)v45, v124)
        || (v46 = sub_180020E2C(v42, (__int64 *)v108, 0LL, v118), v49 |= 2u, v47 = 0, sub_18001FE44((char *)v46, v117)) )
      {
        v47 = 1;
      }
      if ( (v49 & 2) != 0 )
      {
        v49 &= ~2u;
        if ( v110 >= 8 )
          sub_180010884(v108[0], 2 * v110 + 2);
        v109 = 0LL;
        v110 = 7LL;
        LOWORD(v108[0]) = 0;
      }
      if ( (v49 & 1) != 0 )
      {
        v49 &= ~1u;
        if ( v123 >= 8 )
          sub_180010884(v122[0], 2 * v123 + 2);
      }
      if ( v47 )
        sub_18006C060(&v96, (__int64)v102, (__int64 *)v42);
      if ( v119 >= 8 )
        sub_180010884(v117[0], 2 * v119 + 2);
      v118 = 0LL;
      v119 = 7LL;
      LOWORD(v117[0]) = 0;
      if ( v125 >= 8 )
        sub_180010884(v124[0], 2 * v125 + 2);
      v42 += 32;
    }
    while ( v42 != (char *)v43 );
    v43 = (__int64)v105;
    v42 = v104;
  }
  if ( v42 )
  {
    sub_18001FF34((__int64)v42, v43);
    sub_180010884(v104, (v106 - (_QWORD)v104) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  sub_180075490(a1, a2);
  sub_180078514(a1, a2);
  sub_1800729F8(a1, a2, &v96);
  sub_180010884(v98, (v99 - (_QWORD)v98) & 0xFFFFFFFFFFFFFFF8uLL);
  v98 = 0LL;
  v99 = 0LL;
  sub_18006C764(&v97);
  sub_180010910((__int64)v68);
  sub_180010910((__int64)v69);
  sub_180010910((__int64)v53);
  sub_18005470C(v70, (__int64)v70);
  sub_18005470C(v71, (__int64)v71);
  sub_180010910((__int64)&v51);
  sub_180010910((__int64)v77);
  sub_180010910((__int64)&v52);
  result = sub_180010910((__int64)v78);
  if ( v80 )
    return j_LanguageEnumProc(v79);
  return result;
}
