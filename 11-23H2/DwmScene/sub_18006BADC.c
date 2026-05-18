/*
 * XREFs of sub_18006BADC @ 0x18006BADC
 * Callers:
 *     sub_180064E40 @ 0x180064E40 (sub_180064E40.c)
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012ED8 @ 0x180012ED8 (sub_180012ED8.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18003BDE0 @ 0x18003BDE0 (sub_18003BDE0.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_180066CA0 @ 0x180066CA0 (sub_180066CA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_18006BADC(__int64 a1, _QWORD *a2, char a3)
{
  __m128 v3; // xmm0
  __int64 v7; // rbx
  unsigned __int8 result; // al
  __m128 v9; // xmm13
  __int64 v10; // r8
  char v11; // al
  char v12; // r15
  double v13; // xmm0_8
  unsigned int v14; // xmm7_4
  double v15; // xmm0_8
  unsigned int v16; // xmm8_4
  double v17; // xmm0_8
  unsigned __int32 v18; // xmm9_4
  double v19; // xmm0_8
  unsigned int v20; // xmm10_4
  double v21; // xmm0_8
  unsigned int v22; // xmm11_4
  double v23; // xmm0_8
  unsigned __int32 v24; // xmm12_4
  __int64 v25; // rcx
  __int64 v26; // rbx
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  unsigned __int64 v29; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int32 v30; // [rsp+30h] [rbp-71h]
  unsigned __int64 v31; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int32 v32; // [rsp+40h] [rbp-61h]
  __int64 v33; // [rsp+48h] [rbp-59h] BYREF
  __int64 v34; // [rsp+50h] [rbp-51h]
  __int64 v35; // [rsp+58h] [rbp-49h] BYREF
  __int128 v36; // [rsp+60h] [rbp-41h]

  v7 = sub_180034094(a1, *(_DWORD *)(*a2 + 112LL));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4968, 0LL);
  if ( result )
  {
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D4948);
    v9 = v3;
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801D4988, v10);
    v12 = v11;
    v13 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D49A8);
    v14 = LODWORD(v13);
    v15 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D49C8);
    v16 = LODWORD(v15);
    v17 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D49E8);
    v18 = LODWORD(v17);
    v19 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D4A08);
    v20 = LODWORD(v19);
    v21 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D4A28);
    v22 = LODWORD(v21);
    v23 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D4A48);
    v24 = LODWORD(v23);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 88LL))(v7, &qword_1801D4A68);
    result = (unsigned __int8)sub_180066CA0(v25, &v35, a2);
    v26 = v35;
    if ( v35 )
    {
      if ( a3 || sub_180057460(a1 + 1467) )
      {
        v31 = __PAIR64__(v16, v14);
        v32 = v18;
        v29 = 0LL;
        v30 = 0;
        if ( v12 )
        {
          sub_180013E14(v26, &v33);
          if ( v33 )
            *((float *)&v29 + 1) = *(float *)(v33 + 104) + 0.0;
          if ( v34 )
            sub_180010530(v34);
        }
        v27 = _mm_add_ps(_mm_movelh_ps((__m128)v31, (__m128)v32), _mm_movelh_ps((__m128)v29, (__m128)v30));
        v31 = 0LL;
        v32 = _mm_shuffle_ps(v27, v27, 170).m128_u32[0];
        v29 = v27.m128_u64[0];
        v30 = v32;
        sub_180012ED8((_DWORD *)v26, &v29);
        if ( a3 )
          goto LABEL_19;
      }
      if ( sub_180057460(a1 + 1468) )
      {
LABEL_19:
        v31 = __PAIR64__(v22, v20);
        v32 = v24;
        sub_18003BDE0((__int64)&v33, &v31);
        sub_18003D8E8((_DWORD *)v26, &v33);
        if ( a3 )
          goto LABEL_14;
      }
      result = sub_180057460(a1 + 1466);
      if ( result )
      {
LABEL_14:
        sub_18003E330(v26);
        v32 = *(_DWORD *)(v26 + 180);
        v28 = _mm_mul_ps(
                _mm_shuffle_ps(v9, v9, 0),
                _mm_movelh_ps((__m128)*(unsigned __int64 *)(v26 + 172), (__m128)v32));
        v32 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
        v29 = v28.m128_u64[0];
        v30 = v32;
        result = sub_18003D938((_DWORD *)v26, &v29);
      }
    }
    if ( (_QWORD)v36 )
      return sub_180010530(v36);
  }
  return result;
}
