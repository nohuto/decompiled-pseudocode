/*
 * XREFs of sub_180040FB8 @ 0x180040FB8
 * Callers:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_1800737B0 @ 0x1800737B0 (sub_1800737B0.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800A5B30 @ 0x1800A5B30 (sub_1800A5B30.c)
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 *     sub_1800B7118 @ 0x1800B7118 (sub_1800B7118.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180040FB8(__int64 a1, __int64 a2)
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
  __m128 v13; // xmm7
  __m128 v14; // xmm8
  __m128 v15; // xmm9
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm3
  __int128 v20; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v22[4]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v23[136]; // [rsp+90h] [rbp-78h] BYREF

  sub_180043668(a1);
  sub_180043668(a1);
  v21 = 0LL;
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
        v21 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v7 = 2;
  if ( (_QWORD)v21 )
  {
    sub_180043668(a1);
    v20 = 0LL;
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
          v20 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v7 = 7;
    v11 = (__m128 *)sub_1800414A0(v20, v23);
  }
  else
  {
    v22[0] = xmmword_1801289D0;
    v22[1] = xmmword_1801289E0;
    v22[2] = xmmword_1801289F0;
    v22[3] = xmmword_180128A00;
    v11 = (__m128 *)v22;
  }
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = v11[3];
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)&v20);
  sub_180010910((__int64)&v21);
  v16 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(a1 + 144), (__m128)*(unsigned int *)(a1 + 152));
  v17 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), v14), v15),
            _mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v13)),
          _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v12));
  v18 = _mm_div_ps(v17, _mm_shuffle_ps(v17, v17, 255));
  *(_QWORD *)a2 = v18.m128_u64[0];
  *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
  return a2;
}
