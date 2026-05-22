/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800106E0 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014AA0 (-QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004AF84 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x1800587C0 (-OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x180058AF4 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x180059D90 (-AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z.c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180059DD4 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005A044 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x18005A2D0 (-OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x18005A4F8 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x18005A824 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800E9398 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800E9490 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800E95F0 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800EC8E8 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 *     ?HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z @ 0x1800F38F0 (-HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800F3958 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800582A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180058814 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
