/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x1800091E0
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E2E0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D028 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     _lambda_4d96e95c7f1dfdf18ba3c0829eb40359_::operator() @ 0x180034630 (_lambda_4d96e95c7f1dfdf18ba3c0829eb40359_--operator().c)
 *     _lambda_f89467a453fb6f478a02f7a30062da1c_::operator() @ 0x180034BD4 (_lambda_f89467a453fb6f478a02f7a30062da1c_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800351C4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x1800389C0 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180038AB8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180038B7C (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180038C70 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180038D64 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038EB4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180039058 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x180039120 (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180039180 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800392CC (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x18003939C (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x1800393FC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18003945C (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x1800394B8 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18003956C (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180039604 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180039690 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdSetUserDuckingPreference@@YAXKM@Z @ 0x180039924 (-TsSessionIdSetUserDuckingPreference@@YAXKM@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180039984 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180039A30 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x18003AC60 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, struct TSSession **a3)
{
  __int64 v4; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  *a3 = 0LL;
  EnterCriticalSection(&stru_1800636C8);
  v7 = (_QWORD *)(qword_180063778
                + 16
                * ((0x100000001B3LL
                  * (HIBYTE(a1) ^ (0x100000001B3LL
                                 * (BYTE2(a1) ^ (0x100000001B3LL
                                               * (BYTE1(a1) ^ (0x100000001B3LL
                                                             * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))) & qword_180063790));
  v8 = v7[1];
  if ( v8 != qword_180063768 )
  {
    while ( a1 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *v7 )
        goto LABEL_4;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v4 = v8;
  }
LABEL_4:
  v9 = qword_180063768;
  if ( v4 )
    v9 = v4;
  if ( v9 != qword_180063768 )
  {
    *a3 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_1800636C8);
    return 0LL;
  }
  LeaveCriticalSection(&stru_1800636C8);
  if ( !a2 )
    return 2147943568LL;
  v11 = TsSessionCreate(a1, a3);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x437,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v11,
    v13);
  return v12;
}
