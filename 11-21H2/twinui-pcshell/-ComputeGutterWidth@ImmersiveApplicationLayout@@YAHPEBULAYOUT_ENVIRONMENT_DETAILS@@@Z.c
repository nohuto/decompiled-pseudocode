/*
 * XREFs of ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0
 * Callers:
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E14D4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180511398 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180512960 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180513410 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x180525E40 (-ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805260BC (-ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?_UpdateAutoGutters@CDropFeedback@@AEAAXXZ @ 0x1805304BC (-_UpdateAutoGutters@CDropFeedback@@AEAAXXZ.c)
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x180539AE8 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18053BAF0 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x180614194 (-_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x1806145F8 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x1806159B8 (-_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180618238 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1806183AC (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterWidth(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  ImmersiveApplicationLayout *v4; // [rsp+20h] [rbp-18h]

  LODWORD(v4) = *((_DWORD *)this + 2) - *(_DWORD *)this;
  HIDWORD(v4) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
  return ImmersiveApplicationLayout::ComputeGutterWidth(v4, (struct tagSIZE)*((unsigned int *)this + 4), a3);
}
