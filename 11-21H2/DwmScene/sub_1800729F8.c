/*
 * XREFs of sub_1800729F8 @ 0x1800729F8
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800713F0 @ 0x1800713F0 (sub_1800713F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180042AB0 @ 0x180042AB0 (sub_180042AB0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 *     sub_18006BF90 @ 0x18006BF90 (sub_18006BF90.c)
 *     sub_180075B34 @ 0x180075B34 (sub_180075B34.c)
 *     sub_1800A2C30 @ 0x1800A2C30 (sub_1800A2C30.c)
 *     sub_1800A2C40 @ 0x1800A2C40 (sub_1800A2C40.c)
 *     sub_1800A2C50 @ 0x1800A2C50 (sub_1800A2C50.c)
 *     sub_1800A2C60 @ 0x1800A2C60 (sub_1800A2C60.c)
 *     sub_1800A2C70 @ 0x1800A2C70 (sub_1800A2C70.c)
 *     sub_1800A2C80 @ 0x1800A2C80 (sub_1800A2C80.c)
 *     sub_1800A2CCC @ 0x1800A2CCC (sub_1800A2CCC.c)
 *     sub_1800A2CDC @ 0x1800A2CDC (sub_1800A2CDC.c)
 *     sub_1800A2CEC @ 0x1800A2CEC (sub_1800A2CEC.c)
 *     sub_1800A2D38 @ 0x1800A2D38 (sub_1800A2D38.c)
 *     sub_1800A2D7C @ 0x1800A2D7C (sub_1800A2D7C.c)
 *     sub_1800A2D8C @ 0x1800A2D8C (sub_1800A2D8C.c)
 *     sub_1800A2D9C @ 0x1800A2D9C (sub_1800A2D9C.c)
 *     sub_1800A2DAC @ 0x1800A2DAC (sub_1800A2DAC.c)
 *     sub_1800A2DBC @ 0x1800A2DBC (sub_1800A2DBC.c)
 *     sub_1800A2DFC @ 0x1800A2DFC (sub_1800A2DFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_UNKNOWN **__fastcall sub_1800729F8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rsi
  float v12; // xmm6_4
  bool v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned __int64 v18; // rax
  __int64 v19; // r15
  bool v20; // r12
  __m128 v21; // xmm2
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  double v38; // xmm0_8
  __m128 v39; // xmm3
  __m128 v40; // xmm1
  __m128 v41; // xmm3
  __m128 v42; // xmm3
  __m128 v43; // xmm3
  __m128 v44; // xmm3
  __m128 v45; // xmm1
  __m128 v46; // xmm3
  __m128 v47; // xmm7
  __int64 *v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rsi
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 *v56; // rcx
  __int64 v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 *v62; // rcx
  __int64 v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rax
  __int64 *v66; // rcx
  __int64 v67; // rax
  __int64 *v68; // rcx
  __int64 v69; // rax
  __int64 *v70; // rcx
  __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // rax
  __int64 *v74; // rcx
  __int64 v75; // rax
  __int64 *v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // eax
  __int64 *v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 *v85; // rcx
  __int64 v86; // rax
  __int64 *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // [rsp+28h] [rbp-E0h]
  float v91; // [rsp+30h] [rbp-D8h]
  __int128 v92; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v93; // [rsp+48h] [rbp-C0h]
  __int64 v94; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int128 v95; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v96; // [rsp+78h] [rbp-90h] BYREF
  __int64 v97[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128 v98; // [rsp+98h] [rbp-70h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-60h] BYREF
  float v100; // [rsp+B0h] [rbp-58h]
  __int64 v101; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v103; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v104; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v105; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v106; // [rsp+108h] [rbp+0h] BYREF
  __int64 v107; // [rsp+118h] [rbp+10h] BYREF
  __int64 v108; // [rsp+128h] [rbp+20h] BYREF
  __int64 v109; // [rsp+138h] [rbp+30h] BYREF
  __int64 v110; // [rsp+148h] [rbp+40h] BYREF
  __int64 v111; // [rsp+158h] [rbp+50h] BYREF
  __int64 v112; // [rsp+168h] [rbp+60h] BYREF
  __int64 v113; // [rsp+178h] [rbp+70h] BYREF
  __int64 v114; // [rsp+188h] [rbp+80h] BYREF
  __int64 v115; // [rsp+198h] [rbp+90h] BYREF
  __int64 v116; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v117; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v118; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v119; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v120; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v121; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v122; // [rsp+208h] [rbp+100h] BYREF
  __int64 v123; // [rsp+218h] [rbp+110h] BYREF
  __int64 v124; // [rsp+228h] [rbp+120h] BYREF
  __int64 v125; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v126[6]; // [rsp+248h] [rbp+140h] BYREF
  _UNKNOWN *retaddr; // [rsp+2B0h] [rbp+1A8h] BYREF

  result = &retaddr;
  if ( a3[2] )
  {
    v6 = sub_180036808(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
    v96 = 0LL;
    v10 = v8[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v9 = *v8;
      v10 = v8[1];
    }
    *(_QWORD *)&v96 = v9;
    *((_QWORD *)&v96 + 1) = v10;
    sub_180036540(a1, &v94, v7, &v96);
    v11 = v94;
    if ( (*(_DWORD *)(v94 + 440) & 0x2000000) != 0 )
    {
      sub_18006BF90(v97, &v94);
      v90 = 0LL;
      v91 = 0.0;
      v93 = (__m128)xmmword_1801BD980;
      v12 = 0.0;
      v95 = 0LL;
      v13 = sub_1800122C0(&v94);
      v14 = 0LL;
      if ( v13 )
      {
        v92 = 0LL;
        v15 = *(_QWORD *)(v11 + 64);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 8);
          while ( v16 )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16);
            if ( v17 == v16 )
            {
              v92 = *(_OWORD *)(v11 + 56);
              break;
            }
          }
          v11 = v94;
        }
        v18 = *((_QWORD *)&v92 + 1);
        v14 = v92;
        v92 = 0LL;
        v98 = 0uLL;
        v19 = v14;
        v95 = __PAIR128__(v18, v14);
        sub_180010910((__int64)&v98);
        sub_180010910((__int64)&v92);
        v12 = *(float *)(v11 + 328);
      }
      else
      {
        v19 = v95;
      }
      v20 = sub_1800122C0(&v95);
      if ( v20 )
      {
        sub_180043668(v14);
        *(_QWORD *)&v92 = *(_QWORD *)(v14 + 144);
        DWORD2(v92) = *(_DWORD *)(v14 + 152);
        v90 = v92;
        v91 = *((float *)&v92 + 2);
        sub_180043668(v14);
        v21 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 156));
        v93.m128_i32[0] = v21.m128_i32[0];
        v93.m128_i32[1] = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
        v93.m128_i32[2] = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
        v93.m128_i32[3] = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
      }
      v22 = &qword_1801FA578;
      if ( (unsigned __int64)qword_1801FA590 >= 8 )
        v22 = (__int64 *)qword_1801FA578;
      v23 = sub_18001FFD8((__int64)v22, qword_1801FA588);
      if ( sub_18006B90C(a3, &v101, (char *)&qword_1801FA578, v23)[1] )
        LODWORD(v90) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA578);
      v24 = &qword_1801FA598;
      if ( (unsigned __int64)qword_1801FA5B0 >= 8 )
        v24 = (__int64 *)qword_1801FA598;
      v25 = sub_18001FFD8((__int64)v24, qword_1801FA5A8);
      if ( sub_18006B90C(a3, &v102, (char *)&qword_1801FA598, v25)[1] )
        HIDWORD(v90) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA598);
      v26 = &qword_1801FA5B8;
      if ( (unsigned __int64)qword_1801FA5D0 >= 8 )
        v26 = (__int64 *)qword_1801FA5B8;
      v27 = sub_18001FFD8((__int64)v26, qword_1801FA5C8);
      if ( sub_18006B90C(a3, &v103, (char *)&qword_1801FA5B8, v27)[1] )
        v91 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA5B8);
      v28 = &qword_1801FA5D8;
      if ( (unsigned __int64)qword_1801FA5F0 >= 8 )
        v28 = (__int64 *)qword_1801FA5D8;
      v29 = sub_18001FFD8((__int64)v28, qword_1801FA5E8);
      if ( sub_18006B90C(a3, &v104, (char *)&qword_1801FA5D8, v29)[1] )
        v93.m128_i32[0] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA5D8);
      v30 = &qword_1801FA5F8;
      if ( (unsigned __int64)qword_1801FA610 >= 8 )
        v30 = (__int64 *)qword_1801FA5F8;
      v31 = sub_18001FFD8((__int64)v30, qword_1801FA608);
      if ( sub_18006B90C(a3, &v105, (char *)&qword_1801FA5F8, v31)[1] )
        v93.m128_i32[1] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA5F8);
      v32 = &qword_1801FA618;
      if ( (unsigned __int64)qword_1801FA630 >= 8 )
        v32 = (__int64 *)qword_1801FA618;
      v33 = sub_18001FFD8((__int64)v32, qword_1801FA628);
      if ( sub_18006B90C(a3, &v106, (char *)&qword_1801FA618, v33)[1] )
        v93.m128_i32[2] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA618);
      v34 = &qword_1801FA638;
      if ( (unsigned __int64)qword_1801FA650 >= 8 )
        v34 = (__int64 *)qword_1801FA638;
      v35 = sub_18001FFD8((__int64)v34, qword_1801FA648);
      if ( sub_18006B90C(a3, &v107, (char *)&qword_1801FA638, v35)[1] )
        v93.m128_i32[3] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA638);
      v36 = &qword_1801FA558;
      if ( (unsigned __int64)qword_1801FA570 >= 8 )
        v36 = (__int64 *)qword_1801FA558;
      v37 = sub_18001FFD8((__int64)v36, qword_1801FA568);
      if ( sub_18006B90C(a3, &v108, (char *)&qword_1801FA558, v37)[1] )
      {
        v38 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA558);
        v12 = *(float *)&v38;
      }
      v39 = _mm_mul_ps(v93, v93);
      v40 = _mm_shuffle_ps(v39, v39, 238);
      v41 = _mm_add_ps(v39, v40);
      v42 = _mm_shuffle_ps(v41, v41, 64);
      v43 = _mm_add_ps(v42, _mm_shuffle_ps(v40, v42, 240));
      v44 = _mm_shuffle_ps(v43, v43, 170);
      v45 = _mm_sqrt_ps(v44);
      v46 = _mm_cmpneq_ps(v44, (__m128)xmmword_1801282E0);
      v47 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps(v93, v45), _mm_cmpneq_ps(v45, (__m128)0LL)), v46),
              _mm_andnot_ps(v46, (__m128)xmmword_180128330));
      if ( v13 && v12 != *(float *)(v11 + 328) )
      {
        *(float *)(v11 + 328) = v12;
        sub_18006560C(v11, 2);
      }
      if ( v20 )
      {
        v99 = v90;
        v100 = v91;
        sub_18001380C(v19, &v99);
        v98 = v47;
        sub_180042AB0(v19, &v98);
      }
      if ( sub_1800122C0(v97) )
      {
        v48 = &qword_1801FA8F8;
        if ( (unsigned __int64)qword_1801FA910 >= 8 )
          v48 = (__int64 *)qword_1801FA8F8;
        v49 = sub_18001FFD8((__int64)v48, qword_1801FA908);
        v50 = sub_18006B90C(a3, &v109, (char *)&qword_1801FA8F8, v49);
        v51 = v97[0];
        if ( v50[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA8F8);
          sub_1800A2C70(v51);
        }
        v52 = &qword_1801FA8D8;
        if ( (unsigned __int64)qword_1801FA8F0 >= 8 )
          v52 = (__int64 *)qword_1801FA8D8;
        v53 = sub_18001FFD8((__int64)v52, qword_1801FA8E8);
        if ( sub_18006B90C(a3, &v110, (char *)&qword_1801FA8D8, v53)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA8D8);
          sub_1800A2C30(v51);
        }
        v54 = &qword_1801FA918;
        if ( (unsigned __int64)qword_1801FA930 >= 8 )
          v54 = (__int64 *)qword_1801FA918;
        v55 = sub_18001FFD8((__int64)v54, qword_1801FA928);
        if ( sub_18006B90C(a3, &v111, (char *)&qword_1801FA918, v55)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA918);
          sub_1800A2C60(v51);
        }
        v56 = &qword_1801FA6F8;
        if ( (unsigned __int64)qword_1801FA710 >= 8 )
          v56 = (__int64 *)qword_1801FA6F8;
        v57 = sub_18001FFD8((__int64)v56, qword_1801FA708);
        if ( sub_18006B90C(a3, &v112, (char *)&qword_1801FA6F8, v57)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA6F8);
          sub_1800A2CCC(v51);
        }
        v58 = &qword_1801FA718;
        if ( (unsigned __int64)qword_1801FA730 >= 8 )
          v58 = (__int64 *)qword_1801FA718;
        v59 = sub_18001FFD8((__int64)v58, qword_1801FA728);
        if ( sub_18006B90C(a3, &v113, (char *)&qword_1801FA718, v59)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA718);
          sub_1800A2CDC(v51);
        }
        v60 = &qword_1801FA758;
        if ( (unsigned __int64)qword_1801FA770 >= 8 )
          v60 = (__int64 *)qword_1801FA758;
        v61 = sub_18001FFD8((__int64)v60, qword_1801FA768);
        if ( sub_18006B90C(a3, &v114, (char *)&qword_1801FA758, v61)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA758);
          sub_1800A2CEC(v51);
        }
        v62 = &qword_1801FA778;
        if ( (unsigned __int64)qword_1801FA790 >= 8 )
          v62 = (__int64 *)qword_1801FA778;
        v63 = sub_18001FFD8((__int64)v62, qword_1801FA788);
        if ( sub_18006B90C(a3, &v115, (char *)&qword_1801FA778, v63)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA778);
          sub_1800A2C80(v51);
        }
        v64 = &qword_1801FA738;
        if ( (unsigned __int64)qword_1801FA750 >= 8 )
          v64 = (__int64 *)qword_1801FA738;
        v65 = sub_18001FFD8((__int64)v64, qword_1801FA748);
        if ( sub_18006B90C(a3, &v116, (char *)&qword_1801FA738, v65)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA738);
          sub_1800A2C50(v51);
        }
        v66 = &qword_1801FA798;
        if ( (unsigned __int64)qword_1801FA7B0 >= 8 )
          v66 = (__int64 *)qword_1801FA798;
        v67 = sub_18001FFD8((__int64)v66, qword_1801FA7A8);
        if ( sub_18006B90C(a3, &v117, (char *)&qword_1801FA798, v67)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA798);
          sub_1800A2D7C(v51);
        }
        v68 = &qword_1801FA7B8;
        if ( (unsigned __int64)qword_1801FA7D0 >= 8 )
          v68 = (__int64 *)qword_1801FA7B8;
        v69 = sub_18001FFD8((__int64)v68, qword_1801FA7C8);
        if ( sub_18006B90C(a3, &v118, (char *)&qword_1801FA7B8, v69)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA7B8);
          sub_1800A2D9C(v51);
        }
        v70 = &qword_1801FA7D8;
        if ( (unsigned __int64)qword_1801FA7F0 >= 8 )
          v70 = (__int64 *)qword_1801FA7D8;
        v71 = sub_18001FFD8((__int64)v70, qword_1801FA7E8);
        if ( sub_18006B90C(a3, &v119, (char *)&qword_1801FA7D8, v71)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA7D8);
          sub_1800A2D8C(v51);
        }
        v72 = &qword_1801FA7F8;
        if ( (unsigned __int64)qword_1801FA810 >= 8 )
          v72 = (__int64 *)qword_1801FA7F8;
        v73 = sub_18001FFD8((__int64)v72, qword_1801FA808);
        if ( sub_18006B90C(a3, &v120, (char *)&qword_1801FA7F8, v73)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA7F8);
          sub_1800A2DBC(v51);
        }
        v74 = &qword_1801FA818;
        if ( (unsigned __int64)qword_1801FA830 >= 8 )
          v74 = (__int64 *)qword_1801FA818;
        v75 = sub_18001FFD8((__int64)v74, qword_1801FA828);
        if ( sub_18006B90C(a3, &v121, (char *)&qword_1801FA818, v75)[1] )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &qword_1801FA818);
          sub_1800A2DAC(v51);
        }
        v76 = &qword_1801FA6D8;
        if ( (unsigned __int64)qword_1801FA6F0 >= 8 )
          v76 = (__int64 *)qword_1801FA6D8;
        v77 = sub_18001FFD8((__int64)v76, qword_1801FA6E8);
        if ( sub_18006B90C(a3, &v122, (char *)&qword_1801FA6D8, v77)[1] )
        {
          v78 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 72LL))(
                  v6,
                  &qword_1801FA6D8,
                  0LL);
          sub_1800A2C40(v51, v78);
        }
        v79 = &qword_1801FA838;
        if ( (unsigned __int64)qword_1801FA850 >= 8 )
          v79 = (__int64 *)qword_1801FA838;
        v80 = sub_18001FFD8((__int64)v79, qword_1801FA848);
        if ( sub_18006B90C(a3, &v123, (char *)&qword_1801FA838, v80)[1] )
        {
          v81 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 72LL))(
                  v6,
                  &qword_1801FA838,
                  0LL);
          sub_1800A2D38(v51, v81);
        }
        v82 = &qword_1801FA878;
        if ( (unsigned __int64)qword_1801FA890 >= 8 )
          v82 = (__int64 *)qword_1801FA878;
        v83 = sub_18001FFD8((__int64)v82, qword_1801FA888);
        if ( sub_18006B90C(a3, &v124, (char *)&qword_1801FA878, v83)[1] )
        {
          LOBYTE(v84) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                          v6,
                          &qword_1801FA878,
                          0LL);
          sub_1800A2DFC(v51, v84);
        }
        v85 = &qword_1801FA978;
        if ( (unsigned __int64)qword_1801FA990 >= 8 )
          v85 = (__int64 *)qword_1801FA978;
        v86 = sub_18001FFD8((__int64)v85, qword_1801FA988);
        sub_18006B90C(a3, &v125, (char *)&qword_1801FA978, v86);
        v87 = &qword_1801FA858;
        if ( (unsigned __int64)qword_1801FA870 >= 8 )
          v87 = (__int64 *)qword_1801FA858;
        v88 = sub_18001FFD8((__int64)v87, qword_1801FA868);
        LOBYTE(v89) = sub_18006B90C(a3, v126, (char *)&qword_1801FA858, v88)[1] != 0LL;
        sub_180075B34(a1, v97, v89);
      }
      sub_180010910((__int64)&v95);
      sub_180010910((__int64)v97);
    }
    return (_UNKNOWN **)sub_180010910((__int64)&v94);
  }
  return result;
}
