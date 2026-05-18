/*
 * XREFs of sub_180042D28 @ 0x180042D28
 * Callers:
 *     sub_1800A3610 @ 0x1800A3610 (sub_1800A3610.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180042D28(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // di
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __m128 *v11; // rax
  __m128 v12; // xmm7
  __m128 v13; // xmm8
  __m128 v14; // xmm9
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm7
  __m128 v18; // xmm4
  __m128 v19; // xmm0
  __int128 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int32 v24; // [rsp+70h] [rbp-98h]
  _OWORD v25[4]; // [rsp+78h] [rbp-90h] BYREF
  __m128 v26; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v27[8]; // [rsp+C8h] [rbp-40h] BYREF

  sub_180043668(a1);
  v22 = 0LL;
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
        v22 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v7 = 2;
  if ( (_QWORD)v22 )
  {
    sub_180043668(a1);
    v21 = 0LL;
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
          v21 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v7 = 7;
    v11 = (__m128 *)sub_1800414A0((__m128 *)v21, v27);
  }
  else
  {
    v25[0] = xmmword_1801289D0;
    v25[1] = xmmword_1801289E0;
    v25[2] = xmmword_1801289F0;
    v25[3] = xmmword_180128A00;
    v11 = (__m128 *)v25;
  }
  v12 = v11[1];
  v13 = v11[2];
  v14 = v11[3];
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)&v21);
  sub_180010910((__int64)&v22);
  v15 = v12;
  v16 = sub_18001C880(&v26, *(double *)v12.m128_u64, *(double *)v13.m128_u64, *(double *)v14.m128_u64);
  v17 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v18 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), v13), v14),
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v15)),
          _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v16));
  v19 = _mm_div_ps(v18, _mm_shuffle_ps(v18, v18, 255));
  v23 = v19.m128_u64[0];
  v24 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  return sub_18001380C(a1, &v23);
}
