/*
 * XREFs of ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001636C
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180055108 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x180056F10 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnBlurBehindUpdated(CTopLevelWindow *this)
{
  CRenderDataVisual *v2; // rcx
  int v3; // eax

  v2 = (CRenderDataVisual *)*((_QWORD *)this + 42);
  if ( v2 )
    CRenderDataVisual::ClearInstructions(v2);
  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x80000) == 0 )
  {
    *((_DWORD *)this + 22) = v3 | 0x80000;
    CVisual::PropagateDirtyChildren(this);
  }
}
