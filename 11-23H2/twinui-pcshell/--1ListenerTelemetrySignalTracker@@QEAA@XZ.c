/*
 * XREFs of ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802D6120 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$6 @ 0x1802D62D6 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationView_ea_1802D62D6.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$1 @ 0x1802D6C2D (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_1802D6C2D.c)
 *     ?ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802D703E (-ReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$0 @ 0x1802D71DE (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--ReportTitleChange_-.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1804A4B60 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData_::_1_::dtor$1 @ 0x1804A4C75 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateSnapSign_ea_1804A4C75.c)
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1804A4EB0 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged_::_1_::dtor$4 @ 0x1804A5041 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--WindowSnapStateCh_ea_1804A5041.c)
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1804A67C0 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged_::_1_::dtor$0 @ 0x1804A69B2 (_Windows--Internal--Shell--TaskFlow--DataEngine--UserPresenceListener--OnIdleStateChanged_--_1_-.c)
 * Callees:
 *     <none>
 */

void __fastcall ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker(ListenerTelemetrySignalTracker *this)
{
  if ( !*(_BYTE *)this )
  {
    if ( *((_BYTE *)this + 1) )
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    else
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_unknownFailureCounter);
  }
}
