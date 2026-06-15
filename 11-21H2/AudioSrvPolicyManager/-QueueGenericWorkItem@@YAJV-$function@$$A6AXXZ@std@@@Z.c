/*
 * XREFs of ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708
 * Callers:
 *     ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800096E0 (-Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTO.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000A7A0 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000AFB0 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z @ 0x18000B9B0 (-RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000D360 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180015AA0 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017C30 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180018120 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180019510 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180026864 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x180026DB8 (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027084 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027324 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800285B0 (PbmAllowMediaPlaybackForApp.c)
 *     PbmCastingAppStateChanged @ 0x1800286E0 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x180028AB0 (PbmPlayToStreamStateChanged.c)
 *     PbmReportApplicationState @ 0x180028E20 (PbmReportApplicationState.c)
 *     PbmSetScreenReaderState @ 0x180029000 (PbmSetScreenReaderState.c)
 *     PbmSetSmtcSubscriptionState @ 0x180029100 (PbmSetSmtcSubscriptionState.c)
 *     _lambda_0cfdefd299286392233da820e0fc925e_::operator() @ 0x18002B7FC (_lambda_0cfdefd299286392233da820e0fc925e_--operator().c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002C708 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?RefreshVolumesForAllTsSessions@@YAXXZ @ 0x18002C778 (-RefreshVolumesForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18002E1F8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18002EAB0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x1800300D8 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800301EC (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18000F224 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall QueueGenericWorkItem(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE *v8; // rdx
  const char *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  signed int LastError; // eax
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  _QWORD v21[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[56]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE *v24; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v27; // [rsp+A8h] [rbp+10h]

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v3 = v2;
    if ( v2 )
    {
      v24 = 0LL;
      v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a1[7];
      if ( v4 )
        v24 = (_BYTE *)(**v4)(v4, v23);
      *v3 = &CGenericWorkItem::`vftable';
      v3[1] = 0LL;
      v3[2] = 0LL;
      v5 = std::make_shared<std::function<void (void)>,std::function<void (void)> &>(v22, (__int64)v23);
      v6 = *v5;
      v7 = v5[1];
      *v5 = 0LL;
      v5[1] = 0LL;
      v21[0] = v3[1];
      v3[1] = v6;
      v21[1] = v3[2];
      v3[2] = v7;
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v21);
      std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v22);
      if ( v24 )
      {
        v8 = v23;
        LOBYTE(v8) = v24 != v23;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v8);
        v24 = 0LL;
      }
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v3, 0LL) )
        goto LABEL_19;
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      if ( (v15 & 0x80000000) == 0 )
      {
LABEL_19:
        v18 = (__int64 *)a1[7];
        if ( v18 )
        {
          LOBYTE(v13) = v18 != a1;
          (*(void (__fastcall **)(__int64 *, __int64))(*v18 + 32))(v18, v13);
          a1[7] = 0LL;
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x149,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
          (const char *)v15);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 8LL))(v3, 1LL);
        v17 = (__int64 *)a1[7];
        if ( v17 )
        {
          LOBYTE(v16) = v17 != a1;
          (*(void (__fastcall **)(__int64 *, __int64))(*v17 + 32))(v17, v16);
          a1[7] = 0LL;
        }
        result = v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        (const char *)0x8007000ELL);
      v10 = (__int64 *)a1[7];
      if ( v10 )
      {
        v11 = *v10;
        LOBYTE(v11) = v10 != a1;
        (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 32))(v10, v11);
        a1[7] = 0LL;
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    v27 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x14F,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
            v9);
    v19 = (__int64 *)a1[7];
    if ( v19 )
    {
      LOBYTE(v20) = v19 != a1;
      (*(void (__fastcall **)(__int64 *, __int64))(*v19 + 32))(v19, v20);
      a1[7] = 0LL;
    }
    return v27;
  }
  return result;
}
