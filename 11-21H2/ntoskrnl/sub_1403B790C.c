/*
 * XREFs of sub_1403B790C @ 0x1403B790C
 * Callers:
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 * Callees:
 *     sub_140236C98 @ 0x140236C98 (sub_140236C98.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 */

char __fastcall sub_1403B790C(
        __m128i *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int16 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __m128i *v9; // rdi
  __int64 v10; // rbp
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  char result; // al
  __m128i v14; // xmm2
  __m128i *v15; // rcx
  __int64 v16; // r9
  unsigned __int16 *v17; // r10
  unsigned __int64 *v18; // r12
  __int64 v19; // rbx
  int v20; // r13d
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 m128i_i64; // rdx
  __m128i *v28; // rcx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF
  int v33; // [rsp+70h] [rbp+8h] BYREF

  v9 = a1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4);
  if ( (a5 & 0x3000) != 0 )
    return sub_140236C98(
             0xAAAAAAAAAAAAAAABuLL * ((__int64)a1[0x22000000000LL].m128i_i64 >> 4),
             a2,
             (a5 >> 12) & 1,
             1,
             a4,
             0);
  if ( (a5 & 0x180) != 0 )
  {
    _InterlockedExchangeAdd64(&qword_140C53530, a2);
    if ( (a5 & 0x100) != 0 )
      _InterlockedExchangeAdd64(&qword_140C50848, a2);
  }
  if ( (a5 & 2) != 0 )
  {
    v16 = sub_1402CCC50(16 * ((a6 << 12) | *(_WORD *)(a6 + 32) & 0x3E | 0x40));
    v32 = v16;
    a5 = a3[2].m128i_i8[2] & 7;
    if ( a5 == 2 && (unsigned int)sub_1403B78C4(0, 1u) )
    {
      sub_14033C3A0((unsigned __int64 *)&v32, 1);
      v16 = v32;
    }
    v18 = a7;
    a3[2].m128i_i64[1] |= 0x8000000000000000uLL;
    v19 = a3[2].m128i_i64[1];
    a3[1].m128i_i64[0] = v16;
    v20 = (*v17 >> 1) & 0x1F;
    v21 = sub_14033AC10((unsigned __int64)v18);
    v22 = 48 * v21 - 0x220000000000LL;
    v23 = a5 == 6;
    a3[2].m128i_i64[1] = v19 ^ (v21 ^ v19) & 0xFFFFFFFFFFLL;
    if ( v23 )
      v24 = sub_1402CBD10((unsigned __int64)v18, v10, v20);
    else
      v24 = sub_1402E4D28(v10, v20);
    m128i_i64 = (__int64)v9[3 * a2].m128i_i64;
    while ( v9 != (__m128i *)m128i_i64 )
    {
      a3->m128i_i64[1] = (__int64)v18;
      v28 = v9 + 3;
      v29 = _mm_loadu_si128(a3);
      v30 = _mm_loadu_si128(a3 + 1);
      v31 = _mm_loadu_si128(a3 + 2);
      while ( v9 != v28 )
      {
        *v9 = v29;
        v9[1] = v30;
        v9[2] = v31;
        v9 += 3;
      }
      v9 = v28;
      *v18 = v24;
      v25 = 0xFFFFFFFFFF000LL;
      ++v18;
      v24 ^= (v24 ^ (v24 + 4096)) & 0xFFFFFFFFFF000LL;
    }
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v33, m128i_i64, v25, v26);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    result = -1;
    *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (a2 + *(_QWORD *)(v22 + 24))) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v11 = *a3;
    v12 = a3[1];
    result = 48 * a2;
    v14 = a3[2];
    v15 = &a1[3 * a2];
    if ( 48 * a2 > 0x1000 )
    {
      while ( v9 != v15 )
      {
        _mm_stream_si128(v9, v11);
        _mm_stream_si128(v9 + 1, v12);
        _mm_stream_si128(v9 + 2, v14);
        v9 += 3;
      }
      _mm_sfence();
    }
    else
    {
      while ( v9 != v15 )
      {
        *v9 = v11;
        v9[1] = v12;
        v9[2] = v14;
        v9 += 3;
      }
    }
  }
  return result;
}
