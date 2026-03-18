/*
 * XREFs of ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     ?DisableTemporayMetricsOverrides@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209A78 (-DisableTemporayMetricsOverrides@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF4C (-SetDragInThresholdAlways@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020B00C (-SetDragOutToDragInThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 */

__int64 __fastcall HandleMovingAwayFromDockTargetMove(
        struct MOVESIZEDATA *a1,
        struct tagMONITOR *a2,
        unsigned int a3,
        struct tagPOINT a4,
        __m128i *a5,
        unsigned int *a6)
{
  int v6; // r14d
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  __m128i v11; // xmm1
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  __int32 v15; // ecx
  int v16; // r10d
  unsigned int v17; // r14d
  int v18; // r10d
  int v19; // r8d
  int v20; // ebp
  int v21; // r11d
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // r14d
  const struct MOVESIZEDATA *v25; // rcx
  int v26; // ecx
  __m128i v28; // [rsp+20h] [rbp-28h]

  v6 = *((_DWORD *)a1 + 50);
  if ( (v6 & 0x80u) != 0 )
  {
    v9 = *((_DWORD *)a1 + 60);
    v10 = *((_DWORD *)a1 + 50) & 0x7000;
    v11 = *a5;
    v28 = *a5;
    if ( !v9 )
    {
      if ( v10 == 4096 )
      {
        v12 = *((_DWORD *)a1 + 6);
        v13 = a4.x - v12;
        if ( a4.x - v12 >= (v28.m128i_i32[2] - v28.m128i_i32[0]) / 2 )
        {
          if ( v13 <= *((_DWORD *)a1 + 8) - v12 - (v28.m128i_i32[2] - v28.m128i_i32[0]) / 2 )
            v13 = (v28.m128i_i32[2] - v28.m128i_i32[0]) / 2;
          else
            v13 = v28.m128i_i32[2] - v28.m128i_i32[0] - *((_DWORD *)a1 + 8) + a4.x;
        }
        v14 = *((_DWORD *)a1 + 63);
        goto LABEL_22;
      }
      v15 = v28.m128i_i32[2] - v28.m128i_i32[0];
      v16 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v13 = *((_DWORD *)a1 + 64);
      if ( v16 <= v28.m128i_i32[2] - v28.m128i_i32[0] )
      {
        if ( v13 < v16 / 2 )
          goto LABEL_21;
        if ( v13 <= v16 / 2 )
        {
          v13 = v16 / 2;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v13 < v15 / 2 )
        {
LABEL_21:
          v14 = *((_DWORD *)a1 + 65);
LABEL_22:
          a4.x = a4.x - v13 - v28.m128i_i32[0];
          *((_DWORD *)a1 + 62) = v13;
          *((_DWORD *)a1 + 63) = v14;
          v28.m128i_i32[3] += a4.y - v14 - v28.m128i_i32[1];
          v28.m128i_i32[1] = a4.y - v14;
          v28.m128i_i32[0] += a4.x;
          v17 = v6 & 0xFFFFFF7F;
          v28.m128i_i32[2] += a4.x;
          *((_DWORD *)a1 + 50) = v17;
          if ( (v17 & 0x20) != 0 )
            *a6 |= 1u;
          SetDragInThresholdAlways(a1);
          goto LABEL_42;
        }
        if ( v13 <= v16 - v15 / 2 )
        {
          v13 = v15 / 2;
          goto LABEL_21;
        }
      }
      v13 += v15 - v16;
      goto LABEL_21;
    }
    v18 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
    v19 = *((_DWORD *)a1 + 64);
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    v21 = _mm_cvtsi128_si32(v11);
    if ( v10 == 4096 )
    {
      v22 = v20 - v21;
    }
    else
    {
      v22 = v20 - v21;
      if ( v18 <= v20 - v21 )
      {
        if ( v19 < v18 / 2 )
          goto LABEL_35;
        if ( v19 <= v18 / 2 )
        {
          v19 = v18 / 2;
LABEL_35:
          v23 = *((_DWORD *)a1 + 65);
          if ( v9 <= 0 )
            goto LABEL_43;
          if ( v9 <= 2 )
          {
            a4.x = a4.x - v21 - v19;
            v28.m128i_i32[0] = a4.x + v21;
            v28.m128i_i32[3] += a4.y - v28.m128i_i32[1] - v23;
            v28.m128i_i32[1] = a4.y - v23;
            v24 = v6 & 0xFFFFFF7F;
            v28.m128i_i32[2] = a4.x + v20;
            *((_DWORD *)a1 + 50) = v24;
            if ( (v24 & 0x20) != 0 )
              *a6 |= 1u;
            SetDragOutToDragInThreshold(a1);
            goto LABEL_42;
          }
          if ( v9 != 3 )
          {
LABEL_43:
            *(__m128i *)((char *)a1 + 40) = v11;
            goto LABEL_44;
          }
          a4.x = a4.x - v21 - v19;
          v28.m128i_i32[0] = a4.x + v21;
          v28.m128i_i32[3] += a4.y - v28.m128i_i32[1] - v23;
          v28.m128i_i32[1] = a4.y - v23;
          v28.m128i_i32[2] = a4.x + v20;
LABEL_42:
          v11 = v28;
          goto LABEL_43;
        }
LABEL_33:
        v19 += v22 - v18;
        goto LABEL_35;
      }
    }
    if ( v19 < v22 / 2 )
      goto LABEL_35;
    if ( v19 <= v18 - v22 / 2 )
    {
      v19 = v22 / 2;
      goto LABEL_35;
    }
    goto LABEL_33;
  }
  MoveRect(a1, a3, 0LL);
  v8 = *((_DWORD *)a1 + 60);
  if ( v8 )
  {
    if ( (unsigned int)(v8 - 1) <= 1 )
      SetDragOutToDragInThreshold(a1);
  }
  else
  {
    SetDragInThresholdAlways(a1);
  }
LABEL_44:
  *((_DWORD *)a1 + 50) &= 0xFFFFFCFF;
  *((_DWORD *)a1 + 60) = 4;
  *(_OWORD *)((char *)a1 + 296) = 0LL;
  *(_OWORD *)((char *)a1 + 312) = 0LL;
  *((_DWORD *)a1 + 83) &= 0xFFFFFFFC;
  *((_DWORD *)a1 + 82) = 0;
  DisableTemporayMetricsOverrides(a1);
  MakeArrangedStateObservable(v25);
  *((_DWORD *)a1 + 61) = 0;
  v26 = *((_DWORD *)a1 + 50);
  if ( (v26 & 0x2000000) != 0 )
  {
    *a6 |= 2u;
    *((_DWORD *)a1 + 50) = v26 & 0xFDFFFFFF;
  }
  return 1LL;
}
