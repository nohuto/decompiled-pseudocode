/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800368C8
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180035E5C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180037354 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18003A1C0 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x180065124 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  int v5; // eax
  CTransitionVisualController *v6; // r10
  int v7; // eax

  CWindowData::CheckOwnedWindowEligibility((CWindowData *)this);
  v2 = CWindowData::NotifyRepresentationChanged((CWindowData *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = this[75];
    if ( v4 && (v5 = CWindowData::NotifyRepresentationChanged(v4), v3 = v5, v5 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2F2u, 0LL);
    }
    else
    {
      if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24)
        && *((_DWORD *)this + 33) != 1
        && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 23)) > 0 )
      {
        CTransitionVisualController::_SetupHighZOrderStaticWindows(v6);
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, CWindowData **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 58)
                                                               + 152LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
               this);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2FDu, 0LL);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2EFu, 0LL);
  }
  return v3;
}
