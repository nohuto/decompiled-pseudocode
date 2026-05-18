/*
 * XREFs of sub_18006D0BC @ 0x18006D0BC
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_18003C06C @ 0x18003C06C (sub_18003C06C.c)
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     GsDriverEntry @ 0x18003D48C (GsDriverEntry.c)
 *     sub_18003DEE0 @ 0x18003DEE0 (sub_18003DEE0.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_18005D050 @ 0x18005D050 (sub_18005D050.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_18005D2E8 @ 0x18005D2E8 (sub_18005D2E8.c)
 *     sub_18005D470 @ 0x18005D470 (sub_18005D470.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 *     sub_180061784 @ 0x180061784 (sub_180061784.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_180062A60 @ 0x180062A60 (sub_180062A60.c)
 *     sub_180063A0C @ 0x180063A0C (sub_180063A0C.c)
 *     sub_18006E368 @ 0x18006E368 (sub_18006E368.c)
 *     sub_18007218C @ 0x18007218C (sub_18007218C.c)
 *     sub_1800733F4 @ 0x1800733F4 (sub_1800733F4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18006D0BC(__int64 a1, __int64 *a2, int a3, _QWORD *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // r13
  void (__fastcall *v11)(__int64, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, __int64 *, _QWORD *, _QWORD *); // r11
  float v15; // xmm9_4
  __m128 v16; // xmm11
  __m128 v17; // xmm12
  unsigned int v18; // xmm13_4
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  void (__fastcall *v23)(__int64, _QWORD *, void *, _QWORD *); // rbx
  _QWORD *v24; // rax
  __m128 v25; // xmm10
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 *v29; // r15
  __int64 *v30; // rbx
  _QWORD *v31; // rax
  void **v32; // rdx
  void *v33; // r8
  bool v34; // r14
  unsigned int *v35; // rax
  __m128 v36; // xmm3
  __m128 v37; // xmm4
  __m128 v38; // xmm2
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __int128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  float v45; // xmm6_4
  _QWORD *v46; // rax
  __int64 v47; // r15
  __int128 *v48; // rax
  __int64 v49; // rbx
  char v50; // al
  __int64 v51; // rcx
  double v52; // xmm0_8
  _QWORD *v53; // rax
  _DWORD *v54; // rbx
  unsigned __int64 v55; // r14
  __int64 v56; // rcx
  char v57; // r14
  __int64 v58; // rbx
  __int64 *v59; // rax
  __int64 *v60; // rax
  float v61; // xmm3_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm6_4
  float v65; // xmm6_4
  float v66; // xmm0_4
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // rbx
  __m128i v70; // xmm6
  _QWORD *v71; // rax
  __int64 v72; // rbx
  __m128i v73; // xmm6
  _QWORD *v74; // rax
  __m128i v75; // xmm6
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 result; // rax
  __m128 v83; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v84; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-B8h]
  __m128 v86; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h] BYREF
  __int64 v89; // [rsp+78h] [rbp-90h]
  _QWORD *v90; // [rsp+80h] [rbp-88h]
  __int64 v91; // [rsp+88h] [rbp-80h] BYREF
  __int64 v92; // [rsp+90h] [rbp-78h]
  __int64 v93; // [rsp+98h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-68h]
  __int64 v95; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-48h]
  __int128 v97; // [rsp+C8h] [rbp-40h] BYREF
  float v98[4]; // [rsp+D8h] [rbp-30h]
  __int64 v99; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v100; // [rsp+F0h] [rbp-18h]
  _BYTE v101[64]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v102[4]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v103[8]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v104[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v105[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  void *Buf2[4]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v107[4]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v108[4]; // [rsp+258h] [rbp+150h] BYREF
  unsigned __int64 v109; // [rsp+278h] [rbp+170h] BYREF
  unsigned int v110; // [rsp+280h] [rbp+178h]

  v90 = a4;
  LODWORD(v87) = a3;
  v8 = sub_1800628C8(*a2);
  sub_18001246C(&v99, (_QWORD *)(v8 + 184));
  v9 = sub_180034094(a1, *(_DWORD *)(*a2 + 112));
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801D5A08, 1LL);
  v11 = *(void (__fastcall **)(__int64, _QWORD *, void *, _QWORD *))(*(_QWORD *)v9 + 96LL);
  v12 = sub_18001E3BC(v105, (__int64)&unk_180106A04);
  v11(v9, v108, &unk_1801D5AA8, v12);
  sub_18002E0A8(v107, v108);
  v13 = sub_18001246C(&v93, a2);
  v14(a1, &v84, v107, v13);
  if ( sub_180011DD0(&v84) )
    v10 = 0;
  v97 = 0LL;
  v15 = 0.0;
  v16.m128_i32[0] = 0;
  v17.m128_i32[0] = 0;
  v18 = 0;
  v19 = *a2;
  v20 = sub_180012440(v105, (__int64)&qword_1801D3FE8);
  v21 = *(_QWORD *)sub_1800412EC(v19, (__int64)&v93, v20);
  sub_18003E330(v21);
  *(_QWORD *)v98 = *(_QWORD *)(v21 + 172);
  if ( v94 )
    sub_180010530(v94);
  v22 = v99;
  if ( v10 )
  {
    v23 = *(void (__fastcall **)(__int64, _QWORD *, void *, _QWORD *))(*(_QWORD *)v9 + 96LL);
    v24 = sub_18001E3BC(&v93, (__int64)&unk_180106A04);
    v23(v9, v105, &unk_1801D5AC8, v24);
    sub_18002E0A8(Buf2, v105);
    sub_180011C50(v84 + 56, &v88);
    sub_18003C72C(v88, v102);
    v25 = (__m128)xmmword_18019B780;
    v83 = (__m128)xmmword_18019B780;
    v26 = *a2;
    v27 = sub_180012440(v103, (__int64)&unk_1801D3FA8);
    sub_1800412EC(v26, (__int64)&v93, v27);
    v28 = v93;
    sub_18003E330(v93);
    v29 = *(__int64 **)(v28 + 40);
    v30 = *(__int64 **)(v28 + 32);
    if ( v30 != v29 )
    {
      do
      {
        v31 = sub_18003C06C(*v30, v104);
        v32 = Buf2;
        if ( Buf2[3] >= (void *)0x10 )
          v32 = (void **)Buf2[0];
        v33 = (void *)v31[2];
        if ( v31[3] >= 0x10uLL )
          v31 = (_QWORD *)*v31;
        v34 = v33 == Buf2[2] && !memcmp(v31, v32, (size_t)v33);
        sub_180011B24((__int64)v104);
        if ( v34 )
        {
          sub_1800124F8((__int64 *)&v97, v30);
          v35 = (unsigned int *)sub_18003C3B4(v97, (__int64)&v86);
          v16 = (__m128)*v35;
          v17 = (__m128)v35[1];
          v18 = v35[2];
          LODWORD(v96) = v18;
          v109 = 0x3F80000000000000LL;
          v110 = 0;
          sub_18003DEE0(v97, (__int64)&v91, &v109);
          v36 = 0LL;
          v36.m128_u64[0] = _mm_unpacklo_ps(v16, v17).m128_u64[0];
          v5 = _mm_movelh_ps(v36, (__m128)(unsigned int)v96);
          v37 = _mm_movelh_ps((__m128)(unsigned __int64)v91, (__m128)(unsigned int)v92);
          v38 = _mm_mul_ps(v37, v5);
          v39 = _mm_shuffle_ps(v38, v38, 153);
          v38.m128_f32[0] = (float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
          v40 = _mm_or_ps(
                  _mm_and_ps((__m128)xmmword_180106400, v37),
                  _mm_andnot_ps((__m128)xmmword_180106400, _mm_sub_ps((__m128)0LL, _mm_shuffle_ps(v38, v38, 0))));
          v83.m128_i32[0] = v40.m128_i32[0];
          v83.m128_i32[1] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
          v83.m128_i32[2] = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
          v4 = _mm_shuffle_ps(v40, v40, 255);
          v83.m128_i32[3] = v4.m128_i32[0];
        }
        v30 += 2;
      }
      while ( v30 != v29 );
      v25 = v83;
      v22 = v99;
    }
    *(_OWORD *)&v101[4] = 0LL;
    *(_OWORD *)&v101[24] = 0LL;
    *(_OWORD *)&v101[44] = 0LL;
    *((_QWORD *)&v41 + 1) = v25.m128_u64[1];
    *(double *)&v41 = sub_18006E368();
    *(_OWORD *)v101 = v41;
    *(_OWORD *)&v101[16] = 0LL;
    *(__m128 *)&v101[32] = v4;
    *(__m128 *)&v101[48] = v5;
    sub_18003C3B4(v88, (__int64)&v109);
    v83.m128_u64[0] = v109;
    v83.m128_u64[1] = v110 | 0x3F80000000000000LL;
    v42 = _mm_mul_ps(v83, v25);
    v43 = _mm_add_ps(_mm_shuffle_ps(v83, v42, 64), v42);
    v44 = _mm_add_ps(_mm_shuffle_ps(v42, v43, 48), v43);
    v45 = 0.0;
    v46 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v90 + 152LL))(*v90);
    sub_18001246C(&v91, v46);
    v47 = v91;
    if ( _mm_shuffle_ps(v44, v44, 170).m128_f32[0] >= 0.0 )
    {
      *(_OWORD *)&v104[4] = 0LL;
      *(_OWORD *)&v104[24] = 0LL;
      *(_OWORD *)&v104[44] = 0LL;
      *(_OWORD *)v104 = COERCE_UNSIGNED_INT64(sub_18006E368());
      memset(&v104[16], 0, 32);
      *(__m128 *)&v104[48] = v5;
      v48 = sub_180017E18((__int64)v103, (__int128 *)v104, v102);
      sub_180017E18((__int64)v102, v48, v101);
      sub_180011C50(v22 + 56, &v83);
      GsDriverEntry(v83.m128_i64[0], (__int64)v102);
      if ( v83.m128_u64[1] )
        sub_180010530(v83.m128_i64[1]);
      sub_18005D23C(v22, *(float *)(v84 + 328));
      v49 = v84;
      v50 = *(_BYTE *)(v84 + 336);
      if ( v50 != *(_BYTE *)(v22 + 336) )
      {
        *(_BYTE *)(v22 + 336) = v50;
        *(_BYTE *)(v22 + 1612) = v50;
        v49 = v84;
      }
      sub_18005D90C(v49);
      sub_18005D050(v22, *(float *)(v49 + 332));
      sub_18005D2E8(v51, *(float *)(v84 + 320));
      sub_18005D20C(v22, *(float *)(v84 + 324));
      v52 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801D5A28);
      v45 = *(float *)&v52;
      sub_180062A60(v47, &v86);
      if ( !v86.m128_u64[0] )
      {
        sub_1800341C8(a1, &v95, v87);
        v53 = sub_180063A0C(&v83);
        v54 = (_DWORD *)*v53;
        v55 = v53[1];
        *v53 = 0LL;
        v53[1] = 0LL;
        v86.m128_u64[0] = (unsigned __int64)v54;
        v56 = v86.m128_i64[1];
        v86.m128_u64[1] = v55;
        if ( v56 )
          sub_180010530(v56);
        if ( v83.m128_u64[1] )
          sub_180010530(v83.m128_i64[1]);
        (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v54 + 40LL))(v54, v95, 1LL);
        v54[44] = 1;
        v83.m128_u64[0] = (unsigned __int64)v54;
        v83.m128_u64[1] = v55;
        v86 = 0LL;
        sub_18007218C(v47, &v83);
        v87 = a1;
        *(_QWORD *)(v22 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        sub_180061784(v22 + 1704, &v87);
        if ( v96 )
          sub_180010530(v96);
      }
      if ( v86.m128_u64[1] )
        sub_180010530(v86.m128_i64[1]);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801D5A88, 0LL);
    v109 = 0x400000005LL;
    v110 = 2;
    v58 = *((unsigned int *)&v109
          + (*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, &unk_1801D5A48, 2LL));
    v59 = (__int64 *)sub_1800734B8(v47, &v83, v58);
    sub_18005D26C(v22, v59);
    v60 = (__int64 *)sub_1800733F4(v47, &v83, (unsigned int)v58);
    sub_18005D0B8(v22, v60);
    *(_BYTE *)(v22 + 465) |= 3u;
    v61 = v45 + v45;
    if ( v45 >= 0.5 )
    {
      v65 = 1.0 - (float)(v61 - 1.0);
      v63 = (float)(v65 * 0.050000001) + (float)(v61 - 1.0);
      v64 = (float)(v65 * 0.5) + (float)(v61 - 1.0);
    }
    else
    {
      v62 = (float)(1.0 - v61) * 0.0;
      v63 = (float)(v61 * 0.050000001) + v62;
      v64 = (float)(v61 * 0.5) + v62;
    }
    if ( v57 )
    {
      v63 = 1.0;
      v64 = 1.0;
    }
    v66 = sub_18001112C(v61, 0.0, 1.0);
    if ( !v57 )
      v15 = 1.0 / (float)(v98[0] * 3.5);
    v83.m128_u64[0] = __PAIR64__(LODWORD(v63), LODWORD(v66));
    v83.m128_u64[1] = __PAIR64__(LODWORD(v15), LODWORD(v64));
    if ( sub_180011DE0(&v84) )
    {
      v67 = v84;
      v68 = sub_180017648(v104, (__int64)&unk_1801D72A8);
      sub_18005D470(v67, (__int64)v68, &v83, -1);
      v69 = v84;
      v70 = _mm_loadu_si128((const __m128i *)&xmmword_180106A90);
      v71 = sub_180017648(v104, (__int64)&unk_1801D7288);
      v83 = (__m128)v70;
      sub_18005D470(v69, (__int64)v71, &v83, -1);
      v72 = v84;
      v73 = _mm_loadu_si128((const __m128i *)&xmmword_180106A90);
      v74 = sub_180017648(v104, (__int64)&unk_1801D72C8);
      v83 = (__m128)v73;
      sub_18005D470(v72, (__int64)v74, &v83, -1);
    }
    v75 = _mm_loadu_si128((const __m128i *)&xmmword_180106A90);
    v76 = sub_180017648(v104, (__int64)&unk_1801D72A8);
    v83 = (__m128)v75;
    sub_18005D470(v22, (__int64)v76, &v83, -1);
    v83.m128_i32[0] = 1053609165;
    v83.m128_i32[1] = v16.m128_i32[0];
    v83.m128_u64[1] = __PAIR64__(v18, v17.m128_u32[0]);
    v77 = sub_180017648(v104, (__int64)&unk_1801D7288);
    v86 = v83;
    sub_18005D470(v22, (__int64)v77, &v86, -1);
    v78 = sub_180017648(v104, (__int64)&unk_1801D72C8);
    v83 = v25;
    sub_18005D470(v22, (__int64)v78, &v83, -1);
    if ( v92 )
      sub_180010530(v92);
    if ( v94 )
      sub_180010530(v94);
    if ( v89 )
      sub_180010530(v89);
    sub_180011B24((__int64)Buf2);
    sub_180013348((__int64)v105);
  }
  *(_BYTE *)(v22 + 72) = v10;
  v79 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v90 + 152LL))(*v90);
  sub_18001246C(&v88, v79);
  sub_180062A60(v88, &v93);
  v81 = v93;
  if ( v93 )
  {
    LOBYTE(v80) = 1;
    *(_BYTE *)(v81 + 232) = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(
                              v9,
                              &unk_1801D5A68,
                              v80);
  }
  if ( v94 )
    sub_180010530(v94);
  if ( v89 )
    sub_180010530(v89);
  if ( *((_QWORD *)&v97 + 1) )
    sub_180010530(*((__int64 *)&v97 + 1));
  if ( v85 )
    sub_180010530(v85);
  sub_180011B24((__int64)v107);
  result = sub_180013348((__int64)v108);
  if ( v100 )
    return sub_180010530(v100);
  return result;
}
