/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800B2EC0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036290 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B3188 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(CDesktopThumbnailCVIVisual *this, int a2)
{
  __int64 v4; // rax
  CVisual *v5; // rcx

  if ( *((_BYTE *)this + 345) )
  {
    v4 = *((_QWORD *)this + 40);
    if ( v4 )
    {
      v5 = *(CVisual **)(v4 + 440);
      if ( v5 )
        CVisual::SetDirtyFlags(v5, 0x8000000);
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}
