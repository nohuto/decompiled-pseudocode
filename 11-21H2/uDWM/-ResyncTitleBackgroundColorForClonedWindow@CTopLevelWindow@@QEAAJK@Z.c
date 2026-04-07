/*
 * XREFs of ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18004621C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B2C94 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800463E8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(CTopLevelWindow *this, unsigned int a2)
{
  unsigned int v3; // ebx
  CText *v4; // rcx
  int v5; // eax

  v3 = 0;
  v4 = (CText *)*((_QWORD *)this + 67);
  if ( v4 )
  {
    CText::SetBackgroundColor(v4, a2);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 67) + 64LL))(*((_QWORD *)this + 67));
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1403u);
  }
  return v3;
}
