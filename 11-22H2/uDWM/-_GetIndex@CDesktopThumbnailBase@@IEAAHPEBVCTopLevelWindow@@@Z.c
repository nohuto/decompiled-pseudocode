/*
 * XREFs of ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800063A4
 * Callers:
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x180005730 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800062D4 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B6AE8 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopThumbnailBase::_GetIndex(CDesktopThumbnailBase *this, const struct CTopLevelWindow *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d

  v2 = -1;
  v3 = *((_DWORD *)this + 68) - 1;
  if ( v3 >= 0 )
  {
    while ( *(const struct CTopLevelWindow **)(*((_QWORD *)this + 31) + 16LL * (unsigned int)v3) != a2 )
    {
      if ( --v3 < 0 )
        return v2;
    }
    return (unsigned int)v3;
  }
  return v2;
}
