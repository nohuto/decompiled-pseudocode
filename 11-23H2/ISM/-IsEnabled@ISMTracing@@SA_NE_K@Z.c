/*
 * XREFs of ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18003D5C8 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x180040E20 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x180040E94 (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z.c)
 *     ??$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x180041018 (--$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 *     ??$MPC3DStateHelper_FireEventsOnInputThread@AEA_NAEA_N@ISMTracing@@SAXAEA_N0@Z @ 0x1800A6B38 (--$MPC3DStateHelper_FireEventsOnInputThread@AEA_NAEA_N@ISMTracing@@SAXAEA_N0@Z.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x1800A7330 (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800A96F8 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 *     ??$MPCManager_InitializationFailed@AEAJ@ISMTracing@@SAXAEAJ@Z @ 0x1800ADB4C (--$MPCManager_InitializationFailed@AEAJ@ISMTracing@@SAXAEAJ@Z.c)
 *     ??$MPCManager_OnMouseSnappedToGaze@$$V@ISMTracing@@SAXXZ @ 0x1800ADBFC (--$MPCManager_OnMouseSnappedToGaze@$$V@ISMTracing@@SAXXZ.c)
 *     ??$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z @ 0x1800ADC9C (--$MPCManager_SendHomeGesture@AEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEAK0AEA_KAEAI2@Z.c)
 *     ??$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AEA_KAEAI3@Z @ 0x1800ADD90 (--$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AE.c)
 *     ??$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z @ 0x1800ADE94 (--$MPCManager_SetConvertGraspToSystemGesture@AEA_NAEAI@ISMTracing@@SAXAEA_NAEAI@Z.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x1800AF7A4 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800B2C28 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 *     ??$MPCHolographicInputManager_DisplayContextChanged@_N@ISMTracing@@SAX$$QEA_N@Z @ 0x1800B2D10 (--$MPCHolographicInputManager_DisplayContextChanged@_N@ISMTracing@@SAX$$QEA_N@Z.c)
 *     ??$MPCHolographicInputManager_FocusedAppDisabled3DGamepad@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800B2DC0 (--$MPCHolographicInputManager_FocusedAppDisabled3DGamepad@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 *     ??$MPCHolographicInputManager_FocusedAppDisabled3DMouse@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800B2E70 (--$MPCHolographicInputManager_FocusedAppDisabled3DMouse@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 *     ??$MPCHolographicInputManager_ForcedPrimary@AEAW4InputType@@@ISMTracing@@SAXAEAW4InputType@@@Z @ 0x1800B2F20 (--$MPCHolographicInputManager_ForcedPrimary@AEAW4InputType@@@ISMTracing@@SAXAEAW4InputType@@@Z.c)
 *     ??$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z @ 0x1800B2FD0 (--$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z.c)
 *     ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x1800B3090 (--$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJA.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3174 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_InHeadSpace@AEAPEAULegacyInputInfo@@@.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3224 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputI.c)
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B32D4 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PreStabilization@AEAPEAULegacyInputIn.c)
 *     ??$MPCHolographicInputManager_Process3DInput_HitTestResult@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3384 (--$MPCHolographicInputManager_Process3DInput_HitTestResult@AEAPEAULegacyInputInfo@@@ISMTracing@@.c)
 *     ??$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA_K0AEAIAEAKAEA_N@Z @ 0x1800B3434 (--$MPCHolographicInputManager_RequestForegroundChange@AEA_KAEA_KAEAIAEAKAEA_N@ISMTracing@@SAXAEA.c)
 *     ??$MPCHolographicInputManager_SendPoints@IW4InputType@@@ISMTracing@@SAX$$QEAI$$QEAW4InputType@@@Z @ 0x1800B3528 (--$MPCHolographicInputManager_SendPoints@IW4InputType@@@ISMTracing@@SAX$$QEAI$$QEAW4InputType@@@.c)
 *     ??$MPCHolographicInputManager_UpdateDoubleClickValues@AEA_NAEAHAEAH@ISMTracing@@SAXAEA_NAEAH1@Z @ 0x1800B35E8 (--$MPCHolographicInputManager_UpdateDoubleClickValues@AEA_NAEAHAEAH@ISMTracing@@SAXAEA_NAEAH1@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800B5868 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800B59C0 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z @ 0x1800B5D2C (-MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800B5E54 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800B6758 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x1800B68FC (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ??$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800B9A44 (--$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800B9B28 (--$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800B9C0C (--$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800B9D00 (--$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x1800B9DF4 (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 *     ??$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800B9F04 (--$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800B9FE8 (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BBC34 (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BBD54 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800BBE74 (-MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800BBFA8 (-MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x1800BC0DC (-MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BC230 (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BC350 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ??$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z @ 0x1800BCA2C (--$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z.c)
 *     ??$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z @ 0x1800BCB00 (--$MPCCursorManager_Update2DCursor@AEA_N@ISMTracing@@SAXAEA_N@Z.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800BCF6C (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BD084 (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ??$MPCHandProcessor_PointDataChanged@AEAIAEAI@ISMTracing@@SAXAEAI0@Z @ 0x1800BDCC8 (--$MPCHandProcessor_PointDataChanged@AEAIAEAI@ISMTracing@@SAXAEAI0@Z.c)
 *     ??$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPEAULegacyInputInfo@@AEB_N@Z @ 0x1800BDD88 (--$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPE.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z @ 0x1800C0D90 (--$GestureRecognizer_GestureDetected@AEAY0BA@$$CBG@ISMTracing@@SAXAEAY0BA@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z @ 0x1800C0E3C (--$GestureRecognizer_GestureDetected@AEAY0M@$$CBG@ISMTracing@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z @ 0x1800C0EEC (--$GestureRecognizer_GestureDetected@AEAY0N@$$CBG@ISMTracing@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C0F9C (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z @ 0x1800C104C (--$GestureRecognizer_GestureDetected@AEAY0P@$$CBG@ISMTracing@@SAXAEAY0P@$$CBG@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x1800C2748 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ??$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z @ 0x1800C4218 (--$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z.c)
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z @ 0x1800C42D8 (--$LogMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z.c)
 *     ??$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z @ 0x1800C4398 (--$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z.c)
 *     ??$MPCEyeGazeProcessor_DeviceDetached@AEAK@ISMTracing@@SAXAEAK@Z @ 0x1800C4448 (--$MPCEyeGazeProcessor_DeviceDetached@AEAK@ISMTracing@@SAXAEAK@Z.c)
 *     ??$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x1800C44F8 (--$MPCInputProviderBase_Destroy@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 *     ??$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEAJ@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@AEAIAEAJ@Z @ 0x1800C45A8 (--$MPCInputProviderBase_SendSourceDetectedFailed@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@AEAIAEA.c)
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C468C (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800C7778 (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x1800CA168 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x1800CA30C (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 *     ??$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z @ 0x1800CE188 (--$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z @ 0x1800D2F18 (--$LogSpeechRuntimeListenerFunct@AEAY08$$CBG@ISMTracing@@SAXAEAY08$$CBG@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z @ 0x1800D2FC4 (--$LogSpeechRuntimeListenerFunct@AEAY0BJ@$$CBG@ISMTracing@@SAXAEAY0BJ@$$CBG@Z.c)
 *     ??$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z @ 0x1800D3070 (--$LogSpeechRuntimeListenerFunct@AEAY0BK@$$CBG@ISMTracing@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTracing@@SAXAEAPEAUIFocusInputTarget@@AEAK$$QEAIAEA_K@Z @ 0x1801078C4 (--$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTr.c)
 *     ??$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAUIInputTarget@@AEAKAEA_KAEA_N@Z @ 0x1801079AC (--$MPCInputRouter_IsTargetHolographic@AEAPEAUIInputTarget@@AEAKAEA_KAEA_N@ISMTracing@@SAXAEAPEAU.c)
 *     ??$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAKAEA_K@Z @ 0x180107A90 (--$MPCInputRouter_OnExclusiveModeStateChangedInputThread@AEA_NAEAKAEA_K@ISMTracing@@SAXAEA_NAEAK.c)
 *     ??$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocusTarget@@0@Z @ 0x180107B60 (--$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocus.c)
 *     ??$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z @ 0x180107C20 (--$MPCInputRouter_Update3DFocusWNF@AEA_KAEA_KAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEA_K0AEAK111@Z.c)
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180107D20 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x18010A370 (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x18010A500 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18010A670 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x18010A7D8 (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x18010A91C (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z.c)
 *     ??$MPCTarget_Create@PEAVMPCTarget@@@ISMTracing@@SAX$$QEAPEAVMPCTarget@@@Z @ 0x18010C4F0 (--$MPCTarget_Create@PEAVMPCTarget@@@ISMTracing@@SAX$$QEAPEAVMPCTarget@@@Z.c)
 *     ??$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@Z @ 0x18010C5A0 (--$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMP.c)
 *     ??$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$$QEAIAEA_K@Z @ 0x18010C674 (--$MPCTarget_UpdatedFrameworkViewType@PEAVMPCTarget@@IAEA_K@ISMTracing@@SAX$$QEAPEAVMPCTarget@@$.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x18010D554 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 *     ??$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ @ 0x1801DB304 (--$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801DB3A4 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801DB4D4 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801DB708 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801DB7C8 (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801DB888 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$MPCGamepadProcessor_KeyboardInputEvent@AEAGAEAG@ISMTracing@@SAXAEAG0@Z @ 0x1801E2C60 (--$MPCGamepadProcessor_KeyboardInputEvent@AEAGAEAG@ISMTracing@@SAXAEAG0@Z.c)
 *     ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x1801E3C80 (-MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z.c)
 *     ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x1801E60B0 (--$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ??$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x1801E61A4 (--$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801E6298 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801E7684 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801E77B8 (-MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ??$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z @ 0x1801E925C (--$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18003F41C (_tlgKeywordOn.c)
 *     atexit @ 0x180056078 (atexit.c)
 */

char __fastcall ISMTracing::IsEnabled(char a1)
{
  char v1; // bl
  _DWORD *v2; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a1;
  v1 = 0;
  v7 = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v4 = &`ISMTracing::Instance'::`2'::wrapper;
    v7 = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v4);
  }
  v2 = (_DWORD *)v7[1];
  if ( v2 && *v2 && (unsigned __int8)tlgKeywordOn(v2, 0LL) )
    return 1;
  return v1;
}
