/*
 * XREFs of ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B6AE8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x1800063A4 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180016094 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 */

void __fastcall CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        CDesktopThumbnailBase *this,
        const struct CTopLevelWindow *a2)
{
  int Index; // eax
  __int64 v3; // rcx

  Index = CDesktopThumbnailBase::_GetIndex(this, a2);
  if ( Index >= 0 )
    CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(*(_QWORD *)(v3 + 248)
                                                                                   + 16LL * (unsigned int)Index
                                                                                   + 8));
}
