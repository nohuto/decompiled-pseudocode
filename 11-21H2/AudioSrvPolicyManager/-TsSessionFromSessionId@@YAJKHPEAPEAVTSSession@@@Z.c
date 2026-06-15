/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74
 * Callers:
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180009E10 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180009FA0 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C880 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000D360 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180011DF0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800175A0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001F0B4 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800226F4 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180029F30 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18002A020 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     _lambda_0cfdefd299286392233da820e0fc925e_::operator() @ 0x18002B7FC (_lambda_0cfdefd299286392233da820e0fc925e_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18002BD5C (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002D4C0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002E110 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18002E1F8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E36C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18002E4D0 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002E564 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002E750 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E8B8 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18002EAB0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18002ECF0 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG_K@Z @ 0x18002ED8C (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG_K@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18002EE4C (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18002EEF8 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002F0DC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18002F164 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18002F234 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18002F448 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18002F4D8 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002F5F8 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18002F6C0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18002F7A4 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18002F99C (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002FA9C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18002FC64 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x180030EC0 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionFromSessionId(DWORD SessionId, int a2, struct TSSession **a3)
{
  __int64 v6; // r9
  unsigned __int64 i; // r10
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v14; // [rsp+30h] [rbp+8h]

  v14 = SessionId;
  *a3 = 0LL;
  EnterCriticalSection(&stru_18005C5D8);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v14 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(qword_18005C6C8 + 16 * (v6 & qword_18005C6E0) + 8);
  if ( v8 == qword_18005C6B8 )
    goto LABEL_9;
  v9 = *(_QWORD *)(qword_18005C6C8 + 16 * (v6 & qword_18005C6E0));
  while ( SessionId != *(_DWORD *)(v8 + 16) )
  {
    if ( v8 == v9 )
      goto LABEL_9;
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( !v8 )
LABEL_9:
    v8 = qword_18005C6B8;
  if ( v8 == qword_18005C6B8 )
  {
    LeaveCriticalSection(&stru_18005C5D8);
    if ( !a2 )
      return 2147943568LL;
    v10 = TsSessionCreate(SessionId, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    *a3 = *(struct TSSession **)(v8 + 24);
    LeaveCriticalSection(&stru_18005C5D8);
  }
  return 0LL;
}
