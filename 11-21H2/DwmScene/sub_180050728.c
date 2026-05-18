/*
 * XREFs of sub_180050728 @ 0x180050728
 * Callers:
 *     sub_180047B60 @ 0x180047B60 (sub_180047B60.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180040BA4 @ 0x180040BA4 (sub_180040BA4.c)
 *     sub_180047504 @ 0x180047504 (sub_180047504.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180050728(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int64 v6; // r9
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int64 result; // rax
  __m128 v10; // xmm5
  __m128 v11; // xmm6
  __m128 v12; // xmm4
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm6
  __m128 v16; // xmm0
  __m128 v17; // xmm6
  _BYTE v18[24]; // [rsp+28h] [rbp-39h]
  _BYTE v19[24]; // [rsp+40h] [rbp-21h] BYREF
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h] BYREF
  __int128 v22; // [rsp+88h] [rbp+27h]
  double v23[4]; // [rsp+98h] [rbp+37h]

  v20 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v20 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  sub_180040BA4(v20, (__int64)&v21);
  sub_180010910((__int64)&v20);
  *(_OWORD *)v19 = xmmword_1801BD980;
  *(_QWORD *)&v19[16] = 0x3F8000003F800000LL;
  result = sub_180047504((unsigned __int64 *)(a1 + 88), (__int64)v19, *(double *)&v22, v23[0]);
  if ( *a3 )
  {
    v10 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
    v11 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a2 + 12), (__m128)*((unsigned int *)a2 + 5));
    v12 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v19, (__m128)*(unsigned int *)&v19[8]);
    v13 = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v19[12], (__m128)*(unsigned int *)&v19[20]);
    v14 = _mm_min_ps(_mm_sub_ps(v10, v11), _mm_sub_ps(v12, v13));
    v15 = _mm_max_ps(_mm_add_ps(v11, v10), _mm_add_ps(v13, v12));
    v16 = _mm_mul_ps(_mm_add_ps(v15, v14), (__m128)xmmword_1801BD910);
    *(_QWORD *)v18 = v16.m128_u64[0];
    *(_DWORD *)&v18[8] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
    v17 = _mm_mul_ps(_mm_sub_ps(v15, v14), (__m128)xmmword_1801BD910);
    *(_QWORD *)&v18[12] = v17.m128_u64[0];
    *(_DWORD *)&v18[20] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    *(_OWORD *)a2 = *(_OWORD *)v18;
    a2[2] = *(_QWORD *)&v18[16];
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)v19;
    a2[2] = *(_QWORD *)&v19[16];
    *a3 = 1;
  }
  return result;
}
