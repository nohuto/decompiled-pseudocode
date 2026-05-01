/*
 * XREFs of ?CorrectRectsForAutoHide@MiniSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1803AE2D0
 * Callers:
 *     ?GetAppRectAndClippingRegion@MiniSearchAppPositioner@@UEAA?AUMiniSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1803AE900 (-GetAppRectAndClippingRegion@MiniSearchAppPositioner@@UEAA-AUMiniSearchAppSizeAndBorderInfo@@AEB.c)
 *     ?GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1803AEC40 (-GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

void __fastcall MiniSearchAppPositioner::CorrectRectsForAutoHide(MiniSearchAppPositioner *this, __m128i *a2)
{
  __m128i v2; // xmm1
  __int32 v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v6; // r9d
  int v7; // r8d
  __int32 v8; // ecx
  int v9; // ecx
  __int32 v10; // ecx
  int v11; // ecx
  __int32 v12; // ecx
  int v13; // ecx
  __m128i v14; // [rsp+0h] [rbp-28h]
  __m128i v15; // [rsp+10h] [rbp-18h]

  v2 = a2[2];
  v3 = a2[3].m128i_i32[1];
  v4 = a2[2].m128i_i64[0];
  v5 = _mm_srli_si128(v2, 8).m128i_u64[0];
  v6 = v5 - v4;
  v7 = HIDWORD(v5) - HIDWORD(v4);
  v14 = v2;
  v15 = a2[1];
  if ( !v3 )
  {
    v12 = a2->m128i_i32[0];
    if ( _mm_cvtsi128_si32(v2) >= a2->m128i_i32[0] )
      goto LABEL_15;
    v14.m128i_i32[2] = v12 + v6;
    v15.m128i_i32[0] = v12 + v6;
    goto LABEL_13;
  }
  v8 = v3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = a2->m128i_i32[3];
        if ( _mm_srli_si128(v2, 8).m128i_i32[1] > v10 )
        {
          v14.m128i_i32[3] = a2->m128i_i32[3];
          v14.m128i_i32[1] = v10 - v7;
          v15.m128i_i32[3] = v10 - v7;
LABEL_14:
          v2 = v14;
          goto LABEL_15;
        }
      }
      goto LABEL_15;
    }
    v11 = a2->m128i_i32[2];
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v2, 8)) <= v11 )
      goto LABEL_15;
    v14.m128i_i32[2] = a2->m128i_i32[2];
    v12 = v11 - v6;
    v15.m128i_i32[2] = v12;
LABEL_13:
    v14.m128i_i32[0] = v12;
    goto LABEL_14;
  }
  v13 = a2->m128i_i32[1];
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v2, 4)) < v13 )
  {
    v14.m128i_i32[1] = a2->m128i_i32[1];
    v14.m128i_i32[3] = v13 + v7;
    v15.m128i_i32[1] = v13 + v7;
    goto LABEL_14;
  }
LABEL_15:
  a2[2] = v2;
  a2[1] = v15;
}
