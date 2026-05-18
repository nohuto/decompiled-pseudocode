/*
 * XREFs of sub_180068E68 @ 0x180068E68
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_180033EB4 @ 0x180033EB4 (sub_180033EB4.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_180063038 @ 0x180063038 (sub_180063038.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_18006B8F4 @ 0x18006B8F4 (sub_18006B8F4.c)
 *     sub_180092FD0 @ 0x180092FD0 (sub_180092FD0.c)
 *     sub_180092FE0 @ 0x180092FE0 (sub_180092FE0.c)
 *     sub_180092FF0 @ 0x180092FF0 (sub_180092FF0.c)
 *     sub_180093000 @ 0x180093000 (sub_180093000.c)
 *     sub_180093010 @ 0x180093010 (sub_180093010.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_180093058 @ 0x180093058 (sub_180093058.c)
 *     sub_180093068 @ 0x180093068 (sub_180093068.c)
 *     sub_180093078 @ 0x180093078 (sub_180093078.c)
 *     sub_1800930B0 @ 0x1800930B0 (sub_1800930B0.c)
 *     sub_1800930F4 @ 0x1800930F4 (sub_1800930F4.c)
 *     sub_180093104 @ 0x180093104 (sub_180093104.c)
 *     sub_180093114 @ 0x180093114 (sub_180093114.c)
 *     sub_180093124 @ 0x180093124 (sub_180093124.c)
 *     sub_180093134 @ 0x180093134 (sub_180093134.c)
 *     sub_18009317C @ 0x18009317C (sub_18009317C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180068E68(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  float v11; // xmm6_4
  bool v12; // r13
  bool v13; // r15
  __int64 v14; // rsi
  __m128 v15; // xmm2
  double v16; // xmm0_8
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm4
  __m128 v21; // xmm4
  __m128 v22; // xmm4
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __m128 v25; // xmm7
  _BOOL8 v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v33; // [rsp+28h] [rbp-49h]
  float v34; // [rsp+30h] [rbp-41h]
  __int64 v35; // [rsp+38h] [rbp-39h] BYREF
  __int64 v36; // [rsp+40h] [rbp-31h]
  __int128 v37; // [rsp+48h] [rbp-29h] BYREF
  __int128 v38; // [rsp+58h] [rbp-19h] BYREF
  __int64 v39; // [rsp+68h] [rbp-9h] BYREF
  __int64 v40; // [rsp+70h] [rbp-1h]
  __int64 v41; // [rsp+78h] [rbp+7h] BYREF
  __int64 v42; // [rsp+80h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( a3[2] )
  {
    v7 = sub_180034094(a1, *(_DWORD *)(*a2 + 112LL));
    v8 = sub_18001246C(&v39, a2);
    LOBYTE(v3) = (unsigned __int8)sub_180033EB4(a1, &v41, v9, v8);
    v10 = v41;
    if ( (*(_DWORD *)(v41 + 440) & 0x2000000) != 0 )
    {
      sub_1800631C0(&v39, &v41);
      v33 = 0LL;
      v34 = 0.0;
      v37 = xmmword_18019BA00;
      v11 = 0.0;
      v38 = 0LL;
      v12 = sub_180011DE0(&v41);
      if ( v12 )
      {
        sub_180011C50(v10 + 56, &v35);
        sub_180011020(&v38, &v35);
        if ( v36 )
          sub_180010530(v36);
        v11 = *(float *)(v10 + 328);
      }
      v13 = sub_180011DE0(&v38);
      v14 = v38;
      if ( v13 )
      {
        sub_18003E330(v38);
        v35 = *(_QWORD *)(v14 + 144);
        LODWORD(v36) = *(_DWORD *)(v14 + 152);
        v33 = v35;
        v34 = *(float *)&v36;
        sub_18003E330(v14);
        v15 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 156));
        LODWORD(v37) = v15.m128_i32[0];
        DWORD1(v37) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
        DWORD2(v37) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        HIDWORD(v37) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
      }
      if ( sub_180063038(a3, qword_1801D6508) )
        LODWORD(v33) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6508);
      if ( sub_180063038(a3, qword_1801D6528) )
        HIDWORD(v33) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6528);
      if ( sub_180063038(a3, qword_1801D6548) )
        v34 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6548);
      if ( sub_180063038(a3, qword_1801D6568) )
        LODWORD(v37) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6568);
      if ( sub_180063038(a3, qword_1801D6588) )
        DWORD1(v37) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6588);
      if ( sub_180063038(a3, qword_1801D65A8) )
        DWORD2(v37) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D65A8);
      if ( sub_180063038(a3, qword_1801D65C8) )
        HIDWORD(v37) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D65C8);
      if ( sub_180063038(a3, qword_1801D64E8) )
      {
        v16 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D64E8);
        v11 = *(float *)&v16;
      }
      v17 = _mm_mul_ps((__m128)v37, (__m128)v37);
      v18 = _mm_shuffle_ps(v17, v17, 238);
      v19 = _mm_add_ps(v17, v18);
      v20 = _mm_shuffle_ps(v19, v19, 64);
      v21 = _mm_add_ps(v20, _mm_shuffle_ps(v18, v20, 240));
      v22 = _mm_shuffle_ps(v21, v21, 170);
      v23 = _mm_sqrt_ps(v22);
      v24 = _mm_cmpneq_ps((__m128)xmmword_180106340, v22);
      v25 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_div_ps((__m128)v37, v23), _mm_cmpneq_ps(v23, (__m128)0LL)), v24),
              _mm_andnot_ps(v24, (__m128)xmmword_180106390));
      if ( v12 )
        sub_18005D23C(v10, v11);
      if ( v13 )
      {
        v35 = v33;
        *(float *)&v36 = v34;
        sub_180012ED8((_DWORD *)v14, &v35);
        v37 = (__int128)v25;
        sub_18003D8E8((_DWORD *)v14, &v37);
      }
      LOBYTE(v3) = sub_180011DE0(&v39);
      if ( (_BYTE)v3 )
      {
        v26 = sub_180063038(a3, qword_1801D6888);
        v27 = v39;
        if ( v26 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6888);
          sub_180093010(v27);
        }
        if ( sub_180063038(a3, qword_1801D6868) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6868);
          sub_180092FD0(v27);
        }
        if ( sub_180063038(a3, qword_1801D68A8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D68A8);
          sub_180093000(v27);
        }
        if ( sub_180063038(a3, qword_1801D6688) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6688);
          sub_180093058(v27);
        }
        if ( sub_180063038(a3, qword_1801D66A8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D66A8);
          sub_180093068(v27);
        }
        if ( sub_180063038(a3, qword_1801D66E8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D66E8);
          sub_180093078(v27);
        }
        if ( sub_180063038(a3, qword_1801D6708) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6708);
          sub_180093020(v27);
        }
        if ( sub_180063038(a3, qword_1801D66C8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D66C8);
          sub_180092FF0(v27);
        }
        if ( sub_180063038(a3, qword_1801D6728) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6728);
          sub_1800930F4(v27);
        }
        if ( sub_180063038(a3, qword_1801D6748) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6748);
          sub_180093114(v27);
        }
        if ( sub_180063038(a3, qword_1801D6768) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6768);
          sub_180093104(v27);
        }
        if ( sub_180063038(a3, qword_1801D6788) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D6788);
          sub_180093134(v27);
        }
        if ( sub_180063038(a3, qword_1801D67A8) )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, qword_1801D67A8);
          sub_180093124(v27);
        }
        if ( sub_180063038(a3, qword_1801D6668) )
        {
          v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, qword_1801D6668, 0LL);
          sub_180092FE0(v27, v28);
        }
        if ( sub_180063038(a3, qword_1801D67C8) )
        {
          v29 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, qword_1801D67C8, 0LL);
          sub_1800930B0(v27, v29);
        }
        if ( sub_180063038(a3, qword_1801D6808) )
        {
          LOBYTE(v30) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 64LL))(
                          v7,
                          qword_1801D6808,
                          0LL);
          sub_18009317C(v27, v30);
        }
        sub_180063038(a3, qword_1801D6908);
        LOBYTE(v31) = sub_180063038(a3, qword_1801D67E8);
        LOBYTE(v3) = sub_18006B8F4(a1, &v39, v31);
      }
      if ( *((_QWORD *)&v38 + 1) )
        LOBYTE(v3) = sub_180010530(*((__int64 *)&v38 + 1));
      if ( v40 )
        LOBYTE(v3) = sub_180010530(v40);
    }
    if ( v42 )
      LOBYTE(v3) = sub_180010530(v42);
  }
  return (char)v3;
}
