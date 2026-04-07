/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180035C44
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180006EA8 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180013A80 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035B80 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180035D18 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x180065124 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1801073E8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  unsigned int v2; // ebx
  CTopLevelWindow *v3; // rcx
  int v4; // eax
  CWindowIconic *v5; // rcx
  int v6; // eax
  int v7; // eax

  v2 = 0;
  v3 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v3 && (v4 = CTopLevelWindow::OnWindowStyleUpdated(v3), v2 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x30Au, 0LL);
  }
  else
  {
    v5 = (CWindowIconic *)*((_QWORD *)this + 61);
    if ( v5 && (v6 = CWindowIconic::OnWindowStyleUpdated(v5, 1), v2 = v6, v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x30Fu, 0LL);
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 58)
                                                            + 160LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
             this);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x314u, 0LL);
    }
  }
  return v2;
}
