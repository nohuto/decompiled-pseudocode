/*
 * XREFs of ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUMilPoint2F@@@Z @ 0x1800BD8A8
 * Callers:
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUMilPointAndSizeF@@AEBUMilPoint2F@@PEAU4@@Z @ 0x1800BCD0C (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 * Callees:
 *     ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUMilPoint2F@@@Z @ 0x1800BCE74 (-Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUMilPoint2F@@@Z.c)
 */

const struct CDWMDisplay *__fastcall CDisplayModeChangeAnimationHelper::GetDisplayFromFinalPosition(
        const struct CDWMDisplaySet *a1,
        const struct MilPoint2F *a2)
{
  __int64 v2; // r8
  __int64 v3; // r11
  __int64 v4; // r9
  FLOAT v5; // xmm1_4
  __m128i v6; // xmm0
  FLOAT v7; // xmm1_4
  int v8; // r8d
  __int64 v9; // r9
  unsigned int v10; // r10d
  struct D2D_RECT_F v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( !*((_DWORD *)a1 + 16) )
    return 0LL;
  v3 = *((_QWORD *)a1 + 5);
  while ( 1 )
  {
    v4 = *(_QWORD *)(v3 + 8 * v2);
    v5 = (float)*(int *)(v4 + 60);
    v12.left = (float)*(int *)(v4 + 56);
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 64));
    v12.top = v5;
    v7 = (float)*(int *)(v4 + 68);
    LODWORD(v12.right) = _mm_cvtepi32_ps(v6).m128_u32[0];
    v12.bottom = v7;
    if ( CDisplayModeChangeAnimationHelper::Contains(&v12, a2) )
      break;
    v2 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v2 >= v10 )
      return 0LL;
  }
  return (const struct CDWMDisplay *)v9;
}
