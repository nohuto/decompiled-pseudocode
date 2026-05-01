/*
 * XREFs of ?s_GetMinimumScrollViewerSize@CMultitaskingViewFrame@@CA?AUCSize@Geometry@@W4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEBU23@@Z @ 0x1804B2FA0
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804B0680 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804B12C4 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 */

_DWORD *__fastcall CMultitaskingViewFrame::s_GetMinimumScrollViewerSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // r11
  int v7; // ecx
  char v8; // r10

  v4 = ThumbnailHeight::GetForScreenHeight((ThumbnailHeight *)(a3 + 80), *(_DWORD *)(a4 + 4));
  v7 = v4
     + *(_DWORD *)(v5 + 124)
     + *(_DWORD *)(v5 + 160)
     + *(_DWORD *)(v5 + 164)
     + *(_DWORD *)(v5 + 176)
     + *(_DWORD *)(v5 + 180);
  v6[1] = v7;
  *v6 = (int)((double)v4 * *(double *)(v5 + 112));
  if ( (v8 & 8) != 0 )
    v6[1] = v7 + *(_DWORD *)(v5 + 380) + *(_DWORD *)(v5 + 384) + *(_DWORD *)(v5 + 396);
  return v6;
}
