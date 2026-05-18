/*
 * XREFs of sub_180077414 @ 0x180077414
 * Callers:
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_180040BC4 @ 0x180040BC4 (sub_180040BC4.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     GsDriverEntry @ 0x18004247C (GsDriverEntry.c)
 *     sub_180043184 @ 0x180043184 (sub_180043184.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_18005B860 @ 0x18005B860 (sub_18005B860.c)
 *     sub_18006532C @ 0x18006532C (sub_18006532C.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     sub_180065750 @ 0x180065750 (sub_180065750.c)
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18006B4A4 @ 0x18006B4A4 (sub_18006B4A4.c)
 *     sub_18006B7B4 @ 0x18006B7B4 (sub_18006B7B4.c)
 *     sub_18006BC14 @ 0x18006BC14 (sub_18006BC14.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 *     sub_18007EDF4 @ 0x18007EDF4 (sub_18007EDF4.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180077414(__int64 *a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r14
  char v10; // r11
  __int64 v11; // r8
  int v12; // r15d
  void (__fastcall *v13)(__int64, char **, __int64 *, __int64 *); // rbx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r13d
  float v19; // xmm10_4
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rbx
  float v23; // xmm12_4
  __int64 v24; // r8
  void (__fastcall *v25)(__int64, char **, __int64 *, __int64 *); // rbx
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __m128 v31; // xmm11
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // r15
  __int64 *v36; // rsi
  __int64 *v37; // rax
  bool v38; // bl
  __int64 v39; // rcx
  __m128 *v40; // rbx
  unsigned int *v41; // rax
  __m128 v42; // xmm7
  __m128 v43; // xmm6
  __m128 v44; // xmm3
  __m128 v45; // xmm4
  __m128 v46; // xmm2
  __m128 v47; // xmm0
  __m128 v48; // xmm2
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __m128 v52; // xmm4
  __m128 v53; // xmm1
  __m128 v54; // xmm1
  __m128 v55; // xmm0
  __m128 v56; // xmm1
  bool v57; // bl
  float v58; // xmm6_4
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r15
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm9
  __m128 v66; // xmm4
  __m128 *v67; // rax
  __int64 v68; // rdx
  signed __int32 v69; // eax
  signed __int32 v70; // ett
  __int64 v71; // rbx
  float v72; // xmm0_4
  char v73; // al
  __int64 v74; // rax
  float v75; // xmm0_4
  float v76; // xmm0_4
  double v77; // xmm0_8
  __int64 v78; // rsi
  __int64 v79; // rdx
  _QWORD *v80; // rdx
  char v81; // si
  __int64 v82; // rbx
  __int64 *v83; // rax
  __int64 *v84; // rax
  float v85; // xmm2_4
  float v86; // xmm0_4
  float v87; // xmm7_4
  float v88; // xmm6_4
  float v89; // xmm6_4
  float v90; // xmm0_4
  float v91; // xmm0_4
  float v92; // xmm12_4
  __int64 v93; // rbx
  __int64 *v94; // rax
  __int64 v95; // rbx
  __m128i v96; // xmm6
  __int64 *v97; // rax
  __int64 v98; // rbx
  __m128i v99; // xmm6
  __int64 *v100; // rax
  __m128i v101; // xmm6
  __int64 *v102; // rax
  __int64 *v103; // rax
  __int64 *v104; // rax
  __int64 *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rbx
  __int128 v110; // [rsp+40h] [rbp-C8h]
  __m128 v111; // [rsp+40h] [rbp-C8h]
  __int128 v112; // [rsp+40h] [rbp-C8h]
  __int64 v113; // [rsp+40h] [rbp-C8h]
  double v114[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v115[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v116[2]; // [rsp+70h] [rbp-98h] BYREF
  int v117; // [rsp+80h] [rbp-88h]
  unsigned int v118; // [rsp+88h] [rbp-80h]
  __int128 v119; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v120[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v121[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v122; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v123; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v124; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v125; // [rsp+E8h] [rbp-20h]
  __int128 v126; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v127; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v128; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v129; // [rsp+118h] [rbp+10h]
  unsigned __int64 v130; // [rsp+128h] [rbp+20h] BYREF
  int v131; // [rsp+130h] [rbp+28h]
  _QWORD v132[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v133[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v134[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v135; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v136[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v137[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v138[2]; // [rsp+198h] [rbp+90h] BYREF
  __m128 v139[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __m128 v140[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v141[16]; // [rsp+228h] [rbp+120h] BYREF
  __int128 v142; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v143[16]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v144[16]; // [rsp+258h] [rbp+150h] BYREF
  __int128 v145; // [rsp+268h] [rbp+160h] BYREF
  __m128i v146; // [rsp+278h] [rbp+170h] BYREF
  __m128i v147; // [rsp+288h] [rbp+180h] BYREF
  __m128i v148; // [rsp+298h] [rbp+190h] BYREF
  __m128 v149; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v150[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v151[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v152[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v153[4]; // [rsp+308h] [rbp+200h] BYREF
  __int64 v154[4]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v155[4]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v156[4]; // [rsp+368h] [rbp+260h] BYREF
  __int64 v157[4]; // [rsp+388h] [rbp+280h] BYREF
  __int64 v158[4]; // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 v159[4]; // [rsp+3C8h] [rbp+2C0h] BYREF
  __int64 v160[4]; // [rsp+3E8h] [rbp+2E0h] BYREF
  __m128 v161[4]; // [rsp+408h] [rbp+300h] BYREF
  __m128 v162[4]; // [rsp+448h] [rbp+340h] BYREF
  __m128 v163[4]; // [rsp+488h] [rbp+380h] BYREF
  char *v164[3]; // [rsp+4C8h] [rbp+3C0h] BYREF
  unsigned __int64 v165; // [rsp+4E0h] [rbp+3D8h]
  char *v166[3]; // [rsp+4E8h] [rbp+3E0h] BYREF
  unsigned __int64 v167; // [rsp+500h] [rbp+3F8h]
  char *v168[3]; // [rsp+508h] [rbp+400h] BYREF
  unsigned __int64 v169; // [rsp+520h] [rbp+418h]
  char *v170[3]; // [rsp+528h] [rbp+420h] BYREF
  unsigned __int64 v171; // [rsp+540h] [rbp+438h]
  _QWORD v172[7]; // [rsp+548h] [rbp+440h] BYREF
  _QWORD *v173; // [rsp+580h] [rbp+478h]
  char *v174; // [rsp+588h] [rbp+480h] BYREF
  unsigned __int64 v175; // [rsp+5A0h] [rbp+498h]
  _DWORD v176[4]; // [rsp+5A8h] [rbp+4A0h]

  v120[0] = a4;
  v118 = a3;
  v6 = sub_18006B2C0(*a2);
  v7 = *(_QWORD *)(v6 + 192);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = *(_QWORD *)(v6 + 192);
  }
  v8 = *(_QWORD *)(v6 + 184);
  v116[0] = v8;
  v116[1] = v7;
  v9 = sub_180036808((__int64)a1, *(_DWORD *)(*a2 + 112));
  LOBYTE(v11) = v10;
  v12 = (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v9 + 64LL))(
          v9,
          &qword_1801F9A78,
          v11);
  v13 = *(void (__fastcall **)(__int64, char **, __int64 *, __int64 *))(*(_QWORD *)v9 + 96LL);
  v15 = sub_18001FB6C(v151, &word_1801289A4, v14);
  v13(v9, v166, &qword_1801F9B18, v15);
  sub_1800306A0((__int64 *)v164, v166);
  v16 = *a1;
  v126 = 0LL;
  v17 = a2[1];
  if ( v17 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    v17 = a2[1];
    v8 = v116[0];
  }
  *(_QWORD *)&v126 = *a2;
  *((_QWORD *)&v126 + 1) = v17;
  (*(void (__fastcall **)(__int64 *, _QWORD *, char **, __int128 *))(v16 + 32))(a1, v115, v164, &v126);
  v18 = v12;
  if ( sub_1800122B0(v115) )
    v18 = 0;
  v117 = v18;
  v123 = 0LL;
  v19 = 0.0;
  memset(v114, 0, 12);
  v20 = *a2;
  v21 = sub_1800129F4(v152, (__int64)&qword_1801F8058);
  v22 = *(_QWORD *)sub_180046470(v20, (__int64)v141, (char **)v21);
  sub_180043668(v22);
  v23 = *(float *)(v22 + 172);
  sub_180010910((__int64)v141);
  if ( (_BYTE)v18 )
  {
    v25 = *(void (__fastcall **)(__int64, char **, __int64 *, __int64 *))(*(_QWORD *)v9 + 96LL);
    v26 = sub_18001FB6C(v153, &word_1801289A4, v24);
    v25(v9, v170, &qword_1801F9B38, v26);
    sub_1800306A0((__int64 *)v168, v170);
    v27 = v115[0];
    v122 = 0LL;
    v28 = *(_QWORD *)(v115[0] + 64LL);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v28 + 8);
      while ( v29 )
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 8), v29 + 1, v29);
        if ( v30 == v29 )
        {
          v122 = *(_OWORD *)(v27 + 56);
          break;
        }
      }
      v8 = v116[0];
    }
    sub_1800414A0((__m128 *)v122, v161);
    v31 = (__m128)xmmword_1801BD740;
    v110 = xmmword_1801BD740;
    v32 = *a2;
    v33 = sub_1800129F4(v154, (__int64)&qword_1801F8018);
    sub_180046470(v32, (__int64)v133, (char **)v33);
    v34 = v133[0];
    sub_180043668(v133[0]);
    v35 = *(__int64 **)(v34 + 40);
    v36 = *(__int64 **)(v34 + 32);
    if ( v36 != v35 )
    {
      do
      {
        v37 = sub_180040BC4(*v36, (__int64 *)&v174);
        v38 = sub_18001DA38(v37, v168);
        if ( v175 >= 0x10 )
          sub_180010884(v174, v175 + 1);
        if ( v38 )
        {
          v39 = v36[1];
          if ( v39 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v39 + 8), 1u);
            v39 = v36[1];
          }
          v40 = (__m128 *)*v36;
          v135 = v123;
          *(_QWORD *)&v123 = v40;
          *((_QWORD *)&v123 + 1) = v39;
          sub_180010910((__int64)&v135);
          v41 = (unsigned int *)sub_180040FB8((__int64)v40, (__int64)v150);
          v42 = (__m128)*v41;
          v43 = (__m128)v41[1];
          LODWORD(v114[1]) = v41[2];
          v130 = 0x3F80000000000000LL;
          v131 = 0;
          sub_180043184(v40, (__int64)&v128, &v130);
          v114[0] = *(double *)_mm_unpacklo_ps(v42, v43).m128_u64;
          v44 = 0LL;
          *(double *)v44.m128_u64 = v114[0];
          v45 = _mm_movelh_ps((__m128)v128, (__m128)v129);
          v46 = _mm_mul_ps(v45, _mm_movelh_ps(v44, (__m128)LODWORD(v114[1])));
          v47 = _mm_shuffle_ps(v46, v46, 153);
          v46.m128_f32[0] = (float)(v46.m128_f32[0] + v47.m128_f32[0]) + _mm_shuffle_ps(v47, v47, 85).m128_f32[0];
          v48 = _mm_or_ps(
                  _mm_and_ps((__m128)xmmword_1801283A0, v45),
                  _mm_andnot_ps((__m128)xmmword_1801283A0, _mm_sub_ps((__m128)0LL, _mm_shuffle_ps(v46, v46, 0))));
          LODWORD(v110) = v48.m128_i32[0];
          DWORD1(v110) = _mm_shuffle_ps(v48, v48, 85).m128_u32[0];
          DWORD2(v110) = _mm_shuffle_ps(v48, v48, 170).m128_u32[0];
          HIDWORD(v110) = _mm_shuffle_ps(v48, v48, 255).m128_u32[0];
        }
        v36 += 2;
      }
      while ( v36 != v35 );
      v8 = v116[0];
      v31 = (__m128)v110;
      LOBYTE(v18) = v117;
    }
    v49 = _mm_mul_ps(v31, v31);
    v50 = _mm_shuffle_ps(v49, v49, 153);
    v49.m128_f32[0] = (float)(v49.m128_f32[0] + v50.m128_f32[0]) + _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
    v51 = _mm_shuffle_ps(v49, v49, 0);
    v52 = _mm_and_ps(_mm_div_ps(v31, _mm_sqrt_ps(v51)), _mm_cmpneq_ps(v51, (__m128)xmmword_1801282E0));
    v53 = _mm_mul_ps(v52, (__m128)xmmword_180134D60);
    v140[0] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v53), (__m128)xmmword_180128360);
    v140[1] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v52, v52, 85), v53), (__m128)xmmword_1801282F0);
    v140[2] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v52, v52, 170), v53), (__m128)xmmword_180128390);
    v140[3] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v52, v52, 255), v53), (__m128)xmmword_1801284B0);
    sub_180040FB8(v122, (__int64)&v124);
    v111.m128_u64[0] = v124;
    v111.m128_u64[1] = v125 | 0x3F80000000000000LL;
    v54 = _mm_mul_ps(v111, v31);
    v55 = _mm_add_ps(_mm_shuffle_ps(v111, v54, 64), v54);
    v56 = _mm_add_ps(_mm_shuffle_ps(v54, v55, 48), v55);
    v57 = _mm_shuffle_ps(v56, v56, 170).m128_f32[0] < 0.0;
    v58 = 0.0;
    v59 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v120[0] + 152LL))(*(_QWORD *)v120[0]);
    v60 = v59[1];
    if ( v60 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v60 + 8), 1u);
      v60 = v59[1];
      v8 = v116[0];
    }
    v61 = *v59;
    v121[0] = *v59;
    v121[1] = v60;
    if ( !v57 )
    {
      v62 = (__m128)xmmword_1801BD740;
      v63 = _mm_shuffle_ps((__m128)xmmword_1801BD740, (__m128)xmmword_1801BD740, 153);
      v62.m128_f32[0] = (float)(v63.m128_f32[0] + 0.0) + _mm_shuffle_ps(v63, v63, 85).m128_f32[0];
      v64 = _mm_shuffle_ps(v62, v62, 0);
      v65 = _mm_and_ps(
              _mm_div_ps((__m128)xmmword_1801BD740, _mm_sqrt_ps(v64)),
              _mm_cmpneq_ps(v64, (__m128)xmmword_1801282E0));
      v66 = _mm_mul_ps(v65, (__m128)xmmword_180134D60);
      v139[0] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v66), (__m128)xmmword_180128360);
      v139[1] = _mm_add_ps((__m128)xmmword_1801282F0, _mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v66));
      v139[2] = _mm_add_ps((__m128)xmmword_180128390, _mm_mul_ps(_mm_shuffle_ps(v65, v65, 170), v66));
      v139[3] = _mm_add_ps((__m128)xmmword_1801284B0, _mm_mul_ps(_mm_shuffle_ps(v65, v65, 255), v66));
      v67 = sub_180018EB0(v163, v139, v161);
      sub_180018EB0(v162, v67, v140);
      v127 = 0LL;
      v68 = *(_QWORD *)(v8 + 64);
      if ( v68 )
      {
        v69 = *(_DWORD *)(v68 + 8);
        while ( v69 )
        {
          v70 = v69;
          v69 = _InterlockedCompareExchange((volatile signed __int32 *)(v68 + 8), v69 + 1, v69);
          if ( v70 == v69 )
          {
            v127 = *(_OWORD *)(v8 + 56);
            break;
          }
        }
        v8 = v116[0];
        v61 = v121[0];
      }
      GsDriverEntry(v127, (__int64)v162);
      sub_180010910((__int64)&v127);
      v71 = v115[0];
      v72 = *(float *)(v115[0] + 328LL);
      if ( v72 != *(float *)(v8 + 328) )
      {
        *(float *)(v8 + 328) = v72;
        sub_18006560C(v8, 2);
        v71 = v115[0];
      }
      v73 = *(_BYTE *)(v71 + 336);
      if ( v73 != *(_BYTE *)(v8 + 336) )
      {
        *(_BYTE *)(v8 + 336) = v73;
        *(_BYTE *)(v8 + 1612) = v73;
        v71 = v115[0];
      }
      sub_180065C7C(v71);
      sub_18006532C(v8, *(float *)(v71 + 332));
      v74 = v115[0];
      v75 = *(float *)(v115[0] + 320LL);
      if ( v75 != *(float *)(v8 + 320) )
      {
        *(float *)(v8 + 320) = v75;
        sub_18006560C(v8, 2);
        v74 = v115[0];
      }
      v76 = *(float *)(v74 + 324);
      if ( v76 != *(float *)(v8 + 324) )
      {
        *(float *)(v8 + 324) = v76;
        sub_18006560C(v8, 2);
      }
      v77 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 88LL))(v9, &qword_1801F9A98);
      v58 = *(float *)&v77;
      sub_18006B4A4(v61, &v119);
      if ( !(_QWORD)v119 )
      {
        sub_180036948((__int64)a1, v137, v118);
        v78 = sub_18001D684();
        if ( v78 )
        {
          *(_OWORD *)v78 = 0LL;
          *(_DWORD *)(v78 + 8) = 1;
          *(_DWORD *)(v78 + 12) = 1;
          *(_QWORD *)v78 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
          sub_18006B7B4();
        }
        else
        {
          v78 = 0LL;
        }
        v142 = 0LL;
        v136[0] = 0LL;
        *(_QWORD *)&v119 = v78 + 16;
        v136[1] = *((_QWORD *)&v119 + 1);
        *((_QWORD *)&v119 + 1) = v78;
        sub_180010910((__int64)v136);
        sub_180010910((__int64)&v142);
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v78 + 16) + 40LL))(v78 + 16, v137[0], 1LL);
        *(_DWORD *)(v78 + 192) = 1;
        v132[0] = v78 + 16;
        v132[1] = v78;
        v119 = 0LL;
        sub_18007D30C(v61, v132);
        *(_QWORD *)(v8 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        v173 = 0LL;
        if ( sub_18006BC14() )
        {
          v172[0] = &std::_Func_impl_no_alloc<_lambda_947c2138106fe11b43b65bbf065188b9_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
          v172[1] = a1;
          v173 = v172;
        }
        sub_18005B860((__int64)v172, v79);
        if ( v173 )
        {
          v80 = v172;
          LOBYTE(v80) = v173 != v172;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v173 + 32LL))(v173, v80);
        }
        sub_180010910((__int64)v137);
      }
      sub_180010910((__int64)&v119);
    }
    v81 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &qword_1801F9AF8, 0LL);
    v176[0] = 5;
    v176[1] = 4;
    v176[2] = 2;
    v82 = (unsigned int)v176[(*(int (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v9 + 72LL))(
                               v9,
                               &qword_1801F9AB8,
                               2LL)];
    v83 = (__int64 *)sub_18007EEFC(v61, v143, v82);
    sub_18006558C(v8, v83);
    v84 = (__int64 *)sub_18007EDF4(v61, v144, (unsigned int)v82);
    sub_180065394(v8, v84);
    *(_BYTE *)(v8 + 465) |= 3u;
    v85 = v58 + v58;
    if ( v58 >= 0.5 )
    {
      v89 = 1.0 - (float)(v85 - 1.0);
      v87 = (float)(v89 * 0.050000001) + (float)(v85 - 1.0);
      v88 = (float)(v89 * 0.5) + (float)(v85 - 1.0);
    }
    else
    {
      v86 = (float)(1.0 - v85) * 0.0;
      v87 = (float)(v85 * 0.050000001) + v86;
      v88 = (float)(v85 * 0.5) + v86;
    }
    if ( v81 )
    {
      v87 = 1.0;
      v88 = 1.0;
    }
    v90 = fmaxf(v85, 0.0);
    v91 = fminf(v90, 1.0);
    v92 = v23 * 3.5;
    if ( !v81 )
      v19 = 1.0 / v92;
    *(_QWORD *)&v112 = __PAIR64__(LODWORD(v87), LODWORD(v91));
    *((_QWORD *)&v112 + 1) = __PAIR64__(LODWORD(v19), LODWORD(v88));
    if ( sub_1800122C0(v115) )
    {
      v93 = v115[0];
      v94 = sub_18001875C(v155, (__int64)&qword_1801F50B8);
      v145 = v112;
      sub_180065750(v93, (__int64)v94, &v145, -1);
      v95 = v115[0];
      v96 = _mm_loadu_si128((const __m128i *)&xmmword_180128A20);
      v97 = sub_18001875C(v156, (__int64)&qword_1801F5098);
      v146 = v96;
      sub_180065750(v95, (__int64)v97, &v146, -1);
      v98 = v115[0];
      v99 = _mm_loadu_si128((const __m128i *)&xmmword_180128A20);
      v100 = sub_18001875C(v157, (__int64)&qword_1801F50D8);
      v147 = v99;
      sub_180065750(v98, (__int64)v100, &v147, -1);
    }
    v101 = _mm_loadu_si128((const __m128i *)&xmmword_180128A20);
    v102 = sub_18001875C(v158, (__int64)&qword_1801F50B8);
    v148 = v101;
    sub_180065750(v8, (__int64)v102, &v148, -1);
    LODWORD(v113) = 1053609165;
    HIDWORD(v113) = LODWORD(v114[0]);
    v103 = sub_18001875C(v159, (__int64)&qword_1801F5098);
    v138[0] = v113;
    *(double *)&v138[1] = *(double *)((char *)v114 + 4);
    sub_180065750(v8, (__int64)v103, v138, -1);
    v104 = sub_18001875C(v160, (__int64)&qword_1801F50D8);
    v149 = v31;
    sub_180065750(v8, (__int64)v104, &v149, -1);
    sub_180010910((__int64)v121);
    sub_180010910((__int64)v133);
    sub_180010910((__int64)&v122);
    if ( v169 >= 0x10 )
      sub_180010884(v168[0], v169 + 1);
    if ( v171 >= 8 )
      sub_180010884(v170[0], 2 * v171 + 2);
  }
  *(_BYTE *)(v8 + 72) = v18;
  v105 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v120[0] + 152LL))(*(_QWORD *)v120[0]);
  v106 = v105[1];
  if ( v106 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v106 + 8), 1u);
    v106 = v105[1];
  }
  v134[0] = *v105;
  v134[1] = v106;
  sub_18006B4A4(v134[0], v120);
  v108 = v120[0];
  if ( v120[0] )
  {
    LOBYTE(v107) = 1;
    *(_BYTE *)(v108 + 232) = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v9 + 64LL))(
                               v9,
                               &qword_1801F9AD8,
                               v107);
  }
  sub_180010910((__int64)v120);
  sub_180010910((__int64)v134);
  sub_180010910((__int64)&v123);
  sub_180010910((__int64)v115);
  if ( v165 >= 0x10 )
    sub_180010884(v164[0], v165 + 1);
  v164[2] = 0LL;
  v165 = 15LL;
  LOBYTE(v164[0]) = 0;
  if ( v167 >= 8 )
    sub_180010884(v166[0], 2 * v167 + 2);
  v166[2] = 0LL;
  v167 = 7LL;
  LOWORD(v166[0]) = 0;
  return sub_180010910((__int64)v116);
}
