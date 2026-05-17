/*
 * XREFs of XpressBuildHuffmanDecodingTable @ 0x180057430
 * Callers:
 *     RtlDecompressBufferXpressHuff @ 0x180056EA0 (RtlDecompressBufferXpressHuff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XpressBuildHuffmanDecodingTable(__m128i *a1, __int64 a2)
{
  __int16 v2; // bp
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r11
  __int16 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  __int16 v11; // si
  __int16 v12; // di
  __m128i v13; // xmm0
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // cx
  unsigned __int16 *v17; // r10
  __int16 v18; // di
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int16 v24; // ax
  unsigned __int64 v25; // r8
  bool v26; // zf
  __int16 *v27; // rdx
  int v28; // r10d
  unsigned __int16 *v29; // r11
  __int64 v30; // rdx
  __int64 i; // r9
  int v32; // ecx
  unsigned __int64 v33; // rdi
  __int64 v35; // rcx
  __int16 *v36; // rax
  __int16 *v37; // rdx
  __int64 v38; // rcx
  __int16 *v39; // rax
  __int64 v40; // rcx
  __int16 *v41; // rax
  __int64 v42; // rcx
  __int16 *v43; // rax
  __int64 v44; // rcx
  __int16 *v45; // rax
  __int64 v46; // rcx
  __int16 *v47; // rax
  __int64 v48; // rdx
  __int16 *j; // rax
  __m128i *v50; // rdi
  __int64 k; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2000200u), 0);
  a1[64] = v13;
  a1[65] = v13;
  do
  {
    v14 = *(_BYTE *)(a2 + v6) & 0xF;
    if ( (*(_BYTE *)(a2 + v6) & 0xF) != 0 )
    {
      a1->m128i_i16[2 * v7] = a1[64].m128i_i16[v14];
      v9 = v10;
      a1[64].m128i_i16[v14] = 2 * v8;
      v12 = v11;
    }
    v15 = (unsigned __int64)*(unsigned __int8 *)(a2 + v6) >> 4;
    if ( v15 )
    {
      a1->m128i_i16[2 * v9 + 1] = a1[64].m128i_i16[v15];
      a1[64].m128i_i16[v15] = 2 * v12 + 1;
    }
    v6 = ++v5;
    v7 = v5;
    v8 = v5;
    v9 = v5;
    v10 = v5;
    v12 = v5;
    v11 = v5;
  }
  while ( v5 < 0x100 );
  v16 = -1024;
  v17 = &a1[65].m128i_u16[7];
  v18 = -1023;
  v19 = 1024LL;
  v20 = 15LL;
  while ( 1 )
  {
    v21 = v18 == v16;
    if ( v18 < v16 )
    {
      v37 = &a1[194].m128i_i16[v19];
      v19 -= (unsigned __int16)(((unsigned __int16)(v16 - v18 - 1) >> 1) + 1);
      do
      {
        *v37-- = v18;
        v18 += 2;
        v21 = v18 == v16;
      }
      while ( v18 < v16 );
    }
    if ( v21 )
      return 3221226050LL;
    v18 = v16 + 1;
    v22 = *v17;
    if ( v22 != 512 )
    {
      v23 = (__int64)a1[194].m128i_i64 + 2 * v19;
      do
      {
        v23 -= 2LL;
        --v19;
        *(_WORD *)(v23 + 2) = v20 + 16 * v22;
        v22 = a1->m128i_u16[v22];
      }
      while ( v22 != 512 );
    }
    --v20;
    v24 = -(__int16)v19;
    --v17;
    v16 = -(__int16)v19;
    if ( v20 <= 0xA )
    {
      v25 = 1023LL;
      v26 = v18 == v24;
      if ( v18 < v24 )
      {
        v27 = &a1[193].m128i_i16[7];
        v25 = 1023LL - (unsigned __int16)(((unsigned __int16)(v24 - v18 - 1) >> 1) + 1);
        do
        {
          *v27-- = v18;
          v18 += 2;
          v26 = v18 == v16;
        }
        while ( v18 < v16 );
      }
      if ( !v26 )
      {
        v28 = 0;
        v29 = &a1[65].m128i_u16[2];
        v30 = 10LL;
        do
        {
          for ( i = *v29; i != 512; --v25 )
          {
            v2 = v30 + 16 * i;
            if ( v28 )
              return 3221226050LL;
            v32 = 10 - v30;
            if ( (v25 + 1) << (10 - (unsigned __int8)v30) > 0x400 )
              return 3221226050LL;
            v33 = v25 << v32;
            switch ( v32 )
            {
              case 0:
                goto LABEL_24;
              case 1:
                goto LABEL_23;
              case 2:
                goto LABEL_32;
              case 3:
                a1[66].m128i_i16[v33 + 7] = v2;
                a1[66].m128i_i16[v33 + 6] = v2;
                a1[66].m128i_i16[v33 + 5] = v2;
                a1[66].m128i_i16[v33 + 4] = v2;
LABEL_32:
                a1[66].m128i_i16[v33 + 3] = v2;
                a1[66].m128i_i16[v33 + 2] = v2;
LABEL_23:
                a1[66].m128i_i16[v33 + 1] = v2;
LABEL_24:
                a1[66].m128i_i16[v33] = v2;
                break;
              case 4:
                v35 = 4LL;
                v36 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v36 - 1) = v2;
                  *v36 = v2;
                  v36[1] = v2;
                  v36[2] = v2;
                  v36 += 4;
                  --v35;
                }
                while ( v35 );
                break;
              case 5:
                v38 = 8LL;
                v39 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v39 - 1) = v2;
                  *v39 = v2;
                  v39[1] = v2;
                  v39[2] = v2;
                  v39 += 4;
                  --v38;
                }
                while ( v38 );
                break;
              case 6:
                v40 = 16LL;
                v41 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v41 - 1) = v2;
                  *v41 = v2;
                  v41[1] = v2;
                  v41[2] = v2;
                  v41 += 4;
                  --v40;
                }
                while ( v40 );
                break;
              case 7:
                v44 = 32LL;
                v45 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v45 - 1) = v2;
                  *v45 = v2;
                  v45[1] = v2;
                  v45[2] = v2;
                  v45 += 4;
                  --v44;
                }
                while ( v44 );
                break;
              case 8:
                v42 = 64LL;
                v43 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v43 - 1) = v2;
                  *v43 = v2;
                  v43[1] = v2;
                  v43[2] = v2;
                  v43 += 4;
                  --v42;
                }
                while ( v42 );
                break;
              case 9:
                v46 = 128LL;
                v47 = &a1[66].m128i_i16[v33 + 1];
                do
                {
                  *(v47 - 1) = v2;
                  *v47 = v2;
                  v47[1] = v2;
                  v47[2] = v2;
                  v47 += 4;
                  --v46;
                }
                while ( v46 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( !v25 )
              v28 = 1;
            i = a1->m128i_u16[i];
          }
          v25 >>= 1;
          --v29;
          --v30;
        }
        while ( v30 );
        if ( v28 )
          return 0LL;
        v48 = 2LL;
        for ( j = &a1[64].m128i_i16[2]; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v48 > 0xF )
          {
            if ( a1[64].m128i_i16[1] == 512 )
              return 3221226050LL;
            v50 = a1 + 66;
            for ( k = 512LL; k; --k )
            {
              v50->m128i_i16[0] = v2;
              v50 = (__m128i *)((char *)v50 + 2);
            }
            return 0LL;
          }
        }
      }
      return 3221226050LL;
    }
  }
}
