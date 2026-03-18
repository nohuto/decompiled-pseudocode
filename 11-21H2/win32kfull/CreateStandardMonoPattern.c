/*
 * XREFs of CreateStandardMonoPattern @ 0x1C013C9D8
 * Callers:
 *     GetCachedSMP @ 0x1C013D0AC (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1C013D27C (FindCachedSMP.c)
 * Callees:
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     ComputeBytesPerScanLine @ 0x1C013D228 (ComputeBytesPerScanLine.c)
 *     DrawCornerLine @ 0x1C013D414 (DrawCornerLine.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm1
  unsigned __int16 v3; // bx
  unsigned int v4; // r13d
  unsigned __int8 v5; // r14
  BOOL v6; // r11d
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // cl
  unsigned int v9; // r10d
  unsigned int v10; // esi
  BOOL v11; // r12d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // edi
  int v16; // esi
  unsigned int v17; // ebx
  unsigned __int16 v18; // r15
  unsigned __int16 v19; // ax
  _BYTE *v20; // rsi
  _BYTE *v21; // r13
  char *v22; // rdi
  __int64 v23; // r12
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // ax
  int v27; // ecx
  _BYTE *v28; // rdx
  int v29; // r8d
  char v30; // al
  char *v31; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v34; // al
  __int16 k; // ax
  int v36; // [rsp+20h] [rbp-48h]
  unsigned __int16 v37; // [rsp+30h] [rbp-38h]
  int v38; // [rsp+34h] [rbp-34h]
  int v39; // [rsp+44h] [rbp-24h]
  __m128i v40; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v42; // [rsp+B0h] [rbp+48h]
  unsigned int v44; // [rsp+C0h] [rbp+58h]
  __int16 v45; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  v45 = 0;
  v40 = *a2;
  v42 = v3;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v38 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v6 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v7 = 8;
  v40.m128i_i8[4] = v7;
  v8 = v40.m128i_u8[5];
  if ( !v40.m128i_i8[5] )
    v8 = 15;
  v40.m128i_i8[5] = v8;
  v9 = ((v8 >> 1) + 100 * v4) / v8;
  v39 = v7;
  v10 = (v4 * v7 + 5) / 0xA;
  if ( v5 <= 2u )
  {
    v11 = v6;
    v40.m128i_i16[4] = (v9 + 50) / 0x64;
    LOWORD(v15) = v40.m128i_i16[4];
    if ( v5 )
    {
      if ( v5 == 1 )
        v9 = 800;
    }
    else
    {
      LOWORD(v15) = 8 * v40.m128i_u8[2];
      v40.m128i_i16[4] = v15;
    }
LABEL_10:
    v16 = v10 - v38;
    if ( (_WORD)v4 != v3 )
      v9 = ((v4 >> 1) + v9 * v3) / v4;
    if ( !(_WORD)v15 )
    {
      LOWORD(v15) = 1;
      v40.m128i_i16[4] = 1;
    }
    v17 = (v9 + 50) / 0x64;
    v40.m128i_i16[5] = v17;
    if ( !(_WORD)v17 )
    {
      LOWORD(v17) = 1;
      v40.m128i_i16[5] = 1;
    }
    v18 = 1;
    v19 = v15 - 1;
    if ( (unsigned __int16)((v16 + 50) / 0x64u) <= (unsigned __int16)v15 )
      v19 = (v16 + 50) / 0x64u;
    if ( v19 )
      v18 = v19;
    v37 = ComputeBytesPerScanLine(1LL, v40.m128i_u8[2], (unsigned __int16)v15);
    v40.m128i_i16[3] = v37;
    v44 = (unsigned __int16)v17 * v37;
    v20 = Src;
    v21 = Src;
    if ( !Src )
      goto LABEL_33;
    memset(Src, 0, (unsigned __int16)v44);
    if ( v5 )
    {
      if ( v5 > 2u )
      {
        LOWORD(v36) = v18;
        DrawCornerLine(Src, v36, v11);
        if ( v45 == 2 )
        {
          v31 = &Src[v37 * ((unsigned __int16)v17 - 1)];
          for ( i = (unsigned __int16)v17 >> 1; i; v31 -= 2 * v37 )
          {
            --i;
            for ( j = v37; j; --j )
            {
              *v31 |= *v20;
              v34 = *v31++;
              *v20++ = v34;
            }
          }
        }
LABEL_32:
        if ( (v40.m128i_i8[0] & 2) != 0 )
        {
          for ( k = v44; k; --k )
          {
            *v21 = ~*v21;
            ++v21;
          }
        }
LABEL_33:
        *a2 = v40;
        a2[1].m128i_i64[0] = (__int64)Src;
        return v44;
      }
      v27 = ((unsigned __int16)v15 - v18) >> 1;
      v28 = &Src[(unsigned __int64)(unsigned __int16)v27 >> 3];
      v29 = 128 >> (v27 & 7);
      while ( 1 )
      {
        v30 = 0;
        if ( !v18 )
          break;
        do
        {
          --v18;
          v30 |= v29;
          LOBYTE(v29) = (unsigned __int8)v29 >> 1;
        }
        while ( (_BYTE)v29 && v18 );
        *v28 = v30;
        LOBYTE(v29) = 0x80;
        ++v28;
      }
      v22 = Src;
      v23 = (unsigned __int16)v17;
      do
      {
        memmove(v22, Src, v37);
        v22 += v37;
        --v23;
      }
      while ( v23 );
    }
    if ( v5 != 1 )
    {
      v24 = v17 - 1;
      v25 = 1;
      if ( (unsigned __int16)(((v39 * (unsigned int)v42 + 5) / 0xA - v38 + 50) / 0x64) < (unsigned __int16)v17 )
        v24 = ((v39 * (unsigned int)v42 + 5) / 0xA - v38 + 50) / 0x64;
      if ( v24 )
        v25 = v24;
      memset(&Src[v37 * (((unsigned __int16)v17 - v25) >> 1)], 255, v25 * v37);
    }
    goto LABEL_32;
  }
  if ( v5 <= 0x11u )
  {
    v11 = v6;
    v12 = (unsigned __int16)(v40.m128i_u8[3] - 3) / 3u;
    v45 = (unsigned __int16)(v40.m128i_u8[3] - 3) % 3u;
    if ( v40.m128i_u8[3] - 3 != 3 * ((unsigned __int16)(v40.m128i_u8[3] - 3) / 3u) )
      v11 = !v6;
    v13 = HIWORD(MonoPatRatio[v12]);
    v14 = MonoPatRatio[v12] >> 17;
    v15 = (v14 + 100 * v9) / v13;
    v40.m128i_i16[4] = v15;
    v9 = (v14 + v9 * (unsigned __int16)MonoPatRatio[v12]) / v13;
    v10 = (v14 + 10000 * v10) / v13;
    goto LABEL_10;
  }
  return 0LL;
}
