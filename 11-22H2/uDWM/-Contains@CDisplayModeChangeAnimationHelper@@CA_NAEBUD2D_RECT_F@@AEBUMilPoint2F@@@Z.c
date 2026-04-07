/*
 * XREFs of ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUMilPoint2F@@@Z @ 0x1800BCE74
 * Callers:
 *     ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUMilPointAndSizeF@@AEBUMilPoint2F@@PEAU4@@Z @ 0x1800BCD0C (-AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@.c)
 *     ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUMilPoint2F@@@Z @ 0x1800BD8A8 (-GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDispl.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplayModeChangeAnimationHelper::Contains(const struct D2D_RECT_F *a1, const struct MilPoint2F *a2)
{
  float v2; // xmm1_4
  bool result; // al

  result = 0;
  if ( *(float *)a2 >= a1->left && a1->right >= *(float *)a2 )
  {
    v2 = *((float *)a2 + 1);
    if ( v2 >= a1->top && a1->bottom >= v2 )
      return 1;
  }
  return result;
}
