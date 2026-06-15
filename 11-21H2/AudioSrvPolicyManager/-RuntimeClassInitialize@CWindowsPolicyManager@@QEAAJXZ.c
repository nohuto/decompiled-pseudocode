/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0
 * Callers:
 *     ActivatePolicyManager @ 0x18000E5F0 (ActivatePolicyManager.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x180007BFC (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ??$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_ACTIVITY_PRESENCE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008458 (--$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_AC.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x180008590 (--0CDuckingManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18000BED0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000E2AC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x1800124E4 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002D3D8 (-TS_ServiceStart@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(CWindowsPolicyManager *this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rcx
  CDuckingManager *v19; // rax
  volatile signed __int32 *v20; // rdi
  signed __int32 v21; // eax
  DWORD v22; // eax
  DWORD v23; // eax
  __int64 v24; // r8
  wil::details::in1diag3 *v25; // rcx
  unsigned int dwCreationFlags; // [rsp+28h] [rbp-69h]
  bool v27; // [rsp+38h] [rbp-59h] BYREF
  volatile signed __int32 *Recipient[2]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v29[5]; // [rsp+50h] [rbp-41h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( !ThreadPool )
  {
    ProcessHeap = GetProcessHeap();
    v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
    if ( !v3 )
    {
      v4 = -2147024882;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    *v3 = &CAudioThreadPool::`vftable';
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
    if ( RtlDllShutdownInProgress() )
    {
      v4 = -2147023781;
LABEL_9:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_59645097987a3a1d89299ed4bf796b10_Traceguids,
          (unsigned int)v4);
      }
      (*(void (__fastcall **)(_QWORD *, __int64))*v3)(v3, 1LL);
      goto LABEL_20;
    }
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    v3[10] = ThreadpoolCleanupGroup;
    if ( ThreadpoolCleanupGroup )
    {
      v3[3] = ThreadpoolCleanupGroup;
      v3[4] = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 < 0 )
        goto LABEL_9;
    }
    ThreadPool = (struct CAudioThreadPool *)v3;
  }
  g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  if ( !g_WorkerEventPort )
  {
    v8 = 300LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v7);
  }
  g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
  if ( !g_EventWorkerThreadHandle )
  {
    v8 = 303LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v7);
  }
  TS_ServiceStart();
  Recipient[0] = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(Recipient);
  if ( v4 < 0 )
  {
    v10 = 308LL;
    goto LABEL_26;
  }
  v11 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *(_OWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 3) = 1;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v12 = &CStreamClassPolicyManager::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  v13 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = (__int64)v12;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v12 = (_QWORD *)g_StreamClassPolicyManager;
  }
  if ( !v12 )
  {
    v10 = 311LL;
LABEL_46:
    v4 = -2147024882;
    goto LABEL_26;
  }
  v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    *(_OWORD *)v14 = 0LL;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 3) = 1;
    *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v15 = &CPlaybackManager::`vftable';
    *((_BYTE *)v15 + 16) = 0;
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
    v15 = 0LL;
  }
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v15;
  if ( v17 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v17);
    v16 = (_QWORD *)*((_QWORD *)this + 4);
  }
  if ( !v16 )
  {
    v10 = 314LL;
    goto LABEL_46;
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v18);
  *((_QWORD *)this + 5) = 0LL;
  v19 = (CDuckingManager *)operator new(0x1C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29[2] = v19;
  v29[3] = v19;
  if ( !v19 )
  {
    v4 = -2147024882;
LABEL_54:
    v10 = 316LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v4);
    if ( Recipient[0] )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(Recipient[0]);
    return (unsigned int)v4;
  }
  v29[4] = v19;
  v20 = (volatile signed __int32 *)CDuckingManager::CDuckingManager(v19);
  v4 = CDuckingManager::RuntimeClassInitialize((CDuckingManager *)v20);
  if ( v4 < 0 )
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v20);
    goto LABEL_54;
  }
  if ( v20 )
  {
    do
      v21 = *((_DWORD *)v20 + 5);
    while ( v21 != 0x7FFFFFFF && v21 != _InterlockedCompareExchange(v20 + 5, v21 + 1, v21) );
  }
  *((_QWORD *)this + 5) = v20;
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v20);
  g_DuckingManager = (struct CDuckingManager *)*((_QWORD *)this + 5);
  g_ApplicationManager = (CApplicationManager *)Recipient[0];
  g_PlaybackManager = (struct CPlaybackManager *)*((_QWORD *)this + 4);
  memset_0(&spc, 0, sizeof(spc));
  if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
  {
    g_bIsAoAcSystem = 1;
    Recipient[0] = (volatile signed __int32 *)LowPowerEpochNotificationCallback;
    Recipient[1] = 0LL;
    v22 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, &g_hLowPowerEpochNotificationHandle);
    if ( v22 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x14D,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)v22,
        dwCreationFlags);
  }
  else
  {
    g_bIsAoAcSystem = 0;
  }
  v29[0] = GlobalUserPresenceNotificationCallback;
  v29[1] = 0LL;
  v23 = PowerSettingRegisterNotification(&GUID_GLOBAL_USER_PRESENCE, 2u, v29, &g_hGlobalUserPresenceNotification);
  v25 = retaddr;
  if ( v23 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x154,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v23,
      dwCreationFlags);
  wil::wnf_query_nothrow<enum _USER_ACTIVITY_PRESENCE>((__int64)v25, &v27, v24, Recipient);
  return 0LL;
}
