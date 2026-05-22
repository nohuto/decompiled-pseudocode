/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180011020 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001C060 (-QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004B910 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x180059BC0 (-OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x18005A2A4 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     ?AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z @ 0x180062500 (-AmbientUpdateAPC@LampArrayRawInputProvider@@CAX_K@Z.c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180062544 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800627B4 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x180062C30 (-OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x180062EDC (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z @ 0x1800643B0 (-SetAmbientPids@LampArrayDevice@@QEAAXII_N@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800F8318 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800F8410 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800FAA94 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800FB9FC (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 *     ?HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z @ 0x180103A10 (-HidUsageToScanCode@HidUsageConverter@@SAEPEAXPEADK@Z.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x180103A78 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800596B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180059C14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
