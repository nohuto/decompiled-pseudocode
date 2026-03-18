/*
 * XREFs of ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800F5958
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1800F581C (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualSurface *__fastcall CVisual::GetBlurredWallpaperSurface(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x8000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    while ( *v4 != 17 )
    {
      ++v6;
      ++v4;
      if ( v6 >= (unsigned int)v3 )
        goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  if ( v6 < (unsigned int)v3 )
LABEL_7:
    v5 = (__int64)v1 + 8LL * v6 - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(struct CVisualSurface **)v5;
}
