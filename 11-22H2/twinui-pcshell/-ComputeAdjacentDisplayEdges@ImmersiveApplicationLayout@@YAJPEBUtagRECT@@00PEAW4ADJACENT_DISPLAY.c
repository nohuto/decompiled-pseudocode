/*
 * XREFs of ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x180022B70
 * Callers:
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180022ADC (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1805C3FF0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x180022BB8 (-ComputeRectAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@00@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges(
        ImmersiveApplicationLayout *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v4; // eax
  _DWORD *v5; // r11
  int v6; // eax

  a4->left = 0;
  v4 = ImmersiveApplicationLayout::ComputeRectAlignment(this, a2, a3) - 1;
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        *v5 = 2;
    }
    else
    {
      *v5 = 1;
    }
  }
  else
  {
    *v5 = 3;
  }
  return 0LL;
}
