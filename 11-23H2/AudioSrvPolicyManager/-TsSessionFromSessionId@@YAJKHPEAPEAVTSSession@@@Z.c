/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E0F0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002CE38 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--operator().c)
 *     _lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_::operator() @ 0x1800345E8 (_lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180034E14 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180037D20 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180037E18 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180037EDC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180037FD0 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800380C4 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800383B4 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003847C (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800384D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18003861C (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x1800386EC (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18003874C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x1800387AC (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x180038808 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800388BC (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180038954 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x1800389E0 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180038AD4 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdSetUserDuckingPreference@@YAXKM@Z @ 0x180038C74 (-TsSessionIdSetUserDuckingPreference@@YAXKM@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180038CD4 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180038D80 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x180039E10 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
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
  EnterCriticalSection(&stru_180061648);
  v7 = (_QWORD *)(qword_1800616F8
                + 16
                * ((0x100000001B3LL
                  * (HIBYTE(a1) ^ (0x100000001B3LL
                                 * (BYTE2(a1) ^ (0x100000001B3LL
                                               * (BYTE1(a1) ^ (0x100000001B3LL
                                                             * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))) & qword_180061710));
  v8 = v7[1];
  if ( v8 != qword_1800616E8 )
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
  v9 = qword_1800616E8;
  if ( v4 )
    v9 = v4;
  if ( v9 != qword_1800616E8 )
  {
    *a3 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_180061648);
    return 0LL;
  }
  LeaveCriticalSection(&stru_180061648);
  if ( !a2 )
    return 2147943568LL;
  v11 = TsSessionCreate(a1, a3);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x436,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v11,
    v13);
  return v12;
}
