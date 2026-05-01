/*
 * XREFs of ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800FCEEC (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FDD58 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x180103F98 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801374EC (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     ??4?$ComPtr@UIImmersiveShellHookService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveShellHookService@@@Z @ 0x18013AAF0 (--4-$ComPtr@UIImmersiveShellHookService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveShellHookServ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImme.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161C84 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161CF8 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180176D28 (McGenEventWrite_EventWriteTransfer.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___ @ 0x180191988 (CIAMGlobals--QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___.c)
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180192BD4 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCApplicationManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCApplicationManager@@@Z @ 0x1801B4660 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1801B4660.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x1801B5050 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1801B7850 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 *     ?_FinalizeApplicationRecovery@CApplicationManager@@AEAAXXZ @ 0x1801BBAAC (-_FinalizeApplicationRecovery@CApplicationManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1803A4AE0 (WPP_SF_.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CApplicationManager::SubscribeToServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v5; // rcx
  int PerMonitorComponents; // edi
  void *v7; // rbx
  PSRWLOCK v8; // rsi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v10; // rcx
  void (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v12)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rdi
  _OWORD *v13; // rax
  _OWORD *v14; // rbx
  void (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rdi
  void (__fastcall *v16)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // rsi
  CCriticalFailureHandler *v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  CCriticalFailureHandler *v21; // rcx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v23; // r12
  CCriticalFailureHandler *v24; // rcx
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v26; // rcx
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v28; // rcx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  CCriticalFailureHandler *v32; // rcx
  CCriticalFailureHandler *v33; // rcx
  char *v34; // rbx
  CCriticalFailureHandler *v35; // rcx
  __int64 v36; // r8
  CCriticalFailureHandler *v37; // rcx
  __int64 v38; // r8
  CCriticalFailureHandler *v39; // rcx
  CCriticalFailureHandler *v40; // rcx
  CCriticalFailureHandler *v41; // rcx
  CApplicationManagerUtility *ForegroundWindow; // rax
  HWND v43; // rdx
  CApplicationManagerUtility *v44; // rsi
  CCriticalFailureHandler *v45; // rcx
  HRESULT (__stdcall *v46)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v47; // rcx
  CCriticalFailureHandler *v48; // rcx
  unsigned __int64 v49; // rcx
  CCriticalFailureHandler *v50; // rcx
  CCriticalFailureHandler *v51; // rcx
  CCriticalFailureHandler *v52; // rcx
  CCriticalFailureHandler *v53; // rcx
  HRESULT (__stdcall *v54)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v55; // rcx
  __int64 v56; // rcx
  volatile int *v57; // rdx
  void *v58; // rcx
  signed __int64 v59; // rax
  int v60; // r8d
  signed __int64 v61; // rtt
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  int v64; // edi
  const struct _GUID *v65; // rdx
  struct IImmersiveApplicationVisibilityOverride *v66; // rcx
  CCriticalFailureHandler *v67; // rcx
  CCriticalFailureHandler *v68; // rcx
  HRESULT (__stdcall *v69)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v70; // rcx
  int v71; // r8d
  int v72; // r9d
  CCriticalFailureHandler *v73; // rcx
  LSTATUS DWORD; // eax
  HWND v76; // rdx
  bool IsForcedAppWindow; // al
  unsigned __int64 v78; // rdx
  unsigned int v79; // eax
  char *v80; // rcx
  unsigned __int64 *v81; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v82; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v83; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v84; // [rsp+28h] [rbp-D8h]
  int v85; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v87; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v88; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v89; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v91; // [rsp+64h] [rbp-9Ch] BYREF
  void (__fastcall ***v92)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **); // [rsp+68h] [rbp-98h] BYREF
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  __int64 v94; // [rsp+78h] [rbp-88h] BYREF
  void *v95; // [rsp+80h] [rbp-80h] BYREF
  struct IViewEventDispatcherCrashRecovery *v96; // [rsp+88h] [rbp-78h] BYREF
  PVOID v97; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v98; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v99; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v100; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v101; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v102; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v103; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v104; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v105; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v106; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v107; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v108; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v109; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v110; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v111; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v112; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v113; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned int v114; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v115; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int v116; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v117; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v118; // [rsp+E8h] [rbp-18h] BYREF
  PVOID Ptr; // [rsp+F0h] [rbp-10h] BYREF
  struct IImmersiveMonitor *v120; // [rsp+F8h] [rbp-8h] BYREF
  char *v121; // [rsp+100h] [rbp+0h] BYREF
  __int128 v122; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v123[24]; // [rsp+118h] [rbp+18h]
  HSTRING string; // [rsp+130h] [rbp+30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+138h] [rbp+38h] BYREF
  HSTRING_HEADER v126; // [rsp+150h] [rbp+50h] BYREF
  __int64 v127; // [rsp+168h] [rbp+68h]
  char v128[16]; // [rsp+170h] [rbp+70h] BYREF
  char v129[16]; // [rsp+180h] [rbp+80h] BYREF

  v97 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v97);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, PVOID *))QueryService)(
                           a2,
                           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                           &GUID_52840c9b_dbca_427b_94cd_6989ee80a480,
                           &v97);
  v85 = PerMonitorComponents;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v107) >= 0 )
  {
    switch ( v107 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        v85 = -2023406815;
        goto LABEL_104;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_104;
    }
    v85 = PerMonitorComponents;
  }
LABEL_104:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_3;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xA09u,
      v81,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_3:
    v7 = v97;
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( CApplicationManagerUtility::g_pIAMGlobals[14].Ptr != v97 )
    {
      Ptr = v97;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
      Ptr = v8[14].Ptr;
      v8[14].Ptr = v7;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Ptr);
    }
  }
  v96 = 0LL;
  if ( PerMonitorComponents >= 0 )
  {
    v92 = 0LL;
    v9 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v92);
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void (__fastcall ****)(_QWORD, GUID *, struct IViewEventDispatcherCrashRecovery **)))v9)(
                             a2,
                             &SID_ViewEventDispatcher,
                             &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a,
                             &v92);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_7:
      if ( PerMonitorComponents < 0 )
      {
        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v10,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xA14u,
            v81,
            v84);
          PerMonitorComponents = v85;
        }
        if ( PerMonitorComponents < 0 )
          goto LABEL_15;
      }
      v11 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
      v12 = **v92;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v96);
      v12(v11, &GUID_58c1ac38_4edf_4ada_aa81_375958b4c848, &v96);
      *(_QWORD *)&v122 = CApplicationManager::_HandleViewEvent;
      DWORD2(v122) = 0;
      *(_QWORD *)v123 = (char *)this - 88;
      *(_OWORD *)&v123[8] = v122;
      v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( v13 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>(v13);
        v14[1] = *(_OWORD *)v123;
        *((_QWORD *)v14 + 4) = *(_QWORD *)&v123[16];
        *(_QWORD *)v14 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_618126d0e30524ea9a34e34e78b13d6b_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
      }
      else
      {
        v14 = 0LL;
      }
      *(_QWORD *)&v122 = v14;
      v15 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
      v16 = (*v92)[6];
      if ( WindowsCreateStringReference(
             L"Windows.Internal.ShellExperience.TopLevelApplication",
             0x34u,
             &hstringHeader,
             &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v84 = (unsigned __int64 *)((char *)this + 736);
      LODWORD(v81) = 35;
      PerMonitorComponents = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), _OWORD *, _QWORD, HSTRING))v16)(
                               v15,
                               v14,
                               0LL,
                               string);
      v85 = PerMonitorComponents;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_13:
        if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v17,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xA25u,
            v81,
            v84);
          PerMonitorComponents = v85;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v122);
LABEL_15:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v92);
        goto LABEL_16;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v109) < 0 )
      {
LABEL_108:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_13;
      }
      switch ( v109 )
      {
        case 2u:
          PerMonitorComponents = -2023406815;
          v85 = -2023406815;
          goto LABEL_108;
        case 3u:
          PerMonitorComponents = -2023406814;
          break;
        case 4u:
          PerMonitorComponents = -2147418094;
          break;
        case 5u:
          PerMonitorComponents = -2147022986;
          break;
        default:
          goto LABEL_108;
      }
      v85 = PerMonitorComponents;
      goto LABEL_108;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v108) < 0 )
    {
LABEL_106:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_7;
    }
    switch ( v108 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        v85 = -2023406815;
        goto LABEL_106;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_106;
    }
    v85 = PerMonitorComponents;
    goto LABEL_106;
  }
LABEL_16:
  v87 = 0LL;
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v18)(
                           a2,
                           &SID_ImmersiveShellHookService,
                           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                           &v87);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v110) < 0 )
    {
LABEL_110:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_18;
    }
    switch ( v110 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        v85 = -2023406815;
        goto LABEL_110;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_110;
    }
    v85 = PerMonitorComponents;
    goto LABEL_110;
  }
LABEL_18:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v19,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA2Fu,
        v81,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v82 = (unsigned __int64 *)((char *)this + 704);
  PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v87 + 24LL))(
                           v87,
                           &unk_1808155E0,
                           18LL,
                           ((unsigned __int64)this + 72) & -(__int64)(this != (CApplicationManager *)88));
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v112) < 0 )
    {
LABEL_112:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_20;
    }
    switch ( v112 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        v85 = -2023406815;
        goto LABEL_112;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_112;
    }
    v85 = PerMonitorComponents;
    goto LABEL_112;
  }
LABEL_20:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA4Cu,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  Microsoft::WRL::ComPtr<IImmersiveShellHookService>::operator=(*((_QWORD *)this + 89) + 8LL, v87);
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 65) + 24LL))(
                           *((_QWORD *)this + 65),
                           a2);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v113) < 0 )
    {
LABEL_114:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_22;
    }
    switch ( v113 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        v85 = -2023406815;
        goto LABEL_114;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_114;
    }
    v85 = PerMonitorComponents;
    goto LABEL_114;
  }
LABEL_22:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v21,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA59u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v22 = a2->lpVtbl->QueryService;
  v23 = (_QWORD *)((char *)this + 472);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 59);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
                           a2,
                           &SID_IImmersiveMonitorService,
                           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                           (char *)this + 472);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v114) < 0 )
    {
LABEL_116:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_24;
    }
    switch ( v114 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_116;
    }
    v85 = PerMonitorComponents;
    goto LABEL_116;
  }
LABEL_24:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v24,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA62u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v25 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 62);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v25)(
                           a2,
                           &SID_ProcessLifetimeManagerControl,
                           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
                           (char *)this + 496);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v115) < 0 )
    {
LABEL_118:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_26;
    }
    switch ( v115 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_118;
    }
    v85 = PerMonitorComponents;
    goto LABEL_118;
  }
LABEL_26:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v26,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA6Bu,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v27 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v27)(
                           a2,
                           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                           (char *)this + 672);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v116) < 0 )
    {
LABEL_120:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_28;
    }
    switch ( v116 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_120;
    }
    v85 = PerMonitorComponents;
    goto LABEL_120;
  }
LABEL_28:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v28,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA6Fu,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v120 = 0LL;
  v29 = *v23;
  v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v23 + 64LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v120);
  PerMonitorComponents = v30(v29, AddressOf);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v117) < 0 )
    {
LABEL_122:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_30;
    }
    switch ( v117 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_122;
    }
    v85 = PerMonitorComponents;
    goto LABEL_122;
  }
LABEL_30:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_31;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v32,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xA7Du,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_31:
    PerMonitorComponents = CApplicationManager::_CreatePerMonitorComponents(
                             (CApplicationManager *)((char *)this - 88),
                             a2,
                             v120);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_32:
      if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v33,
          &v85,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0xA80u,
          v82,
          v84);
        PerMonitorComponents = v85;
      }
      goto LABEL_33;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v118) < 0 )
    {
LABEL_124:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_32;
    }
    switch ( v118 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_124;
    }
    v85 = PerMonitorComponents;
    goto LABEL_124;
  }
LABEL_33:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v120);
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  v34 = (char *)this - 88;
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, unsigned __int64))(**((_QWORD **)this + 57) + 40LL))(
                           *((_QWORD *)this + 57),
                           a2,
                           -(__int64)(this != (CApplicationManager *)88) & ((unsigned __int64)this + 152));
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v98) < 0 )
    {
LABEL_126:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_35;
    }
    switch ( v98 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_126;
    }
    v85 = PerMonitorComponents;
    goto LABEL_126;
  }
LABEL_35:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v35,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA89u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_4af357ccee453ab968314d50ee13d106_Traceguids);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &MICROSOFT_TWINUI_PUBLISHER_Context,
      &ImmersiveShell_AppManager_Reconstitution_Start,
      v36,
      1LL,
      v128);
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 56LL))(*((_QWORD *)this + 65));
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v99) < 0 )
    {
LABEL_128:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_40;
    }
    switch ( v99 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_128;
    }
    v85 = PerMonitorComponents;
    goto LABEL_128;
  }
LABEL_40:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v37,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA93u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_48;
  }
  CApplicationManager::_RecoverApplicationViews((CApplicationManager *)((char *)this - 88), v96);
  PerMonitorComponents = RecoverApplicationWindows((struct IImmersiveShellHookNotification *)(((unsigned __int64)this
                                                                                             + 72) & -(__int64)(this != (CApplicationManager *)88)));
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v100) < 0 )
    {
LABEL_130:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_42;
    }
    switch ( v100 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_130;
    }
    v85 = PerMonitorComponents;
    goto LABEL_130;
  }
LABEL_42:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v39,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xA9Au,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_48;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 83) + 32LL))(*((_QWORD *)this + 83), v87);
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 60) + 24LL))(
                           *((_QWORD *)this + 60),
                           *v23,
                           v87);
  v85 = PerMonitorComponents;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_44;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v101) >= 0 )
  {
    switch ( v101 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_132;
    }
    v85 = PerMonitorComponents;
  }
LABEL_132:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_44:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_45;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v40,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xAA6u,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_45:
    PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 55) + 24LL))(
                             *((_QWORD *)this + 55),
                             *((_QWORD *)this + 60),
                             *v23);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_46:
      if ( PerMonitorComponents >= 0 )
        goto LABEL_47;
      if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v41,
          &v85,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0xAA9u,
          v82,
          v84);
        PerMonitorComponents = v85;
      }
      if ( PerMonitorComponents >= 0 )
      {
LABEL_47:
        ForegroundWindow = (CApplicationManagerUtility *)GetForegroundWindow();
        v44 = ForegroundWindow;
        if ( ForegroundWindow )
        {
          if ( !CApplicationManagerUtility::IsOwnedWindow(ForegroundWindow, v43)
            || (IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(v44, v76),
                v78 = 23LL,
                IsForcedAppWindow) )
          {
            v78 = 19LL;
          }
          CApplicationManager::OnShellHookMessage((CApplicationManager *)((char *)this + 72), v78, (RTL_SRWLOCK *)v44);
        }
      }
      goto LABEL_48;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v106) < 0 )
    {
LABEL_134:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_46;
    }
    switch ( v106 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_134;
    }
    v85 = PerMonitorComponents;
    goto LABEL_134;
  }
LABEL_48:
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &MICROSOFT_TWINUI_PUBLISHER_Context,
      &ImmersiveShell_AppManager_Reconstitution_Stop,
      v38,
      1LL,
      v129);
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 58) + 24LL))(
    *((_QWORD *)this + 58),
    a2);
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 62)
                                                                                              + 80LL))(
                           *((_QWORD *)this + 62),
                           7LL,
                           -(__int64)(this != (CApplicationManager *)88) & ((unsigned __int64)this + 176),
                           (char *)this + 724);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v102) < 0 )
    {
LABEL_136:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_52;
    }
    switch ( v102 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_136;
    }
    v85 = PerMonitorComponents;
    goto LABEL_136;
  }
LABEL_52:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v45,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xAD3u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v94 = 0LL;
  v46 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v94);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v46)(
                           a2,
                           &IID_IImmersiveSessionIdleDetector,
                           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                           &v94);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v103) < 0 )
    {
LABEL_138:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_54;
    }
    switch ( v103 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_138;
    }
    v85 = PerMonitorComponents;
    goto LABEL_138;
  }
LABEL_54:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_55;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v47,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xADBu,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_55:
    PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v94 + 32LL))(
                             v94,
                             ((unsigned __int64)this + 184) & -(__int64)(this != (CApplicationManager *)88),
                             (char *)this + 728);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_56:
      if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v48,
          &v85,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0xADEu,
          v82,
          v84);
        PerMonitorComponents = v85;
      }
      goto LABEL_57;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v104) < 0 )
    {
LABEL_140:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_56;
    }
    switch ( v104 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_140;
    }
    v85 = PerMonitorComponents;
    goto LABEL_140;
  }
LABEL_57:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v94);
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  v86 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v86);
  PerMonitorComponents = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v23)(
                           *v23,
                           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                           &v86);
  v85 = PerMonitorComponents;
  v49 = (unsigned int)PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v105);
    v49 = (unsigned int)PerMonitorComponents;
    if ( DWORD < 0 )
    {
LABEL_142:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_59;
    }
    v49 = (unsigned int)PerMonitorComponents;
    switch ( v105 )
    {
      case 2u:
        v79 = -2023406815;
        break;
      case 3u:
        v79 = -2023406814;
        break;
      case 4u:
        v79 = -2147418094;
        break;
      case 5u:
        v79 = -2147022986;
        break;
      default:
        goto LABEL_142;
    }
    v49 = v79;
    v85 = v79;
    PerMonitorComponents = v79;
    goto LABEL_142;
  }
LABEL_59:
  if ( (v49 & 0x80000000) != 0LL && (_DWORD)v49 != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v49,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xAE6u,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
    v95 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v95);
    PerMonitorComponents = CMonitorNotificationHelper::s_CreateInstance(
                             (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 120) & -(__int64)(this != (CApplicationManager *)88)),
                             (const struct _GUID *)((char *)this + 120),
                             &v95);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_62:
      if ( PerMonitorComponents < 0 )
      {
        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v50,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xAEBu,
            v82,
            v84);
          PerMonitorComponents = v85;
        }
        if ( PerMonitorComponents < 0 )
          goto LABEL_65;
      }
      PerMonitorComponents = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v86 + 24LL))(
                               v86,
                               v95,
                               (char *)this + 732);
      v85 = PerMonitorComponents;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_64:
        if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v51,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xAEEu,
            v82,
            v84);
          PerMonitorComponents = v85;
        }
LABEL_65:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v95);
        goto LABEL_66;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v88) < 0 )
      {
LABEL_146:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_64;
      }
      switch ( v88 )
      {
        case 2u:
          PerMonitorComponents = -2023406815;
          break;
        case 3u:
          PerMonitorComponents = -2023406814;
          break;
        case 4u:
          PerMonitorComponents = -2147418094;
          break;
        case 5u:
          PerMonitorComponents = -2147022986;
          break;
        default:
          goto LABEL_146;
      }
      v85 = PerMonitorComponents;
      goto LABEL_146;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v111) < 0 )
    {
LABEL_144:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_62;
    }
    switch ( v111 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_144;
    }
    v85 = PerMonitorComponents;
    goto LABEL_144;
  }
LABEL_66:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v86);
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  PerMonitorComponents = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 88LL))(*((_QWORD *)this + 64));
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v89) < 0 )
    {
LABEL_148:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_68;
    }
    switch ( v89 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_148;
    }
    v85 = PerMonitorComponents;
    goto LABEL_148;
  }
LABEL_68:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v52,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xAF6u,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v127 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v126,
    L"Windows.Internal.Shell.Holographic.ContextIdentifier",
    0x35u,
    0x34u);
  PerMonitorComponents = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
                           v127,
                           (char *)this + 688);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v90) < 0 )
    {
LABEL_150:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_70;
    }
    switch ( v90 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_150;
    }
    v85 = PerMonitorComponents;
    goto LABEL_150;
  }
LABEL_70:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v53,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xAFDu,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  v93 = 0LL;
  v54 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v93);
  PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v54)(
                           a2,
                           &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                           &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5,
                           &v93);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v91) < 0 )
    {
LABEL_152:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_72;
    }
    switch ( v91 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_152;
    }
    v85 = PerMonitorComponents;
    goto LABEL_152;
  }
LABEL_72:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_73;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v55,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xB04u,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_73:
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v56 = *((_QWORD *)this + 87);
    *((_QWORD *)this + 87) = v93;
    v93 = v56;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v93);
  if ( PerMonitorComponents < 0 )
    goto LABEL_102;
  CApplicationManager::_FinalizeApplicationRecovery((CApplicationManager *)((char *)this - 88));
  v58 = WPP_GLOBAL_Control;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_4af357ccee453ab968314d50ee13d106_Traceguids);
  BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
  if ( this == (CApplicationManager *)88 )
  {
    v121 = 0LL;
  }
  else
  {
    v59 = *((_QWORD *)v34 + 48);
    v60 = 0x7FFFFFFF;
    while ( v59 >= 0 )
    {
      if ( (_DWORD)v59 != 0x7FFFFFFF )
      {
        v61 = v59;
        v59 = _InterlockedCompareExchange64((volatile signed __int64 *)v34 + 48, v59 + 1, v59);
        if ( v61 != v59 )
          continue;
      }
      goto LABEL_81;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v59 + 16), v57);
LABEL_81:
    v121 = (char *)this - 88;
    v62 = *((_QWORD *)v34 + 48);
    while ( 1 )
    {
      v58 = (void *)((unsigned __int64)v62 >> 63);
      if ( v62 < 0 )
        break;
      if ( (_DWORD)v62 != v60 )
      {
        v58 = (void *)(v62 + 1);
        v63 = v62;
        v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v34 + 48, v62 + 1, v62);
        if ( v63 != v62 )
          continue;
      }
      goto LABEL_85;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v62 + 16), v57);
  }
LABEL_85:
  v64 = CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d___(v58, &v121);
  if ( v121 )
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::Release)();
  if ( v64 < 0 )
  {
    v80 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5;
    BYTE5(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
    WakeByAddressAll(v80);
  }
  if ( this != (CApplicationManager *)88 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::Release((char *)this - 88);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 82);
  v66 = (CApplicationManager *)((char *)this + 96);
  if ( this == (CApplicationManager *)88 )
    v66 = 0LL;
  PerMonitorComponents = CVisibilityOverride::s_CreateInstance(v66, v65, (void **)this + 82);
  v85 = PerMonitorComponents;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v91) < 0 )
    {
LABEL_154:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_94;
    }
    switch ( v91 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_154;
    }
    v85 = PerMonitorComponents;
    goto LABEL_154;
  }
LABEL_94:
  if ( PerMonitorComponents < 0 )
  {
    if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v67,
        &v85,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0xB2Fu,
        v82,
        v84);
      PerMonitorComponents = v85;
    }
    if ( PerMonitorComponents < 0 )
      goto LABEL_102;
  }
  PerMonitorComponents = IUnknown_SetSite(*((IUnknown **)this + 82), (IUnknown *)this - 11);
  v85 = PerMonitorComponents;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_96;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v90) >= 0 )
  {
    switch ( v90 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_156;
    }
    v85 = PerMonitorComponents;
  }
LABEL_156:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_96:
  if ( PerMonitorComponents >= 0 )
    goto LABEL_97;
  if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v68,
      &v85,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0xB32u,
      v82,
      v84);
    PerMonitorComponents = v85;
  }
  if ( PerMonitorComponents >= 0 )
  {
LABEL_97:
    v86 = 0LL;
    v69 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v86);
    PerMonitorComponents = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v69)(
                             a2,
                             &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                             &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                             &v86);
    v85 = PerMonitorComponents;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_98:
      if ( PerMonitorComponents < 0 )
      {
        if ( PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v70,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xB3Bu,
            v82,
            v84);
          PerMonitorComponents = v85;
        }
        if ( PerMonitorComponents < 0 )
          goto LABEL_101;
      }
      PerMonitorComponents = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),CApplicationManager *>(
                               (int)this + 744,
                               v86,
                               v71,
                               v72,
                               (__int64)this - 88);
      v85 = PerMonitorComponents;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_100:
        if ( PerMonitorComponents < 0 && PerMonitorComponents != -2147024882 && PerMonitorComponents != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v73,
            &v85,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0xB42u,
            v83,
            v84);
          PerMonitorComponents = v85;
        }
LABEL_101:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v86);
        goto LABEL_102;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v88) < 0 )
      {
LABEL_160:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_100;
      }
      switch ( v88 )
      {
        case 2u:
          PerMonitorComponents = -2023406815;
          break;
        case 3u:
          PerMonitorComponents = -2023406814;
          break;
        case 4u:
          PerMonitorComponents = -2147418094;
          break;
        case 5u:
          PerMonitorComponents = -2147022986;
          break;
        default:
          goto LABEL_160;
      }
      v85 = PerMonitorComponents;
      goto LABEL_160;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v89) < 0 )
    {
LABEL_158:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_98;
    }
    switch ( v89 )
    {
      case 2u:
        PerMonitorComponents = -2023406815;
        break;
      case 3u:
        PerMonitorComponents = -2023406814;
        break;
      case 4u:
        PerMonitorComponents = -2147418094;
        break;
      case 5u:
        PerMonitorComponents = -2147022986;
        break;
      default:
        goto LABEL_158;
    }
    v85 = PerMonitorComponents;
    goto LABEL_158;
  }
LABEL_102:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v96);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v97);
  return (unsigned int)PerMonitorComponents;
}
