/*
 * XREFs of ?UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z @ 0x180037924
 * Callers:
 *     ?BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI5@Z @ 0x180037864 (-BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_G.c)
 *     ?InvalidatePreviousSurfaces@CBitmapInfoFront@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x180038EDC (-InvalidatePreviousSurfaces@CBitmapInfoFront@DirectComposition@@AEAAXAEBUtagRECT@@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::UnionRectInternal(
        DirectComposition *this,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG left; // ebx
  bool v5; // r11
  LONG *p_bottom; // r10
  LONG *p_top; // r9
  bool v8; // al
  __int128 v9; // xmm0
  LONG top; // eax
  LONG right; // eax
  LONG bottom; // eax

  if ( this && a2 && a3 )
  {
    left = a2->left;
    v5 = a2->left >= a2->right || a2->top >= a2->bottom;
    p_bottom = &a3->bottom;
    p_top = &a3->top;
    v8 = a3->left >= a3->right || *p_top >= *p_bottom;
    if ( !v5 )
    {
      if ( !v8 )
      {
        if ( left >= a3->left )
          left = a3->left;
        *(_DWORD *)this = left;
        top = a2->top;
        if ( top >= *p_top )
          top = *p_top;
        *((_DWORD *)this + 1) = top;
        right = a2->right;
        if ( right <= a3->right )
          right = a3->right;
        *((_DWORD *)this + 2) = right;
        bottom = a2->bottom;
        if ( bottom <= *p_bottom )
          bottom = *p_bottom;
        *((_DWORD *)this + 3) = bottom;
        return 1;
      }
      v9 = (__int128)*a2;
LABEL_12:
      *(_OWORD *)this = v9;
      return 1;
    }
    if ( !v8 )
    {
      v9 = (__int128)*a3;
      goto LABEL_12;
    }
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  return 0;
}
