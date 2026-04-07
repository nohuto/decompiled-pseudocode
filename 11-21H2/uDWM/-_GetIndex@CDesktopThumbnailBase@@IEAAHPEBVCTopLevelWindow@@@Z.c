/*
 * XREFs of ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x18006942A
 * Callers:
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B2C94 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x1800B2CD0 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B2DC0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
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
