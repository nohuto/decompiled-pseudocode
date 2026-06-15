/*
 * XREFs of ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0
 * Callers:
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180002380 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     PbmSetSmtcSubscriptionState @ 0x1800028F0 (PbmSetSmtcSubscriptionState.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000E990 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18001C450 (-Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTO.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001CC10 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18001D120 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z @ 0x18001D790 (-RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E710 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180025B80 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800271D0 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800275A0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x180027C4C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180028310 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002CE38 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DDB0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003077C (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003085C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180031190 (PbmAllowMediaPlaybackForApp.c)
 *     PbmCastingAppStateChanged @ 0x1800312A0 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x180031670 (PbmPlayToStreamStateChanged.c)
 *     PbmReportApplicationState @ 0x180031960 (PbmReportApplicationState.c)
 *     PbmSetScreenReaderState @ 0x180031AF0 (PbmSetScreenReaderState.c)
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--operator().c)
 *     _lambda_e1820d83b8f95df3942edf6c97432ab5_::operator() @ 0x1800348DC (_lambda_e1820d83b8f95df3942edf6c97432ab5_--operator().c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x180035DDC (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180035E4C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180037EDC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800384D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039098 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000D9D0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCGenericWorkItem@@U?$default_delete@VCGenericWorkItem@@@std@@@std@@QEAA@XZ @ 0x180015FDC (--1-$unique_ptr@VCGenericWorkItem@@U-$default_delete@VCGenericWorkItem@@@std@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016C6C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall QueueGenericWorkItem(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  std::_Ref_count_base *v8; // rcx
  _BYTE *v9; // rdx
  const char *v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  signed int LastError; // eax
  unsigned int v16; // ebx
  __int64 *v17; // rcx
  int v18; // [rsp+20h] [rbp-78h]
  _BYTE v19[56]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE *v20; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v23; // [rsp+A8h] [rbp+10h] BYREF
  _BYTE *v24; // [rsp+B0h] [rbp+18h]
  _DWORD *v25; // [rsp+B8h] [rbp+20h]

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v3 = v2;
    v23 = v2;
    if ( v2 )
    {
      v24 = v19;
      v20 = 0LL;
      v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a1[7];
      if ( v4 )
        v20 = (_BYTE *)(**v4)(v4, v19);
      v24 = v19;
      *v3 = &CGenericWorkItem::`vftable';
      v3[1] = 0LL;
      v3[2] = 0LL;
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v7 = v6;
      v25 = v6;
      if ( v6 )
      {
        *(_OWORD *)v6 = 0LL;
        v6[2] = 1;
        v6[3] = 1;
        *(_QWORD *)v6 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
        v18 = (_DWORD)v6 + 16;
        *((_QWORD *)v6 + 9) = 0LL;
        if ( v20 )
          *((_QWORD *)v6 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v20)(v20, (__int64)(v6 + 4));
      }
      else
      {
        v7 = 0LL;
      }
      v3[1] = v7 + 4;
      v8 = (std::_Ref_count_base *)v3[2];
      v3[2] = v7;
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      if ( v20 )
      {
        v9 = v19;
        LOBYTE(v9) = v20 != v19;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v20 + 32LL))(v20, v9);
        v20 = 0LL;
      }
    }
    else
    {
      v3 = 0LL;
    }
    v23 = v3;
    if ( v3 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v3, 0LL) )
        goto LABEL_24;
      LastError = GetLastError();
      v16 = LastError;
      if ( LastError > 0 )
        v16 = (unsigned __int16)LastError | 0x80070000;
      if ( (v16 & 0x80000000) == 0 )
      {
LABEL_24:
        v17 = (__int64 *)a1[7];
        if ( v17 )
        {
          LOBYTE(v14) = v17 != a1;
          (*(void (__fastcall **)(__int64 *, __int64))(*v17 + 32))(v17, v14);
          a1[7] = 0LL;
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x149,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
          (const char *)v16,
          v18);
        std::unique_ptr<CGenericWorkItem>::~unique_ptr<CGenericWorkItem>(&v23);
        std::_Func_class<void,>::_Tidy(a1);
        result = v16;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        (const char *)0x8007000ELL,
        v18);
      v11 = (__int64 *)a1[7];
      if ( v11 )
      {
        v12 = *v11;
        LOBYTE(v12) = v11 != a1;
        (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v12);
        a1[7] = 0LL;
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x14F,
                     (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
                     v10);
    std::_Func_class<void,>::_Tidy(a1);
    return (unsigned int)v23;
  }
  return result;
}
