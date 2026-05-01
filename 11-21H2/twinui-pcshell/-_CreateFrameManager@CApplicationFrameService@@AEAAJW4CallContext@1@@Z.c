/*
 * XREFs of ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1800C5434
 * Callers:
 *     _lambda_d3c491b51a7e8d1962a232c20ca80fd8_::operator() @ 0x1800C5380 (_lambda_d3c491b51a7e8d1962a232c20ca80fd8_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180017658 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetStopResult@?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18002F9D0 (-SetStopResult@-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006C9E8 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18006C9E8.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800C5738 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x1800C575C (--1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x1800C5788 (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x1800C6030 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1800C65F0 (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1800C66BC (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::_CreateFrameManager(__int64 a1, int a2)
{
  char *v4; // rbx
  HRESULT Instance; // esi
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  void *v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  bool v11; // di
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v15; // rdi
  unsigned __int64 *ppv; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppva; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvb; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *ppvc; // [rsp+28h] [rbp-E0h]
  const char *v20; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v21; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v22; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v23; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v24; // [rsp+30h] [rbp-D8h]
  int v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v29[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct IUnknown *v30; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v32[4]; // [rsp+78h] [rbp-90h] BYREF
  void **v33; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v34[24]; // [rsp+90h] [rbp-78h] BYREF
  int v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v33,
    (__int64)"AppFrameHostStartup");
  v33 = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity((CAppManagerTelemetry::AppFrameHostStartup *)&v33);
  CCrashDetector::StopMonitoring((CCrashDetector *)(a1 + 200));
  v27 = 0;
  v30 = 0LL;
  v4 = 0LL;
  Context = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
  Instance = CoCreateInstance(
               &GUID_b9b05098_3e30_483f_87f7_027ca78da287,
               0LL,
               0x404u,
               &GUID_d6defab3_dbb9_4413_8af9_554586fdff94,
               (LPVOID *)&v30);
  v25[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x502,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (__int64)"Failed to connect to the application frame host server",
    v20);
  if ( a2 )
    goto LABEL_2;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v32) >= 0 )
    {
      switch ( v32[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_27;
        case 3u:
          Instance = -2023406814;
          goto LABEL_27;
        case 4u:
          Instance = -2147418094;
          goto LABEL_27;
        case 5u:
          Instance = -2147022986;
LABEL_27:
          v25[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_3;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      v25,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x503u,
      ppv,
      v21);
    Instance = v25[0];
  }
LABEL_2:
  if ( Instance < 0 )
    goto LABEL_82;
LABEL_3:
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, __int64, int *))v30->lpVtbl[2].QueryInterface)(
               v30,
               (a1 + 48) & -(__int64)(a1 != 0),
               &v27);
  v25[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x50A,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (__int64)"Failed to register for application frame events",
    (const char *)v21);
  if ( a2 )
    goto LABEL_4;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v28) >= 0 )
    {
      switch ( v28 )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_43;
        case 3u:
          Instance = -2023406814;
          goto LABEL_43;
        case 4u:
          Instance = -2147418094;
          goto LABEL_43;
        case 5u:
          Instance = -2147022986;
LABEL_43:
          v25[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_5;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v7,
      v25,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x50Bu,
      ppva,
      v22);
    Instance = v25[0];
  }
LABEL_4:
  if ( Instance < 0 )
    goto LABEL_82;
LABEL_5:
  Instance = IUnknown_GetServerProcessHandle(v30, 0x100000u, &Context);
  v25[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x511,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (__int64)"Failed to open a handle on the application frame host server for waiting purposes",
    (const char *)v22);
  if ( a2 )
    goto LABEL_6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v29) >= 0 )
    {
      switch ( v29[0] )
      {
        case 2u:
          Instance = -2023406815;
          goto LABEL_59;
        case 3u:
          Instance = -2023406814;
          goto LABEL_59;
        case 4u:
          Instance = -2147418094;
          goto LABEL_59;
        case 5u:
          Instance = -2147022986;
LABEL_59:
          v25[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_7;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v8,
      v25,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x512u,
      ppvb,
      v23);
    Instance = v25[0];
  }
LABEL_6:
  if ( Instance < 0 )
  {
    v4 = (char *)Context;
    goto LABEL_82;
  }
LABEL_7:
  *(_QWORD *)fPending = a1;
  v9 = Context;
  v4 = 0LL;
  Context = 0LL;
  Instance = CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___(
               (PVOID)(a1 + 200),
               v9);
  v25[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x51D,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (__int64)"Failed to monitor the frame process for crash recovery purposes",
    (const char *)v23);
  if ( a2 )
    goto LABEL_8;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)fPending) >= 0 )
    {
      switch ( fPending[0] )
      {
        case 2:
          Instance = -2023406815;
          goto LABEL_75;
        case 3:
          Instance = -2023406814;
          goto LABEL_75;
        case 4:
          Instance = -2147418094;
          goto LABEL_75;
        case 5:
          Instance = -2147022986;
LABEL_75:
          v25[0] = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( Instance >= 0 )
    goto LABEL_9;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v10,
      v25,
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      0x51Eu,
      ppvc,
      v24);
    Instance = v25[0];
  }
LABEL_8:
  if ( Instance >= 0 )
  {
LABEL_9:
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(a1 + 176, &v30);
    *(_DWORD *)(a1 + 192) = v27;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_10;
  }
LABEL_82:
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl[2].AddRef)(v30);
LABEL_10:
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v33,
    &Context);
  v11 = wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
          v36,
          Instance,
          fPending);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&Context);
  if ( v11 )
  {
    ((void (__fastcall *)(void ***))v33[1])(&v33);
  }
  else
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      *(_QWORD *)v32 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v32[2] = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)v32, v13, v14);
    }
    v15 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v15 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      v29[0] = GetCurrentThreadId();
      v28 = Instance;
      *(_QWORD *)v32 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v15,
        (unsigned int)&dword_18069EE12,
        v36 + 8,
        0,
        (__int64)v32,
        (__int64)&v28,
        (__int64)v29);
    }
  }
  if ( v35 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v34);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
  CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup((CAppManagerTelemetry::AppFrameHostStartup *)&v33);
  return (unsigned int)Instance;
}
