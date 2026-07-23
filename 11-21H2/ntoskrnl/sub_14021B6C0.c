/*
 * XREFs of sub_14021B6C0 @ 0x14021B6C0
 * Callers:
 *     sub_14021B140 @ 0x14021B140 (sub_14021B140.c)
 *     sub_1405F1474 @ 0x1405F1474 (sub_1405F1474.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14021B6C0(__m128i *a1, __int64 a2)
{
  __int16 v2; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int16 *v14; // rbx
  __int16 v15; // di
  bool v16; // zf
  __int64 v17; // rcx
  __int16 v18; // ax
  unsigned __int64 v19; // r8
  bool v20; // zf
  __int16 *v21; // rdx
  int v22; // ebx
  unsigned __int16 *v23; // rsi
  __int64 v24; // rdx
  __int64 i; // r11
  int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v29; // rcx
  __int16 *v30; // rax
  __int64 v31; // rcx
  __int16 *v32; // rax
  __int64 v33; // rdx
  __int16 *v34; // rdx
  __int64 v35; // rcx
  __int16 *v36; // rax
  __int64 v37; // rcx
  __int16 *v38; // rax
  __int64 v39; // rcx
  __int16 *v40; // rax
  __int64 v41; // rcx
  __int16 *v42; // rax
  __int64 v43; // rax
  __int16 *j; // rdx
  __m128i *v45; // rdi
  __int64 k; // rcx

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x2000200u), 0);
  a1[64] = v7;
  a1[65] = v7;
  do
  {
    v8 = *(_BYTE *)(v5 + a2);
    v9 = v8 & 0xF;
    if ( (v8 & 0xF) != 0 )
    {
      a1->m128i_i16[2 * v5] = a1[64].m128i_i16[v9];
      a1[64].m128i_i16[v9] = 2 * v6;
      v8 = *(_BYTE *)(v5 + a2);
    }
    v10 = (unsigned __int64)v8 >> 4;
    if ( v10 )
    {
      a1->m128i_i16[2 * v5 + 1] = a1[64].m128i_i16[v10];
      a1[64].m128i_i16[v10] = 2 * v6 + 1;
    }
    v5 = v6 + 1;
    v6 = v5;
  }
  while ( v5 < 0x100 );
  v11 = -1024;
  v12 = 1024LL;
  v13 = 15LL;
  v14 = &a1[65].m128i_u16[7];
  v15 = -1023;
  while ( 1 )
  {
    v16 = v15 == v11;
    if ( v15 < v11 )
    {
      v34 = &a1[194].m128i_i16[v12];
      v12 -= (unsigned __int16)(((unsigned __int16)(v11 - v15 - 1) >> 1) + 1);
      do
      {
        *v34-- = v15;
        v15 += 2;
        v16 = v15 == v11;
      }
      while ( v15 < v11 );
    }
    if ( v16 )
      return 3221226050LL;
    v15 = v11 + 1;
    v17 = *v14;
    if ( v17 != 512 )
    {
      v33 = (__int64)a1[194].m128i_i64 + 2 * v12;
      do
      {
        v33 -= 2LL;
        --v12;
        *(_WORD *)(v33 + 2) = v13 + 16 * v17;
        v17 = a1->m128i_u16[v17];
      }
      while ( v17 != 512 );
    }
    --v13;
    v18 = -(__int16)v12;
    --v14;
    v11 = -(__int16)v12;
    if ( v13 <= 0xA )
    {
      v19 = 1023LL;
      v20 = v15 == v18;
      if ( v15 < v18 )
      {
        v21 = &a1[193].m128i_i16[7];
        v19 = 1023LL - (unsigned __int16)(((unsigned __int16)(v18 - v15 - 1) >> 1) + 1);
        do
        {
          *v21-- = v15;
          v15 += 2;
          v20 = v15 == v11;
        }
        while ( v15 < v11 );
      }
      if ( !v20 )
      {
        v22 = 0;
        v23 = &a1[65].m128i_u16[2];
        v24 = 10LL;
        do
        {
          for ( i = *v23; i != 512; --v19 )
          {
            v2 = v24 + 16 * i;
            if ( v22 )
              return 3221226050LL;
            v26 = 10 - v24;
            if ( (v19 + 1) << (10 - (unsigned __int8)v24) > 0x400 )
              return 3221226050LL;
            v27 = v19 << v26;
            switch ( v26 )
            {
              case 0:
                goto LABEL_22;
              case 1:
                goto LABEL_21;
              case 2:
                goto LABEL_30;
              case 3:
                a1[66].m128i_i16[v27 + 7] = v2;
                a1[66].m128i_i16[v27 + 6] = v2;
                a1[66].m128i_i16[v27 + 5] = v2;
                a1[66].m128i_i16[v27 + 4] = v2;
LABEL_30:
                a1[66].m128i_i16[v27 + 3] = v2;
                a1[66].m128i_i16[v27 + 2] = v2;
LABEL_21:
                a1[66].m128i_i16[v27 + 1] = v2;
LABEL_22:
                a1[66].m128i_i16[v27] = v2;
                break;
              case 4:
                v29 = 4LL;
                v30 = &a1[66].m128i_i16[v27 + 1];
                do
                {
                  *(v30 - 1) = v2;
                  *v30 = v2;
                  v30[1] = v2;
                  v30[2] = v2;
                  v30 += 4;
                  --v29;
                }
                while ( v29 );
                break;
              case 5:
                v31 = 8LL;
                v32 = &a1[66].m128i_i16[v27 + 1];
                do
                {
                  *(v32 - 1) = v2;
                  *v32 = v2;
                  v32[1] = v2;
                  v32[2] = v2;
                  v32 += 4;
                  --v31;
                }
                while ( v31 );
                break;
              case 6:
                v35 = 16LL;
                v36 = &a1[66].m128i_i16[v27 + 1];
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
              case 7:
                v37 = 32LL;
                v38 = &a1[66].m128i_i16[v27 + 1];
                do
                {
                  *(v38 - 1) = v2;
                  *v38 = v2;
                  v38[1] = v2;
                  v38[2] = v2;
                  v38 += 4;
                  --v37;
                }
                while ( v37 );
                break;
              case 8:
                v39 = 64LL;
                v40 = &a1[66].m128i_i16[v27 + 1];
                do
                {
                  *(v40 - 1) = v2;
                  *v40 = v2;
                  v40[1] = v2;
                  v40[2] = v2;
                  v40 += 4;
                  --v39;
                }
                while ( v39 );
                break;
              case 9:
                v41 = 128LL;
                v42 = &a1[66].m128i_i16[v27 + 1];
                do
                {
                  *(v42 - 1) = v2;
                  *v42 = v2;
                  v42[1] = v2;
                  v42[2] = v2;
                  v42 += 4;
                  --v41;
                }
                while ( v41 );
                break;
              default:
                __fastfail(0x25u);
            }
            if ( !v19 )
              v22 = 1;
            i = a1->m128i_u16[i];
          }
          v19 >>= 1;
          --v23;
          --v24;
        }
        while ( v24 );
        if ( v22 )
          return 0LL;
        v43 = 2LL;
        for ( j = &a1[64].m128i_i16[2]; *j == 512; ++j )
        {
          if ( (unsigned __int64)++v43 > 0xF )
          {
            if ( a1[64].m128i_i16[1] == 512 )
              return 3221226050LL;
            v45 = a1 + 66;
            for ( k = 512LL; k; --k )
            {
              v45->m128i_i16[0] = v2;
              v45 = (__m128i *)((char *)v45 + 2);
            }
            return 0LL;
          }
        }
      }
      return 3221226050LL;
    }
  }
}
