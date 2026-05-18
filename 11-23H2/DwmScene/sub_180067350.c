/*
 * XREFs of sub_180067350 @ 0x180067350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18005D1E0 @ 0x18005D1E0 (sub_18005D1E0.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180067350(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __m128 v4; // xmm0
  __int64 v8; // rdi
  double v9; // xmm0_8
  unsigned int v10; // xmm8_4
  double v11; // xmm0_8
  unsigned int v12; // xmm7_4
  double v13; // xmm0_8
  unsigned int v14; // xmm6_4
  __m128 v15; // xmm3
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  int v18; // ecx
  double v19; // xmm0_8
  __int64 v20; // rbx
  __m128 v21; // xmm6
  __m128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]

  sub_180011C50(*a2 + 56, &v22);
  sub_18001265C(v22.m128_i64[0], &v23);
  if ( v22.m128_u64[1] )
    sub_180010530(v22.m128_i64[1]);
  v8 = sub_180034094(a1, *(_DWORD *)(v23 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801D4108, 0LL) )
  {
    v9 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D4088);
    v10 = LODWORD(v9);
    v11 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D40A8);
    v12 = LODWORD(v11);
    v13 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D40C8);
    v14 = LODWORD(v13);
    *(float *)&v13 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D40E8);
    v22.m128_u64[0] = __PAIR64__(v12, v10);
    v22.m128_u64[1] = __PAIR64__(LODWORD(v13), v14);
    v15 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(v22, v22, 255), (__m128)xmmword_180106400),
              _mm_andnot_ps((__m128)xmmword_180106400, (__m128)xmmword_180106510)),
            v22);
    v16 = (_DWORD *)*a2;
    v16[74] = v15.m128_i32[0];
    v4 = _mm_shuffle_ps(v15, v15, 85);
    v16[75] = v4.m128_i32[0];
    v16[76] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
    v16[77] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  }
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128 *))(*(_QWORD *)*a4 + 8LL))(*a4, &v22) == 2 )
  {
    v17 = (_DWORD *)*a2;
    v17[74] = 0;
    v17[75] = 0;
    v17[76] = 0;
    v17[77] = 0;
  }
  v18 = *(_DWORD *)(*a2 + 440);
  if ( (v18 & 0x100) != 0 )
  {
    if ( (v18 & 0x2000000) != 0 )
    {
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801D64E8);
      sub_18005D23C(*a2, *(float *)&v19);
    }
    v20 = *a2;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v21 = v4;
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    sub_18005D1E0(v20, _mm_unpacklo_ps(v21, v4).m128_i64[0]);
  }
  if ( v24 )
    sub_180010530(v24);
}
