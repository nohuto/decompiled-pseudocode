/*
 * XREFs of sub_1406811B0 @ 0x1406811B0
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140681500 @ 0x140681500 (sub_140681500.c)
 */

__int64 __fastcall sub_1406811B0(__m128i *a1, __int16 *a2, __int64 a3)
{
  char v3; // r13
  __m128i v4; // xmm6
  __int16 v5; // bx
  __int16 v6; // bp
  _WORD *v7; // rdi
  __int16 v8; // si
  __int64 v9; // rdi
  __int16 v10; // bp
  __int16 v11; // ax
  int v12; // r10d
  unsigned __int16 *v13; // r11
  __int64 v14; // rbx
  unsigned __int16 v15; // dx
  __int64 result; // rax
  __int16 v17; // r14
  __int64 v18; // r15
  int v19; // r10d
  unsigned __int16 *v20; // r11
  __int64 v21; // r14
  unsigned __int16 v22; // dx
  _QWORD *v23; // rax
  unsigned __int16 v24; // dx
  _QWORD *v25; // rax
  unsigned __int16 v26; // dx
  __m128i v27; // [rsp+20h] [rbp-68h]
  __m128i v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v3 = 0;
  v5 = _mm_cvtsi128_si32(*a1);
  v27 = *a1;
  v4 = *a1;
  v28 = *a1;
  v27.m128i_i16[0] = v5;
  if ( !v5 )
  {
    result = 0LL;
    *a2 = 0;
    return result;
  }
  v6 = 0;
  v7 = (_WORD *)v27.m128i_i64[1];
  v8 = v27.m128i_i16[1];
  do
  {
    if ( v6 >= 32 )
      break;
    if ( *v7 == 92 )
    {
      ++v6;
      v17 = v28.m128i_i16[0] - v5;
      v28.m128i_i16[0] = v17;
      v28.m128i_i16[1] = v17;
      if ( v6 > 8 && !v3 )
      {
        result = sub_140681500(a3);
        if ( (int)result < 0 )
          return result;
        a3 = v30;
        v3 = 1;
      }
      v18 = (unsigned int)(v6 - 1);
      if ( (unsigned int)v18 >= 8 )
        *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v6 - 9) + 6LL)) = v28;
      else
        *(__m128i *)(a3 + 16 * ((unsigned int)v18 + 2LL)) = v28;
      v19 = 0;
      if ( v17 )
      {
        v20 = (unsigned __int16 *)v28.m128i_i64[1];
        v21 = (unsigned __int16)(((unsigned __int16)(v17 - 1) >> 1) + 1);
        do
        {
          v22 = *v20;
          if ( *v20 >= 0x61u )
          {
            if ( v22 > 0x7Au )
            {
              v23 = sub_140347DB0();
              v22 = sub_1403477B0(v23[154], v24);
            }
            else
            {
              v22 -= 32;
            }
          }
          ++v20;
          v19 = v22 + 37 * v19;
          --v21;
        }
        while ( v21 );
        a3 = v30;
      }
      if ( (unsigned int)v18 >= 8 )
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v6 - 9)) = v19;
      else
        *(_DWORD *)(a3 + 4 * v18) = v19;
      do
      {
        if ( *v7 != 92 )
          break;
        v5 -= 2;
        ++v7;
        v8 -= 2;
        v27.m128i_i16[0] = v5;
      }
      while ( v5 );
      v27.m128i_i64[1] = (__int64)v7;
      v27.m128i_i16[1] = v8;
      v4 = v27;
      v28 = v27;
    }
    else
    {
      ++v7;
      v5 -= 2;
      v8 -= 2;
      v27.m128i_i16[0] = v5;
    }
  }
  while ( v5 );
  v9 = (unsigned int)v6;
  if ( v5 )
    return 3221225485LL;
  v10 = v6 + 1;
  if ( v10 > 8 && !v3 )
  {
    result = sub_140681500(a3);
    if ( (int)result < 0 )
      return result;
    a3 = v30;
  }
  if ( (unsigned int)v9 >= 8 )
    *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v9 - 8) + 6LL)) = v4;
  else
    *(__m128i *)(a3 + 16 * ((unsigned int)v9 + 2LL)) = v4;
  v11 = _mm_cvtsi128_si32(v4);
  v12 = 0;
  if ( v11 )
  {
    v13 = (unsigned __int16 *)v4.m128i_i64[1];
    v14 = (unsigned __int16)(((unsigned __int16)(v11 - 1) >> 1) + 1);
    do
    {
      v15 = *v13;
      if ( *v13 >= 0x61u )
      {
        if ( v15 > 0x7Au )
        {
          v25 = sub_140347DB0();
          v15 = sub_1403477B0(v25[154], v26);
        }
        else
        {
          v15 -= 32;
        }
      }
      ++v13;
      v12 = v15 + 37 * v12;
      --v14;
    }
    while ( v14 );
    a3 = v30;
  }
  if ( (unsigned int)v9 >= 8 )
    *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v9 - 8)) = v12;
  else
    *(_DWORD *)(a3 + 4 * v9) = v12;
  *a2 = v10;
  return 0LL;
}
