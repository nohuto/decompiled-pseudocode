/*
 * XREFs of sub_140B5273C @ 0x140B5273C
 * Callers:
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 */

unsigned __int64 __fastcall sub_140B5273C(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  __m128i *v8; // rbx
  __m128i *v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // rdi
  unsigned __int64 *v23; // r14
  __m128i *v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  __m128i v29; // [rsp+20h] [rbp-30h] BYREF
  __m128i v30; // [rsp+30h] [rbp-20h] BYREF
  __m128i v31; // [rsp+40h] [rbp-10h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31.m128i_i64[0] = 0x400000LL;
  v30.m128i_i64[0] = sub_1402CCC50(128LL);
  v31.m128i_i64[1] = 0x40003FFFFFFFFELL;
  sub_14036C868((__int64)&v29, *((_QWORD *)KeGetCurrentThread() + 23), 1);
  sub_14033C300((__int64)&v29, 1);
  if ( a3 == 33 )
  {
    v29.m128i_i64[1] = -8LL;
    v30.m128i_i64[1] &= 0xC000000000000000uLL;
    v31.m128i_i16[0] = 0;
    v31.m128i_i8[3] |= 0x10u;
    v31.m128i_i8[2] = v31.m128i_i8[2] & 0xF8 | 5;
  }
  else
  {
    v31.m128i_i64[1] = v31.m128i_i64[1] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    v30.m128i_i64[1] = v30.m128i_i64[1] & 0xC000000000000000uLL | 1;
    v31.m128i_i16[0] = 2;
    v31.m128i_i8[2] = v31.m128i_i8[2] & 0xF8 | 6;
    v29.m128i_i64[1] = 0xFFFFF68000000000uLL;
    _InterlockedExchangeAdd64(&qword_140C53530, a2);
  }
  result = 0xFFFFDE0000000000uLL;
  v7 = a1 + a2;
  v8 = (__m128i *)(48 * a1 - 0x220000000000LL);
  v9 = v8;
  v10 = 48 * (a1 + a2) - 0x220000000000LL;
  if ( 48 * a2 <= 0x1000 )
  {
    if ( v8 != (__m128i *)v10 )
    {
      v14 = _mm_loadu_si128(&v31);
      v15 = _mm_loadu_si128(&v30);
      v16 = _mm_loadu_si128(&v29);
      do
      {
        *v9 = v16;
        v9[1] = v15;
        v9[2] = v14;
        v9 += 3;
      }
      while ( v9 != (__m128i *)v10 );
    }
  }
  else
  {
    if ( v8 != (__m128i *)v10 )
    {
      v11 = _mm_loadu_si128(&v31);
      v12 = _mm_loadu_si128(&v30);
      v13 = _mm_loadu_si128(&v29);
      do
      {
        _mm_stream_si128(v9, v13);
        _mm_stream_si128(v9 + 1, v12);
        _mm_stream_si128(v9 + 2, v11);
        v9 += 3;
      }
      while ( v9 != (__m128i *)v10 );
    }
    _mm_sfence();
  }
  if ( a3 == 33 )
  {
    v17 = v7 - 1;
    if ( a1 <= v7 - 1 )
    {
      v18 = a1 - 1;
      v19 = v17 - a1;
      a1 += a2;
      v20 = v19 + 1;
      do
      {
        v8->m128i_i64[0] ^= (v8->m128i_i64[0] ^ (v18 + 2)) & 0xFFFFFFFFFFLL;
        v21 = v8[1].m128i_i64[1] ^ v18++;
        v8[1].m128i_i64[1] ^= v21 & 0xFFFFFFFFFFLL;
        v8 += 3;
        --v20;
      }
      while ( v20 );
    }
    v22 = a1 - a2;
    v23 = (unsigned __int64 *)&v8[-3];
    v24 = &v8[-3 * a2];
    v25 = sub_1402C1550(v22);
    v26 = qword_140C54F90;
    v27 = 24512LL * *((unsigned int *)v25 + 2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + qword_140C54F90 + 24384), a2);
    v28 = *(_QWORD *)(v27 + v26 + 24408);
    if ( v28 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(v27 + v26 + 24400) = v22;
    else
      *(_QWORD *)(48 * v28 - 0x220000000000LL) ^= (v22 ^ *(_QWORD *)(48 * v28 - 0x220000000000LL)) & 0xFFFFFFFFFFLL;
    v24[1].m128i_i64[1] ^= (v24[1].m128i_i64[1] ^ v28) & 0xFFFFFFFFFFLL;
    result = *v23 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *v23 = result;
    *(_QWORD *)(v27 + v26 + 24408) = v17;
  }
  return result;
}
