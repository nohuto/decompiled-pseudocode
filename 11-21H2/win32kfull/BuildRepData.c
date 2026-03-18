/*
 * XREFs of BuildRepData @ 0x1C00DA5D0
 * Callers:
 *     BuildExpandAAInfo @ 0x1C00DA2D0 (BuildExpandAAInfo.c)
 *     BuildShrinkAAInfo @ 0x1C0262C40 (BuildShrinkAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  int v3; // r13d
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  int v6; // r14d
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r11d
  int *v11; // r12
  int *v12; // r10
  int v13; // r15d
  int v14; // eax
  int v15; // r11d
  char v16; // r9
  _WORD *v17; // r9
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int i; // eax
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-68h]
  _WORD *v25; // [rsp+8h] [rbp-60h]
  int v26; // [rsp+10h] [rbp-58h]
  int v27; // [rsp+14h] [rbp-54h]
  __int128 v28; // [rsp+20h] [rbp-48h]
  __int128 v29; // [rsp+30h] [rbp-38h]
  __int128 v30; // [rsp+30h] [rbp-38h]
  __m128i v31; // [rsp+40h] [rbp-28h]
  __int128 v32; // [rsp+50h] [rbp-18h]
  int v34; // [rsp+B8h] [rbp+50h] BYREF
  int v35; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int8 v36; // [rsp+C8h] [rbp+60h]

  v35 = a3;
  v34 = a2;
  v3 = 0;
  v4 = *(__m128i *)a1;
  v5 = *(__m128i *)(a1 + 32);
  v6 = -1;
  v24 = 0LL;
  v29 = *(_OWORD *)(a1 + 16);
  v7 = *(_OWORD *)(a1 + 48);
  v8 = HIDWORD(*(_QWORD *)a1);
  v9 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v31 = v5;
  *(_QWORD *)&v28 = v4.m128i_i64[0];
  HIDWORD(v32) = HIDWORD(v7);
  v25 = (_WORD *)_mm_srli_si128(v5, 8).m128i_u64[0];
  v27 = v9;
  if ( v9 >= v4.m128i_i32[1] )
  {
    if ( v9 <= v4.m128i_i32[1] )
      return 0LL;
    v10 = v8;
    v11 = &v35;
    LODWORD(v8) = v9;
    v12 = &v34;
  }
  else
  {
    v10 = v9;
    v11 = &v34;
    v12 = &v35;
  }
  v26 = 2 * v8;
  v13 = 0;
  v14 = v10 + 2 * v8;
  v15 = 2 * v10;
  v31.m128i_i8[3] = 0;
  v16 = 0;
  if ( a3 >= SHIDWORD(v29) )
    return 0LL;
  v36 = 0;
  v31.m128i_i8[2] = 0;
  while ( 1 )
  {
    v14 -= v15;
    if ( v14 < 0 )
    {
      ++*v11;
      if ( v6 != -1 )
        *v25++ = v13;
      v14 += v26;
      v13 = 0;
      a3 = v35;
      v16 = 0;
      a2 = v34;
    }
    ++v16;
    if ( a3 < SDWORD2(v29) || a2 < (int)v29 || a2 >= SDWORD1(v29) || a3 >= SHIDWORD(v29) )
    {
      if ( v6 != -1 )
        goto LABEL_20;
    }
    else
    {
      ++v13;
      if ( v6 == -1 )
      {
        LODWORD(v24) = a3;
        v36 = v16 - 1;
        v6 = a2;
        v31.m128i_i8[2] = v16 - 1;
      }
      v3 = a2;
      HIDWORD(v24) = a3;
    }
    ++*v12;
    a3 = v35;
    if ( v35 >= SHIDWORD(v29) )
      break;
    a2 = v34;
  }
  if ( v6 == -1 )
    return 0LL;
LABEL_20:
  v17 = v25;
  if ( v13 && (*v25 = v13, v17 = v25 + 1, v18 = v14 - v15, v18 >= 0) )
  {
    LOBYTE(v19) = 0;
    do
    {
      LOBYTE(v19) = v19 + 1;
      v18 -= v15;
    }
    while ( v18 >= 0 );
    v31.m128i_i8[3] = v19;
  }
  else
  {
    LOBYTE(v19) = 0;
  }
  v20 = v6;
  if ( v27 < v4.m128i_i32[1] )
  {
    v19 = 2;
    v21 = 2;
    do
    {
LABEL_25:
      if ( v20 <= (int)v29 )
        break;
      --v20;
      --v21;
    }
    while ( v21 );
    goto LABEL_26;
  }
  v21 = v36;
  v19 = (unsigned __int8)v19;
  if ( v36 )
    goto LABEL_25;
LABEL_26:
  for ( i = v3; v19; --v19 )
  {
    if ( i >= DWORD1(v29) - 1 )
      break;
    ++i;
  }
  v31.m128i_i8[1] = i - v3;
  DWORD1(v30) = v3 + 1;
  DWORD2(v28) = v6;
  *((_QWORD *)&v30 + 1) = v24 + 0x100000000LL;
  HIDWORD(v28) = v3 - v6 + 1;
  result = 1LL;
  *(_OWORD *)a1 = v28;
  LODWORD(v30) = v6;
  *(_OWORD *)(a1 + 16) = v30;
  *(_QWORD *)&v32 = v17;
  DWORD2(v32) = 1;
  v31.m128i_i8[0] = v6 - v20;
  *(__m128i *)(a1 + 32) = v31;
  *(_OWORD *)(a1 + 48) = v32;
  return result;
}
