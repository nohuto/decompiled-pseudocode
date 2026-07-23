/*
 * XREFs of sub_140AF5384 @ 0x140AF5384
 * Callers:
 *     sub_140AF522C @ 0x140AF522C (sub_140AF522C.c)
 * Callees:
 *     sub_140AF5164 @ 0x140AF5164 (sub_140AF5164.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 */

__int64 __fastcall sub_140AF5384(__int128 *a1)
{
  __int128 *v2; // rcx
  __int64 result; // rax
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __m128i v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // r14
  _OWORD v16[2]; // [rsp+38h] [rbp-9h] BYREF
  __m128i v17; // [rsp+58h] [rbp+17h]
  _OWORD v18[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+47h]
  unsigned __int64 v20; // [rsp+90h] [rbp+4Fh]

  if ( (*((_DWORD *)a1 + 6) & 0x40000000) != 0 )
  {
    v4 = (unsigned __int64 *)qword_140D690E0;
    v5 = *((_QWORD *)a1 + 4);
    v6 = *((_QWORD *)a1 + 5);
    while ( v4 < (unsigned __int64 *)&qword_140D690E0[5 * (unsigned __int16)word_140D05000] )
    {
      if ( (__int128 *)v4[4] == a1 )
      {
        v7 = v4[1];
        if ( !v7 )
          break;
        v8 = *v4;
        if ( *v4 < v5 || v8 >= v6 + v5 )
          break;
        v9 = (__m128i)a1[2];
        v10 = *a1;
        v11 = a1[1];
        v12 = *((_QWORD *)a1 + 4);
        v16[0] = *a1;
        v16[1] = v11;
        v17 = v9;
        if ( v8 > v12 )
        {
          v15 = v8 - v12;
          v19 = v9.m128i_i64[0];
          v20 = v15;
          v18[0] = v10;
          v18[1] = v11;
          sub_140AF5478(v18);
          v12 = *v4;
          v7 = v4[1];
          v13 = _mm_srli_si128(v9, 8).m128i_u64[0] - v15;
        }
        else
        {
          v13 = v17.m128i_i64[1];
        }
        v14 = *((_DWORD *)a1 + 6);
        v17.m128i_i64[1] = v13 - v7;
        v17.m128i_i64[0] = v7 + v12;
        result = sub_140AF5164(v4, v14);
        if ( v17.m128i_i64[1] )
        {
          v2 = v16;
          return sub_140AF5478(v2);
        }
        return result;
      }
      v4 += 5;
    }
  }
  v2 = a1;
  return sub_140AF5478(v2);
}
