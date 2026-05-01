/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180167EAC (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A8480 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B5868 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA494 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800E1674 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD510 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180101A54 (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180101DE4 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180110380 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110458 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110C88 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180110D50 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110EB4 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18011103C (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180111114 (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18011122C (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18014760C (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18015AAB0 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18016443C (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18016529C (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801657CC (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopComponent::RuntimeClassInitialize(CVirtualDesktopComponent *this)
{
  void **v2; // r12
  const struct _GUID *v3; // rcx
  CCriticalFailureHandler *v4; // rcx
  int Instance; // ebx
  unsigned int UniqueContext; // esi
  const struct _GUID *v7; // r8
  CCriticalFailureHandler *v8; // rcx
  const struct _GUID *v9; // rdx
  CCriticalFailureHandler *v10; // rcx
  const struct _GUID *v11; // r8
  CCriticalFailureHandler *v12; // rcx
  const struct _GUID *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CVirtualDesktopComponent *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  LANGID ThreadUILanguage_0; // ax
  int v18; // eax
  const struct _GUID *v19; // r9
  CCriticalFailureHandler *v20; // rcx
  const struct _GUID *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  const struct _GUID *v23; // r9
  CCriticalFailureHandler *v24; // rcx
  __int64 v25; // r9
  struct IVirtualDesktopManagerPrivate **v26; // r14
  CCriticalFailureHandler *v27; // rcx
  CCriticalFailureHandler *v28; // rcx
  CCriticalFailureHandler *v29; // rcx
  const struct _GUID *v30; // rdx
  CCriticalFailureHandler *v31; // rcx
  __int64 v32; // rcx
  CCriticalFailureHandler *v33; // rcx
  const struct _GUID *v34; // r8
  __int64 v35; // rcx
  CCriticalFailureHandler *v36; // rcx
  struct IVirtualDesktopNotification *v37; // rbx
  __int64 (__fastcall *v38)(struct IVirtualDesktopNotification *, GUID *, char *); // rdi
  unsigned __int64 v39; // rcx
  CCriticalFailureHandler *v40; // rcx
  const struct _GUID *v41; // rdx
  CCriticalFailureHandler *v42; // rcx
  struct IVirtualDesktopLock **v43; // rdi
  void **v44; // r14
  struct IVirtualDesktopManagerPrivate **v45; // rsi
  CCriticalFailureHandler *v46; // rcx
  __int64 *v47; // rdi
  CCriticalFailureHandler *v48; // rcx
  CVirtualDesktopComponent *v49; // rbx
  void **v50; // rsi
  struct IVirtualDesktopWindowMoveManager *v51; // r9
  __int64 *v52; // rdi
  CCriticalFailureHandler *v53; // rcx
  CCriticalFailureHandler *v54; // rcx
  int DWORD; // eax
  __int64 v57; // rdx
  unsigned int v58; // edi
  __int64 v59; // rdx
  unsigned int v60; // eax
  unsigned int v61; // esi
  unsigned __int64 *v62; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v63; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v64; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v65; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v66; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v67; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v68; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v69; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v70; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v71; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v72; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v73; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v74; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v75; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v76; // [rsp+30h] [rbp-D8h]
  const struct _GUID *v77; // [rsp+40h] [rbp-C8h]
  int v78; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v79; // [rsp+5Ch] [rbp-ACh] BYREF
  char v80; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-A4h] BYREF
  struct IVirtualDesktopCollection *v82; // [rsp+68h] [rbp-A0h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v83; // [rsp+70h] [rbp-98h] BYREF
  struct IVirtualDesktopNotification *v84; // [rsp+78h] [rbp-90h] BYREF
  struct IVirtualDesktopPersistence *v85; // [rsp+80h] [rbp-88h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v86; // [rsp+88h] [rbp-80h] BYREF
  struct IVirtualDesktopFactory *v87; // [rsp+90h] [rbp-78h] BYREF
  CVirtualDesktopComponent *v88; // [rsp+98h] [rbp-70h]
  __int128 v89; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int64 v91; // [rsp+C0h] [rbp-48h]
  __int128 v92; // [rsp+C8h] [rbp-40h]
  __int64 v93; // [rsp+D8h] [rbp-30h]
  __int64 v94; // [rsp+E0h] [rbp-28h]
  __int128 v95; // [rsp+E8h] [rbp-20h]
  struct IVirtualDesktopNotification *v96; // [rsp+F8h] [rbp-10h]
  __int64 v97; // [rsp+100h] [rbp-8h]
  GUID v98; // [rsp+108h] [rbp+0h]
  void *v99; // [rsp+118h] [rbp+10h]
  __int64 v100; // [rsp+120h] [rbp+18h]
  __int128 v101; // [rsp+128h] [rbp+20h]
  __int64 v102; // [rsp+138h] [rbp+30h]
  __int64 v103; // [rsp+140h] [rbp+38h]
  __int128 v104; // [rsp+148h] [rbp+40h]
  __int64 v105; // [rsp+158h] [rbp+50h]
  __int64 v106; // [rsp+160h] [rbp+58h]
  GUID v107; // [rsp+168h] [rbp+60h]
  __int64 v108; // [rsp+178h] [rbp+70h]
  __int64 v109; // [rsp+180h] [rbp+78h]
  __int128 v110; // [rsp+188h] [rbp+80h]
  void *v111; // [rsp+198h] [rbp+90h]
  __int64 v112; // [rsp+1A0h] [rbp+98h]
  __int128 v113; // [rsp+1A8h] [rbp+A0h]
  __int64 v114; // [rsp+1B8h] [rbp+B0h]
  __int64 v115; // [rsp+1C0h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v88 = this;
  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  v78 = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) >= 0 )
  {
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_59;
    }
    v78 = Instance;
  }
LABEL_59:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x45u,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  UniqueContext = SHTaskPoolGetUniqueContext();
  v84 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v84);
  Instance = CVirtualDesktopNotifications_CreateInstance(
               UniqueContext,
               (struct IVirtualDesktopLock *)*v2,
               v7,
               (void **)&v84);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_61:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_4;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_61;
    }
    v78 = Instance;
    goto LABEL_61;
  }
LABEL_4:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Bu,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_56;
    }
  }
  v83 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v83);
  Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v84, v9, (void **)&v83);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_63:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_6;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_63;
    }
    v78 = Instance;
    goto LABEL_63;
  }
LABEL_6:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Fu,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_55;
    }
  }
  v87 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v87);
  Instance = CVirtualDesktopFactory_CreateInstance(v83, (struct IVirtualDesktopLock *)*v2, v11, (void **)&v87);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_65:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_8;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_65;
    }
    v78 = Instance;
    goto LABEL_65;
  }
LABEL_8:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v12,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x53u,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v57 = 83LL;
LABEL_172:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v57,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_54;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
  Instance = VirtualDesktopRegistryHelpers_CreateInstance(v13, (void **)this + 33);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_67:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_67;
    }
    v78 = Instance;
    goto LABEL_67;
  }
LABEL_10:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v14,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x56u,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v57 = 86LL;
      goto LABEL_172;
    }
  }
  v85 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
  Instance = CVirtualDesktopComponent::CreatePersistence(
               v15,
               *((struct IVirtualDesktopRegistryHelpers **)this + 33),
               &v85);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_69:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_12;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_69;
    }
    v78 = Instance;
    goto LABEL_69;
  }
LABEL_12:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v16,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Au,
        v62,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_53;
    }
  }
  v82 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v82);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v18 = IsBiDiLocale(ThreadUILanguage_0);
  Instance = CVirtualDesktopCollection_CreateInstance(v87, v85, v18 != 0, v19, (void **)&v82);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_71:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_14;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_71;
    }
    v78 = Instance;
    goto LABEL_71;
  }
LABEL_14:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Eu,
        v63,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_52;
    }
  }
  v86 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v86);
  Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v21, (void **)&v86);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_73:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_16;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_73;
    }
    v78 = Instance;
    goto LABEL_73;
  }
LABEL_16:
  if ( Instance < 0 )
  {
    v58 = 98;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v22,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x62u,
        v63,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v82, v83, v86, v23, (void **)this + 19);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_75:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_18;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_75;
    }
    v78 = Instance;
    goto LABEL_75;
  }
LABEL_18:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v24,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x68u,
        v64,
        v72);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v59 = 104LL;
LABEL_411:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v59,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_51;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u,
    v25);
  v26 = (struct IVirtualDesktopManagerPrivate **)((char *)this + 160);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  Instance = CVirtualDesktopManager_CreateInstance(
               v82,
               v83,
               v84,
               *((struct IVirtualDesktopForegroundPolicy **)this + 19),
               v85,
               *((struct IVirtualDesktopGroupedViewsPolicy **)this + 32),
               (struct IVirtualDesktopLock *)*v2,
               v77,
               (void **)this + 20);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_77:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_20;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_77;
    }
    v78 = Instance;
    goto LABEL_77;
  }
LABEL_20:
  if ( Instance < 0 )
  {
    v58 = 126;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v27,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x7Eu,
        v65,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>(v27, &v80, &v81);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_79:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_22;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_79;
    }
    v78 = Instance;
    goto LABEL_79;
  }
LABEL_22:
  if ( Instance < 0 )
  {
    v58 = 130;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v28,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x82u,
        v65,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  v81 &= -(v80 != 0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  v66 = (unsigned __int64 *)*v2;
  Instance = VirtualDesktopTabletModePolicy_CreateInstance(v81, v82, *v26, v83);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_81:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_24;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_81;
    }
    v78 = Instance;
    goto LABEL_81;
  }
LABEL_24:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v29,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Fu,
        v66,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v59 = 143LL;
      goto LABEL_411;
    }
  }
  v67 = (unsigned __int64 *)*((_QWORD *)this + 26);
  Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, struct IVirtualDesktopManagerPrivate *, struct IVirtualDesktopCollection *))(*(_QWORD *)v85 + 40LL))(
               v85,
               v81,
               *v26,
               v82);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_83:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_26;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_83;
    }
    v78 = Instance;
    goto LABEL_83;
  }
LABEL_26:
  if ( Instance < 0 )
  {
    v58 = 147;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v31,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x93u,
        v67,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  v32 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v30, (void **)this + 21);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_85:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_30;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_85;
    }
    v78 = Instance;
    goto LABEL_85;
  }
LABEL_30:
  if ( Instance < 0 )
  {
    v58 = 151;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v33,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x97u,
        v67,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  v35 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
               *v26,
               (struct IVirtualDesktopLock *)*v2,
               v34,
               (void **)this + 23);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_87:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_34;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_87;
    }
    v78 = Instance;
    goto LABEL_87;
  }
LABEL_34:
  if ( Instance < 0 )
  {
    v58 = 156;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v36,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x9Cu,
        v67,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_410;
  }
  v37 = v84;
  v38 = **(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, char *))v84;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  Instance = v38(v37, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68, (char *)this + 272);
  v78 = Instance;
  v39 = (unsigned int)Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79);
    v39 = (unsigned int)Instance;
    if ( DWORD < 0 )
    {
LABEL_89:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_36;
    }
    v39 = (unsigned int)Instance;
    switch ( v79 )
    {
      case 2u:
        v60 = -2023406815;
        break;
      case 3u:
        v60 = -2023406814;
        break;
      case 4u:
        v60 = -2147418094;
        break;
      case 5u:
        v60 = -2147022986;
        break;
      default:
        goto LABEL_89;
    }
    v39 = v60;
    v78 = v60;
    Instance = v60;
    goto LABEL_89;
  }
LABEL_36:
  if ( (v39 & 0x80000000) != 0LL && (_DWORD)v39 != -2147024882 && (_DWORD)v39 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v39,
      &v78,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x9Eu,
      v67,
      v73);
    Instance = v78;
  }
  if ( Instance < 0 )
  {
    v59 = 158LL;
    goto LABEL_411;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  v68 = (unsigned __int64 *)*((_QWORD *)this + 18);
  Instance = VirtualDesktopAcessibility_CreateInstance(v81, *((_QWORD *)this + 34), v82, *v26);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_91:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_39;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_91;
    }
    v78 = Instance;
    goto LABEL_91;
  }
LABEL_39:
  if ( Instance < 0 )
  {
    v61 = 167;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v40,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA7u,
        v68,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_340;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Instance = VirtualDesktopGestureHandler_CreateInstance(*v26, v41, (void **)this + 28);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_93:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_41;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_93;
    }
    v78 = Instance;
    goto LABEL_93;
  }
LABEL_41:
  if ( Instance < 0 )
  {
    v61 = 169;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v42,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA9u,
        v68,
        v73);
      Instance = v78;
    }
    if ( Instance < 0 )
      goto LABEL_340;
  }
  v43 = (struct IVirtualDesktopLock **)v88;
  v44 = (void **)((char *)v88 + 216);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v88 + 27);
  v45 = v43 + 20;
  Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
               v43[20],
               v43[33],
               v83,
               v43[32],
               v43[18],
               (const struct _GUID *)v73,
               v44);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_95:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_43;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_95;
    }
    v78 = Instance;
    goto LABEL_95;
  }
LABEL_43:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v46,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xB1u,
        v69,
        v74);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v59 = 177LL;
      goto LABEL_411;
    }
  }
  v47 = (__int64 *)(v43 + 24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v47);
  Instance = VirtualDesktopWindowMoveManager_CreateInstance(
               *v45,
               v82,
               v83,
               (struct IVirtualDesktopPinnedAppsPrivate *)*v44,
               (const struct _GUID *)v69,
               (void **)v47);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_97:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_45;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_97;
    }
    v78 = Instance;
    goto LABEL_97;
  }
LABEL_45:
  if ( Instance < 0 )
  {
    v61 = 184;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v48,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xB8u,
        v70,
        v75);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
LABEL_340:
      v59 = v61;
      goto LABEL_411;
    }
  }
  v49 = v88;
  v50 = (void **)((char *)v88 + 200);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v88 + 25);
  v51 = (struct IVirtualDesktopWindowMoveManager *)*v47;
  v52 = (__int64 *)((char *)v49 + 160);
  Instance = VirtualDesktopsApi_CreateInstance(
               *((struct IVirtualDesktopManagerPrivate **)v49 + 20),
               v82,
               v83,
               v51,
               *((struct IVirtualDesktopLock **)v49 + 18),
               (const struct _GUID *)v75,
               v50);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_99:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_47;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_99;
    }
    v78 = Instance;
    goto LABEL_99;
  }
LABEL_47:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v53,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xC0u,
        v71,
        v76);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
      v59 = 192LL;
      goto LABEL_411;
    }
  }
  v89 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
  v90 = *v52;
  v91 = 0LL;
  v92 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
  v93 = *((_QWORD *)this + 23);
  v94 = 0LL;
  v95 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
  v96 = v84;
  v97 = 0LL;
  v98 = IID_IVirtualDesktopManager;
  v99 = *v50;
  v100 = 0LL;
  v101 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
  v102 = *((_QWORD *)v88 + 21);
  v103 = 0LL;
  v104 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
  v105 = *((_QWORD *)v88 + 26);
  v106 = 0LL;
  v107 = IID_IVirtualDesktopAccessibility;
  v108 = *((_QWORD *)this + 29);
  v109 = 0LL;
  v110 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
  v111 = *v44;
  v112 = 0LL;
  v113 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
  v114 = *((_QWORD *)this + 28);
  v115 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CVirtualDesktopComponent *)((char *)v88 + 40),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v89,
               9uLL);
  v78 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v79) < 0 )
    {
LABEL_101:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    switch ( v79 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_101;
    }
    v78 = Instance;
    goto LABEL_101;
  }
LABEL_49:
  if ( Instance < 0 )
  {
    v58 = 206;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v54,
        &v78,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xCEu,
        v71,
        v76);
      Instance = v78;
    }
    if ( Instance < 0 )
    {
LABEL_410:
      v59 = v58;
      goto LABEL_411;
    }
  }
  Instance = 0;
LABEL_51:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v86);
LABEL_52:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v82);
LABEL_53:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
LABEL_54:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v87);
LABEL_55:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v83);
LABEL_56:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v84);
  return (unsigned int)Instance;
}
