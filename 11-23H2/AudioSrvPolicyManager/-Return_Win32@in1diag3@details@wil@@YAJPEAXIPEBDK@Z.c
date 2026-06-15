/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     TS_SessionGetAudioProtocol @ 0x1800053B0 (TS_SessionGetAudioProtocol.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800057D0 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18001C970 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x18001DE30 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E0F0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180029290 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180031190 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180031960 (PbmReportApplicationState.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180036AA0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x18003C0E0 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003D30C (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18003DC54 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180041090 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ @ 0x18004150C (-ClearAllPersistedApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@SAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180041750 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180041E00 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180042304 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180042580 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800427B0 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x180042B5C (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180045CA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??R?$__func@V_lambda_6166c63e326ec22a386edc375e0b06c9_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x180046840 (--R-$__func@V_lambda_6166c63e326ec22a386edc375e0b06c9_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 * Callees:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18001B704 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32<1>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
