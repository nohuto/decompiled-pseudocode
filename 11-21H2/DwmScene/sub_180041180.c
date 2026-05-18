/*
 * XREFs of sub_180041180 @ 0x180041180
 * Callers:
 *     sub_180041180 @ 0x180041180 (sub_180041180.c)
 *     sub_180042F0C @ 0x180042F0C (sub_180042F0C.c)
 *     sub_1800737B0 @ 0x1800737B0 (sub_1800737B0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180041180 @ 0x180041180 (sub_180041180.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall sub_180041180(__int64 a1, __m128 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // di
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  const __m128i *v11; // rax
  __m128 v12; // xmm6
  __m128 v13; // xmm3
  __m128 v14; // xmm1
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  __int128 v18; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-20h] BYREF

  sub_180043668(a1);
  sub_180043668(a1);
  v19 = 0LL;
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
        v19 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v7 = 2;
  if ( (_QWORD)v19 )
  {
    sub_180043668(a1);
    v18 = 0LL;
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
          v18 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v7 = 7;
    v11 = (const __m128i *)sub_180041180(v18, v21);
  }
  else
  {
    v20 = xmmword_180128A10;
    v11 = (const __m128i *)&v20;
  }
  v12 = (__m128)_mm_loadu_si128(v11);
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)&v18);
  sub_180010910((__int64)&v19);
  v13 = *(__m128 *)(a1 + 156);
  v14 = _mm_shuffle_ps(v13, v13, 27);
  v15 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v14);
  v16 = _mm_shuffle_ps(v14, v14, 177);
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 27), _mm_shuffle_ps(v12, v12, 170)),
              (__m128)xmmword_18012A4A0),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 85), v16), (__m128)xmmword_18012A4B0)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 255), v13), _mm_mul_ps(v15, (__m128)xmmword_18012A490)));
  return a2;
}
