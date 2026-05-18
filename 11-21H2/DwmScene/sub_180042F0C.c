/*
 * XREFs of sub_180042F0C @ 0x180042F0C
 * Callers:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180041180 @ 0x180041180 (sub_180041180.c)
 *     sub_180042AB0 @ 0x180042AB0 (sub_180042AB0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180042F0C(__int64 a1, __m128 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // di
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __m128 *v11; // rax
  __m128 v12; // xmm6
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm5
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  __m128 v20; // xmm1
  __int128 v22; // [rsp+20h] [rbp-50h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h] BYREF
  __m128 v24; // [rsp+40h] [rbp-30h] BYREF
  __m128 v25; // [rsp+50h] [rbp-20h] BYREF

  sub_1800436D4(a1);
  sub_180043668(a1);
  v23 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v23 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v7 = 2;
  if ( (_QWORD)v23 )
  {
    sub_180043668(a1);
    v22 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
        if ( v10 == v9 )
        {
          v22 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v7 = 7;
    v11 = sub_180041180(v22, &v25);
  }
  else
  {
    v24 = (__m128)xmmword_180128A10;
    v11 = &v24;
  }
  v12 = (__m128)_mm_loadu_si128((const __m128i *)v11);
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)&v22);
  sub_180010910((__int64)&v23);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_add_ps(_mm_shuffle_ps(v12, v13, 64), v13);
  v15 = _mm_add_ps(_mm_shuffle_ps(v13, v14, 48), v14);
  v16 = _mm_shuffle_ps(v15, v15, 170);
  v17 = _mm_andnot_ps(
          _mm_cmple_ps(v16, (__m128)xmmword_1801283E0),
          _mm_div_ps(_mm_mul_ps(v12, (__m128)xmmword_18012A4C0), v16));
  v18 = _mm_shuffle_ps(*a2, *a2, 27);
  v19 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v18);
  v20 = _mm_shuffle_ps(v18, v18, 177);
  v24 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(v20, v20, 27), _mm_shuffle_ps(v17, v17, 170)),
              (__m128)xmmword_18012A4A0),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v20), (__m128)xmmword_18012A4B0)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), *a2), _mm_mul_ps(v19, (__m128)xmmword_18012A490)));
  return sub_180042AB0(a1, &v24);
}
