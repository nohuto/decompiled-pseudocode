/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4
 * Callers:
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A7210 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x1803C6140 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18009E190 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1800A7290 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 *     ?StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A7398 (-StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1800A7764 (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _lambda_09002843fc292861b66de9ebeae70798_::operator() @ 0x1800A7F3C (_lambda_09002843fc292861b66de9ebeae70798_--operator().c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1800A80C4 (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A82A0 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU @ 0x1800A867C (Windows--ApplicationModel--Internal--DataTransfer--IsClipboardSignalProducingFeatureSupportedSKU.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A86F0 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A89A8 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A8B30 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A8DE8 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A8FDC (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1800A9294 (-IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x1800A9378 (-reset@-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A93A0 (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(LARGE_INTEGER *this)
{
  _DWORD *v2; // rcx
  int started; // eax
  LARGE_INTEGER *v4; // rdi
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  DWORD IsAFCAndActivityTrackingEnabled; // r14d
  __int64 v9; // rcx
  LARGE_INTEGER v10; // r9
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int ActivationFactory; // eax
  unsigned int v19; // ebx
  LARGE_INTEGER v20; // rbx
  __int64 (__fastcall *v21)(LARGE_INTEGER, _QWORD, LARGE_INTEGER *); // rdi
  LARGE_INTEGER v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  TaskFlowImmersiveShellBroker *v30; // rcx
  int v31; // eax
  int active; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+5Ch] [rbp-ACh] BYREF
  int v42; // [rsp+60h] [rbp-A8h] BYREF
  int v43; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v45[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  char v47; // [rsp+A0h] [rbp-68h]
  _OWORD v48[3]; // [rsp+A8h] [rbp-60h] BYREF
  char v49; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-18h]
  __int128 v52; // [rsp+100h] [rbp-8h]
  _QWORD v53[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v54[112]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v55[32]; // [rsp+208h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  LOWORD(v40) = 14;
  LODWORD(v44) = 0;
  v2 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      this,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806B0000, 0LL, 0LL, 2u, &v50);
  QueryPerformanceCounter(&PerformanceCount);
  v53[0] = PerformanceCount.QuadPart;
  memset_0(v54, 0, sizeof(v54));
  v43 = 0;
  v45[0] = &v43;
  v45[1] = &v40;
  v45[2] = &v44;
  v45[3] = v53;
  v45[4] = v55;
  v50.Ptr = (ULONGLONG)&v43;
  *(_QWORD *)&v50.Size = v53;
  *(_QWORD *)&v51 = v54;
  *((_QWORD *)&v51 + 1) = v55;
  *(_QWORD *)&v52 = &v40;
  *((_QWORD *)&v52 + 1) = &v44;
  v48[0] = v50;
  v48[1] = v51;
  v48[2] = v52;
  v49 = 1;
  if ( !this[35].QuadPart && this[25].LowPart != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer((TaskFlowImmersiveShellBroker *)this);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 0LL);
  }
  v4 = this + 37;
  if ( !LOBYTE(this[37].LowPart) )
  {
    v5 = CDPInitialize();
    v42 = v5;
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 1LL);
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(&v42);
    if ( v5 >= 0 )
    {
      LOBYTE(v38) = 1;
      if ( v4 != (LARGE_INTEGER *)&v38 )
      {
        wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset(&this[37]);
        LOBYTE(v4->LowPart) = 1;
        LOBYTE(v38) = 0;
      }
      wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset(&v38);
      if ( !this[38].QuadPart && this[25].LowPart != 2 )
      {
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&this[38]);
        v6 = CDPGetUserActivitySettings(&this[38]);
        v7 = retaddr;
        if ( v6 < 0 )
        {
          v34 = 167LL;
        }
        else
        {
          v6 = (*(__int64 (__fastcall **)(LARGE_INTEGER, unsigned __int64, LARGE_INTEGER *))(*(_QWORD *)this[38].QuadPart
                                                                                           + 40LL))(
                 this[38],
                 -(__int64)(this != 0LL) & (unsigned __int64)&this[18],
                 this + 39);
          v7 = retaddr;
          if ( v6 >= 0 )
          {
LABEL_16:
            lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 2LL);
            goto LABEL_17;
          }
          v34 = 169LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v34,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v6,
          v37);
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  IsAFCAndActivityTrackingEnabled = TaskFlowImmersiveShellBroker::IsAFCAndActivityTrackingEnabled((TaskFlowImmersiveShellBroker *)this);
  lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 3LL);
  LOWORD(v41) = 1;
  v10 = this[38];
  if ( !v10.QuadPart )
    goto LABEL_21;
  v11 = (*(__int64 (__fastcall **)(LARGE_INTEGER, __int64, int *))(*(_QWORD *)v10.QuadPart + 32LL))(this[38], 3LL, &v41);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v11,
      v37);
  lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 4LL);
  v12 = 1;
  if ( (_WORD)v41 )
LABEL_21:
    v12 = 0;
  v13 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                       v9,
                       _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
  {
    v46 = 0x2000000LL;
    v42 = v12;
    PerformanceCount.LowPart = IsAFCAndActivityTrackingEnabled;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v14,
      byte_1806AFE01,
      v15,
      v16,
      (__int64)&PerformanceCount,
      (__int64)&v42,
      (__int64)&v46);
  }
  if ( (_BYTE)IsAFCAndActivityTrackingEnabled && !this[26].QuadPart && this[25].LowPart != 2 )
  {
    v46 = (__int64)v45;
    v47 = 1;
    PerformanceCount.QuadPart = 0LL;
    *((_QWORD *)&v51 + 1) = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&v50,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v17 = *((_QWORD *)&v51 + 1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
    ActivationFactory = RoGetActivationFactory(v17, &GUID_383a5225_f0aa_4a99_9598_aee7f3f866b1, &PerformanceCount);
    v19 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v35 = 196LL;
    }
    else
    {
      v20 = PerformanceCount;
      v21 = *(__int64 (__fastcall **)(LARGE_INTEGER, _QWORD, LARGE_INTEGER *))(*(_QWORD *)PerformanceCount.QuadPart
                                                                             + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&this[26]);
      ActivationFactory = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v21)(
                            (LARGE_INTEGER)v20.QuadPart,
                            0LL,
                            &this[26]);
      v19 = ActivationFactory;
      if ( ActivationFactory >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
        lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 5LL);
        goto LABEL_31;
      }
      v35 = 197LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
    v36 = 5LL;
    goto LABEL_80;
  }
LABEL_31:
  if ( this[25].LowPart != 2 )
  {
    PerformanceCount = this[26];
    v22 = PerformanceCount;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&PerformanceCount);
    if ( v22.QuadPart )
    {
      LOBYTE(v23) = IsAFCAndActivityTrackingEnabled;
      v24 = (*(__int64 (__fastcall **)(LARGE_INTEGER, __int64))(*(_QWORD *)v22.QuadPart + 80LL))(v22, v23);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD2,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v24,
          v37);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 6LL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
  }
  if ( !(_BYTE)IsAFCAndActivityTrackingEnabled )
    goto LABEL_71;
  if ( !this[27].QuadPart && this[25].LowPart != 2 )
  {
    v46 = (__int64)v45;
    v47 = 1;
    v25 = TaskFlowImmersiveShellBroker::StartAppViewListener((TaskFlowImmersiveShellBroker *)this);
    v19 = v25;
    if ( v25 >= 0 )
    {
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 7LL);
      goto LABEL_42;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v25);
    v36 = 7LL;
LABEL_80:
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, v36);
    goto LABEL_72;
  }
LABEL_42:
  if ( !this[31].QuadPart && this[25].LowPart != 2 )
  {
    v26 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener((TaskFlowImmersiveShellBroker *)this);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE4,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v26,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 8LL);
  }
  if ( !this[30].QuadPart && this[25].LowPart != 2 )
  {
    v27 = TaskFlowImmersiveShellBroker::StartUserPresenceListener((TaskFlowImmersiveShellBroker *)this);
    if ( v27 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEA,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v27,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 9LL);
  }
  if ( !this[29].QuadPart && this[25].LowPart != 2 )
  {
    v28 = TaskFlowImmersiveShellBroker::StartFileListener((TaskFlowImmersiveShellBroker *)this);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF0,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v28,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 10LL);
  }
  if ( !this[28].QuadPart && this[25].LowPart != 2 )
  {
    v29 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener((TaskFlowImmersiveShellBroker *)this);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF6,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v29,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 11LL);
  }
  if ( (unsigned __int8)Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU()
    && !this[32].QuadPart
    && this[25].LowPart != 2 )
  {
    v31 = TaskFlowImmersiveShellBroker::StartClipboardSignalListener((TaskFlowImmersiveShellBroker *)this);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x101,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v31,
        v37);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 12LL);
  }
  active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(v30);
  if ( active < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x106,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)active,
      v37);
  lambda_09002843fc292861b66de9ebeae70798_::operator()(v45, 13LL);
LABEL_71:
  v19 = 0;
LABEL_72:
  v49 = 0;
  lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()((int **)v48);
  return v19;
}
