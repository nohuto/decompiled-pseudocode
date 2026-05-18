/*
 * XREFs of sub_180070DA0 @ 0x180070DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180065560 @ 0x180065560 (sub_180065560.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180070DA0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  _DWORD *v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __m128 v11; // xmm0
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rsi
  __m128 v16; // xmm8
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  float v25; // xmm0_4
  __m128 v26; // xmm6
  __int128 v28; // [rsp+20h] [rbp-78h] BYREF
  __int128 v29; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v30[48]; // [rsp+40h] [rbp-58h] BYREF

  v7 = (_DWORD *)*a2;
  v28 = 0LL;
  v8 = *((_QWORD *)v7 + 8);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v28 = *(_OWORD *)(v7 + 14);
        break;
      }
    }
  }
  v11 = 0LL;
  v29 = 0LL;
  v12 = *(_QWORD *)(v28 + 80);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 8);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
      if ( v14 == v13 )
      {
        v29 = *(_OWORD *)(v28 + 72);
        break;
      }
    }
  }
  sub_180010910((__int64)&v28);
  v15 = sub_180036808(a1, *(_DWORD *)(v29 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v15 + 64LL))(
         v15,
         &qword_1801F8178,
         0LL) )
  {
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 88LL))(
                                v15,
                                &qword_1801F80F8);
    v16 = v11;
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 88LL))(
                                v15,
                                &qword_1801F8118);
    v17 = v11;
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 88LL))(
                                v15,
                                &qword_1801F8138);
    v18 = v11;
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 88LL))(
                                v15,
                                &qword_1801F8158);
    v19 = _mm_movelh_ps(_mm_unpacklo_ps(v16, v17), _mm_unpacklo_ps(v18, v11));
    v20 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(v19, v19, 255), (__m128)xmmword_1801283A0),
              _mm_andnot_ps((__m128)xmmword_1801283A0, (__m128)xmmword_1801284B0)),
            v19);
    v21 = (_DWORD *)*a2;
    v21[74] = v20.m128_i32[0];
    v11 = _mm_shuffle_ps(v20, v20, 85);
    v21[75] = v11.m128_i32[0];
    v21[76] = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v21[77] = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  }
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 8LL))(*a4, v30) == 2 )
  {
    v22 = (_DWORD *)*a2;
    v22[74] = 0;
    v22[75] = 0;
    v22[76] = 0;
    v22[77] = 0;
  }
  v23 = *a2;
  v24 = *(_DWORD *)(*a2 + 440);
  if ( (v24 & 0x100) != 0 )
  {
    if ( (v24 & 0x2000000) != 0 )
    {
      v25 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 88LL))(v15, &qword_1801FA558);
      v23 = *a2;
      if ( v25 != *(float *)(*a2 + 328) )
      {
        *(float *)(v23 + 328) = v25;
        sub_18006560C(v23, 2);
        v23 = *a2;
      }
    }
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v26 = v11;
    *(double *)v11.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    sub_180065560(v23, _mm_unpacklo_ps(v26, v11).m128_i64[0]);
  }
  return sub_180010910((__int64)&v29);
}
