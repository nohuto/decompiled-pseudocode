/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001F7F8
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001C5CC (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001F920 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  int v6; // eax
  CTransitionVisualController *v7; // r10

  CWindowData::CheckOwnedWindowEligibility((CWindowData *)this);
  v2 = CWindowData::NotifyRepresentationChanged((CWindowData *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x20CDu);
  }
  else
  {
    v4 = this[75];
    if ( v4 && (v6 = CWindowData::NotifyRepresentationChanged(v4), v3 = v6, v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x20D0u);
    }
    else if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23)
           && *((_DWORD *)this + 33) != 1
           && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 22)) > 0 )
    {
      CTransitionVisualController::_SetupHighZOrderStaticWindows(v7);
    }
  }
  return v3;
}
