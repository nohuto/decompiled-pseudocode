/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C
 * Callers:
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010F150 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x18049F8E0 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x18010E92C (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18010F1DC (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _lambda_09002843fc292861b66de9ebeae70798_::operator() @ 0x18010F708 (_lambda_09002843fc292861b66de9ebeae70798_--operator().c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x18010F82C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F8CC (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@details@wil@@QEAA_NXZ @ 0x180111BE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveTimelineActivities@@@detail.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18049CD28 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU @ 0x18049F724 (Windows--ApplicationModel--Internal--DataTransfer--IsClipboardSignalProducingFeatureSupportedSKU.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1194 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1458 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1654 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1850 (-StartClipboardSignalListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1A54 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1804A1C8C (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(LARGE_INTEGER *this)
{
  _DWORD *v2; // rcx
  int started; // eax
  int *v4; // rdi
  int v5; // ebx
  char v6; // al
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  LARGE_INTEGER v9; // rcx
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  __int64 QuadPart; // rbx
  unsigned int v16; // ebx
  __int64 v18; // rdx
  unsigned __int8 v19; // r14
  char v20; // di
  char v21; // r14
  LARGE_INTEGER v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  int ActivationFactory; // eax
  __int64 v27; // rdx
  LARGE_INTEGER v28; // rbx
  __int64 (__fastcall *v29)(LARGE_INTEGER, _QWORD, LARGE_INTEGER *); // rdi
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  TaskFlowImmersiveShellBroker *v38; // rcx
  int v39; // eax
  int active; // eax
  int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v43[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+60h] [rbp-A8h] BYREF
  int v47; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v48[5]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  char v50; // [rsp+98h] [rbp-70h]
  _OWORD v51[3]; // [rsp+A0h] [rbp-68h] BYREF
  char v52; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v54; // [rsp+E8h] [rbp-20h]
  __int128 v55; // [rsp+F8h] [rbp-10h]
  _QWORD v56[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v57[112]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v58[32]; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v43[0] = 14;
  v47 = 0;
  v2 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                      this,
                      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1808574A5, 0LL, 0LL, 2u, &v53);
  QueryPerformanceCounter(&PerformanceCount);
  v56[0] = PerformanceCount.QuadPart;
  memset_0(v57, 0, sizeof(v57));
  v46 = 0;
  v48[0] = &v46;
  v48[1] = v43;
  v48[2] = &v47;
  v48[3] = v56;
  v48[4] = v58;
  v53.Ptr = (ULONGLONG)&v46;
  *(_QWORD *)&v53.Size = v56;
  *(_QWORD *)&v54 = v57;
  *((_QWORD *)&v54 + 1) = v58;
  *(_QWORD *)&v55 = v43;
  *((_QWORD *)&v55 + 1) = &v47;
  v51[0] = v53;
  v51[1] = v54;
  v51[2] = v55;
  v52 = 1;
  if ( !this[35].QuadPart && this[25].LowPart != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer((TaskFlowImmersiveShellBroker *)this);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x96,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started,
        v41);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 0LL);
  }
  v4 = (int *)&this[37];
  if ( !LOBYTE(this[37].LowPart) )
  {
    v5 = CDPInitialize();
    v42 = v5;
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 1LL);
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(&v42);
    if ( v5 >= 0 )
    {
      if ( v4 == &v42 )
      {
        CDPShutdown();
      }
      else
      {
        v6 = *(_BYTE *)v4;
        *(_BYTE *)v4 = 0;
        if ( v6 )
          CDPShutdown();
        *(_BYTE *)v4 = 1;
      }
      if ( !this[38].QuadPart && this[25].LowPart != 2 )
      {
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&this[38]);
        v7 = CDPGetUserActivitySettings(&this[38]);
        v8 = retaddr;
        if ( v7 < 0 )
        {
          v18 = 167LL;
        }
        else
        {
          v7 = (*(__int64 (__fastcall **)(LARGE_INTEGER, unsigned __int64, LARGE_INTEGER *))(*(_QWORD *)this[38].QuadPart
                                                                                           + 40LL))(
                 this[38],
                 -(__int64)(this != 0LL) & (unsigned __int64)&this[18],
                 this + 39);
          v8 = retaddr;
          if ( v7 >= 0 )
          {
LABEL_18:
            lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 2LL);
            goto LABEL_39;
          }
          v18 = 169LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v8,
          (void *)v18,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v7,
          v41);
        goto LABEL_18;
      }
    }
  }
LABEL_39:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveTimelineActivities>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveTimelineActivities>::GetImpl'::`2'::impl) )
  {
    v19 = 0;
  }
  else
  {
    v20 = 0;
    v21 = 0;
    LOWORD(v42) = 1;
    v22 = this[38];
    PerformanceCount = v22;
    if ( v22.QuadPart )
    {
      (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)v22.QuadPart + 8LL))(v22);
      v23 = (*(__int64 (__fastcall **)(LARGE_INTEGER, __int64, int *))(*(_QWORD *)v22.QuadPart + 32LL))(v22, 2LL, &v42);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x33C,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v23,
          v41);
      if ( !(_WORD)v42 )
        v20 = 1;
      v24 = (*(__int64 (__fastcall **)(LARGE_INTEGER, _QWORD, int *))(*(_QWORD *)v22.QuadPart + 32LL))(v22, 0LL, &v42);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x342,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v24,
          v41);
      if ( !(_WORD)v42 )
        v21 = 1;
    }
    v19 = v20 & v21;
    wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&PerformanceCount);
  }
  lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 3LL);
  LOWORD(v44) = 1;
  v9 = this[38];
  if ( !v9.QuadPart )
    goto LABEL_23;
  v10 = (*(__int64 (__fastcall **)(LARGE_INTEGER, __int64, __int64 *))(*(_QWORD *)v9.QuadPart + 32LL))(v9, 3LL, &v44);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v10,
      v41);
  lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 4LL);
  v11 = 1;
  if ( (_WORD)v44 )
LABEL_23:
    v11 = 0;
  v12 = *(_DWORD **)(((__int64 (__fastcall *)(_QWORD, _QWORD))wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get)(
                       (LARGE_INTEGER)v9.QuadPart,
                       _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v12 > 5u && tlgKeywordOn((__int64)v12, 0x400000000000LL) )
  {
    v49 = 0x2000000LL;
    v42 = v11;
    PerformanceCount.LowPart = v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      (int)&unk_1808572A6,
      0,
      v14,
      (__int64)&PerformanceCount,
      (__int64)&v42,
      (__int64)&v49);
  }
  if ( v19 && !this[26].QuadPart && this[25].LowPart != 2 )
  {
    v49 = (__int64)v48;
    v50 = 1;
    PerformanceCount.QuadPart = 0LL;
    *((_QWORD *)&v54 + 1) = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&v53,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v25 = *((_QWORD *)&v54 + 1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
    ActivationFactory = RoGetActivationFactory(v25, &GUID_383a5225_f0aa_4a99_9598_aee7f3f866b1, &PerformanceCount);
    v16 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v27 = 196LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v41);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
      v30 = 5LL;
LABEL_67:
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, v30);
      goto LABEL_34;
    }
    v28 = PerformanceCount;
    v29 = *(__int64 (__fastcall **)(LARGE_INTEGER, _QWORD, LARGE_INTEGER *))(*(_QWORD *)PerformanceCount.QuadPart + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&this[26]);
    ActivationFactory = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v29)(
                          (LARGE_INTEGER)v28.QuadPart,
                          0LL,
                          &this[26]);
    v16 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v27 = 197LL;
      goto LABEL_57;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&PerformanceCount);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 5LL);
  }
  if ( this[25].LowPart != 2 )
  {
    QuadPart = this[26].QuadPart;
    v49 = QuadPart;
    if ( QuadPart )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)QuadPart + 8LL))(QuadPart);
      LOBYTE(v31) = v19;
      v32 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)QuadPart + 80LL))(QuadPart, v31);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD2,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v32,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 6LL);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v49);
  }
  if ( v19 )
  {
    if ( !this[27].QuadPart && this[25].LowPart != 2 )
    {
      v49 = (__int64)v48;
      v50 = 1;
      v33 = TaskFlowImmersiveShellBroker::StartAppViewListener((TaskFlowImmersiveShellBroker *)this);
      v16 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDE,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v33,
          v41);
        v30 = 7LL;
        goto LABEL_67;
      }
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 7LL);
    }
    if ( !this[31].QuadPart && this[25].LowPart != 2 )
    {
      v34 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener((TaskFlowImmersiveShellBroker *)this);
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE4,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v34,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 8LL);
    }
    if ( !this[30].QuadPart && this[25].LowPart != 2 )
    {
      v35 = TaskFlowImmersiveShellBroker::StartUserPresenceListener((TaskFlowImmersiveShellBroker *)this);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEA,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v35,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 9LL);
    }
    if ( !this[29].QuadPart && this[25].LowPart != 2 )
    {
      v36 = TaskFlowImmersiveShellBroker::StartFileListener((TaskFlowImmersiveShellBroker *)this);
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF0,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v36,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 10LL);
    }
    if ( !this[28].QuadPart && this[25].LowPart != 2 )
    {
      v37 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener((TaskFlowImmersiveShellBroker *)this);
      if ( v37 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF6,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v37,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 11LL);
    }
    if ( (unsigned __int8)Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU()
      && !this[32].QuadPart
      && this[25].LowPart != 2 )
    {
      v39 = TaskFlowImmersiveShellBroker::StartClipboardSignalListener((TaskFlowImmersiveShellBroker *)this);
      if ( v39 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x101,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v39,
          v41);
      lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 12LL);
    }
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(v38);
    if ( active < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x106,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active,
        v41);
    lambda_09002843fc292861b66de9ebeae70798_::operator()(v48, 13LL);
  }
  v16 = 0;
LABEL_34:
  v52 = 0;
  lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()((int **)v51);
  return v16;
}
