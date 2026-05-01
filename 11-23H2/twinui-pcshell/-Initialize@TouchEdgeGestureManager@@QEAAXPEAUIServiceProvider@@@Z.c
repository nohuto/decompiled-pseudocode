/*
 * XREFs of ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800E852C
 * Callers:
 *     ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801B7AD0 (-subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x180154890 (-IsGamingOverlayExperienceManagerEnabled@@YA_NXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@SmartCookie@@QEAAJPEAUIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@Z @ 0x1801B3F90 (--$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVT.c)
 *     ??$try_capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@winrt@@@?$com_ptr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@winrt@@QEAA_NA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@1@@Z @ 0x18021E8C0 (--$try_capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@winrt@@@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGestureManager::Initialize(TouchEdgeGestureManager *this, IUnknown *punk)
{
  IUnknown *v2; // rsi
  HRESULT Service; // eax
  HRESULT v5; // eax
  HRESULT v6; // eax
  HRESULT v7; // eax
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  IUnknown *v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = punk;
  v2 = punk;
  TouchEdgeGestureTelemetry::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v12,
    "TouchEdgeGestureManager::Initialize");
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
  Service = IUnknown_QueryService(
              v2,
              (const GUID *const)&SID_InputHostLayout,
              &winrt::impl::guid_v<IInputHostLayout>,
              (void **)this + 5);
  if ( Service < 0 )
    winrt::throw_hresult((unsigned int)Service);
  if ( IsGamingOverlayExperienceManagerEnabled() )
  {
    winrt::com_ptr<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>::try_capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,winrt::guid const &>(
      (char *)this + 48,
      IUnknown_QueryService,
      &v16,
      &winrt::impl::guid_v<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>);
    v2 = v16;
  }
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  v5 = IUnknown_QueryService(
         v2,
         (const GUID *const)&SID_IImmersiveMonitorService,
         &winrt::impl::guid_v<IImmersiveMonitorManager>,
         (void **)this + 7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( *((_QWORD *)this + 8) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 8);
  v6 = IUnknown_QueryService(
         v2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &winrt::impl::guid_v<IApplicationViewCollection>,
         (void **)this + 8);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 10);
  v7 = IUnknown_QueryService(
         v2,
         &GUID_5db2128c_bff9_4f32_872d_d0ece6e1d3aa,
         &winrt::impl::guid_v<IGameFocusNotificationService>,
         (void **)this + 10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v10 = SmartCookie::Register<IGameFocusNotificationService,long (IGameFocusNotificationService::*)(IGameFocusEvents *,unsigned long *),long (IGameFocusNotificationService::*)(unsigned long),TouchEdgeGestureManager *>(
          (int)this + 216,
          *((_QWORD *)this + 10),
          v8,
          v9,
          (__int64)this);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
      (const char *)(unsigned int)v10,
      v11);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
}
