/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019FC2C (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800AD02C (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801082B4 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013E730 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013E880 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x18013E948 (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013EA5C (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013EC9C (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18018CAF0 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x180191BF8 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180191D88 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1801938DC (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180195928 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180197278 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180198C80 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180198FDC (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18019B1A8 (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019C194 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019C884 (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B346C (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
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
  struct IVirtualDesktopManagerPrivate **v25; // r14
  CCriticalFailureHandler *v26; // rcx
  __int64 v27; // r9
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
  struct IUnknown *v46; // r9
  CCriticalFailureHandler *v47; // rcx
  __int64 *v48; // rdi
  CCriticalFailureHandler *v49; // rcx
  CVirtualDesktopComponent *v50; // rbx
  void **v51; // rsi
  struct IVirtualDesktopWindowMoveManager *v52; // r9
  __int64 *v53; // rdi
  CCriticalFailureHandler *v54; // rcx
  CCriticalFailureHandler *v55; // rcx
  LSTATUS DWORD; // eax
  __int64 v58; // rdx
  unsigned int v59; // edi
  __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // esi
  unsigned __int64 *v63; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v64; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v65; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v66; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v67; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v68; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v69; // [rsp+30h] [rbp-D8h]
  const struct _GUID *v70; // [rsp+40h] [rbp-C8h]
  int v71; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v72; // [rsp+5Ch] [rbp-ACh] BYREF
  char v73; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+64h] [rbp-A4h] BYREF
  struct IVirtualDesktopCollection *v75; // [rsp+68h] [rbp-A0h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v76; // [rsp+70h] [rbp-98h] BYREF
  struct IVirtualDesktopNotification *v77; // [rsp+78h] [rbp-90h] BYREF
  struct IVirtualDesktopPersistence *v78; // [rsp+80h] [rbp-88h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v79; // [rsp+88h] [rbp-80h] BYREF
  struct IVirtualDesktopFactory *v80; // [rsp+90h] [rbp-78h] BYREF
  CVirtualDesktopComponent *v81; // [rsp+98h] [rbp-70h]
  __int128 v82; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-50h]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  __int128 v85; // [rsp+C8h] [rbp-40h]
  __int64 v86; // [rsp+D8h] [rbp-30h]
  __int64 v87; // [rsp+E0h] [rbp-28h]
  __int128 v88; // [rsp+E8h] [rbp-20h]
  struct IVirtualDesktopNotification *v89; // [rsp+F8h] [rbp-10h]
  __int64 v90; // [rsp+100h] [rbp-8h]
  GUID v91; // [rsp+108h] [rbp+0h]
  void *v92; // [rsp+118h] [rbp+10h]
  __int64 v93; // [rsp+120h] [rbp+18h]
  __int128 v94; // [rsp+128h] [rbp+20h]
  __int64 v95; // [rsp+138h] [rbp+30h]
  __int64 v96; // [rsp+140h] [rbp+38h]
  __int128 v97; // [rsp+148h] [rbp+40h]
  __int64 v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  GUID v100; // [rsp+168h] [rbp+60h]
  __int64 v101; // [rsp+178h] [rbp+70h]
  __int64 v102; // [rsp+180h] [rbp+78h]
  __int128 v103; // [rsp+188h] [rbp+80h]
  void *v104; // [rsp+198h] [rbp+90h]
  __int64 v105; // [rsp+1A0h] [rbp+98h]
  __int128 v106; // [rsp+1A8h] [rbp+A0h]
  __int64 v107; // [rsp+1B8h] [rbp+B0h]
  __int64 v108; // [rsp+1C0h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v81 = this;
  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  v71 = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) >= 0 )
  {
    switch ( v72 )
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
    v71 = Instance;
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
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x43u,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v63);
      return (unsigned int)Instance;
    }
  }
  UniqueContext = SHTaskPoolGetUniqueContext();
  v77 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v77);
  Instance = CVirtualDesktopNotifications_CreateInstance(
               UniqueContext,
               (struct IVirtualDesktopLock *)*v2,
               v7,
               (void **)&v77);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_61:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_4;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_61;
  }
LABEL_4:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x49u,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v63);
      goto LABEL_56;
    }
  }
  v76 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v76);
  Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v77, v9, (void **)&v76);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_63:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_6;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_63;
  }
LABEL_6:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Du,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v63);
      goto LABEL_55;
    }
  }
  v80 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v80);
  Instance = CVirtualDesktopFactory_CreateInstance(v76, (struct IVirtualDesktopLock *)*v2, v11, (void **)&v80);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_65:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_8;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_65;
  }
LABEL_8:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v12,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x51u,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v58 = 81LL;
LABEL_172:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v63);
      goto LABEL_54;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 30);
  Instance = VirtualDesktopRegistryHelpers_CreateInstance(v13, (void **)this + 30);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_67:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_67;
  }
LABEL_10:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v14,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x54u,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v58 = 84LL;
      goto LABEL_172;
    }
  }
  v78 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
  Instance = CVirtualDesktopComponent::CreatePersistence(
               v15,
               *((struct IVirtualDesktopRegistryHelpers **)this + 30),
               &v78);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_69:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_12;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_69;
  }
LABEL_12:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v16,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x58u,
        v63,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v63);
      goto LABEL_53;
    }
  }
  v75 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v75);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v18 = IsBiDiLocale(ThreadUILanguage_0);
  Instance = CVirtualDesktopCollection_CreateInstance(v80, v78, v18 != 0, v19, (void **)&v75);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_71:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_14;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_71;
  }
LABEL_14:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Cu,
        v64,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v64);
      goto LABEL_52;
    }
  }
  v79 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
  Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v21, (void **)&v79);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_73:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_16;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_73;
  }
LABEL_16:
  if ( Instance < 0 )
  {
    v59 = 96;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v22,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x60u,
        v64,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v75, v76, v79, v23, (void **)this + 19);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_75:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_18;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_75;
  }
LABEL_18:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v24,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x66u,
        v64,
        v65);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v60 = 102LL;
LABEL_410:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v60,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance,
        (int)v64);
      goto LABEL_51;
    }
  }
  v25 = (struct IVirtualDesktopManagerPrivate **)((char *)this + 160);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  Instance = CVirtualDesktopManager_CreateInstance(
               v75,
               v76,
               v77,
               *((struct IVirtualDesktopForegroundPolicy **)this + 19),
               v78,
               (struct IUnknown *)v65,
               (struct IVirtualDesktopLock *)*v2,
               v70,
               (void **)this + 20);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_77:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_20;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_77;
  }
LABEL_20:
  if ( Instance < 0 )
  {
    v59 = 112;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v26,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x70u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)v26, &v73, (__int64)&v74, v27);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_79:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_22;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_79;
  }
LABEL_22:
  if ( Instance < 0 )
  {
    v59 = 116;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v28,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x74u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  v74 &= -(v73 != 0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  v64 = (unsigned __int64 *)*v2;
  Instance = VirtualDesktopTabletModePolicy_CreateInstance(v74, v75, *v25, v76);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_81:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_24;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_81;
  }
LABEL_24:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v29,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x81u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v60 = 129LL;
      goto LABEL_410;
    }
  }
  v64 = (unsigned __int64 *)*((_QWORD *)this + 26);
  Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, struct IVirtualDesktopManagerPrivate *, struct IVirtualDesktopCollection *))(*(_QWORD *)v78 + 40LL))(
               v78,
               v74,
               *v25,
               v75);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_83:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_26;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_83;
  }
LABEL_26:
  if ( Instance < 0 )
  {
    v59 = 133;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v31,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x85u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  v32 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v30, (void **)this + 21);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_85:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_30;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_85;
  }
LABEL_30:
  if ( Instance < 0 )
  {
    v59 = 137;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v33,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x89u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  v35 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
               *v25,
               (struct IVirtualDesktopLock *)*v2,
               v34,
               (void **)this + 23);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_87:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_34;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_87;
  }
LABEL_34:
  if ( Instance < 0 )
  {
    v59 = 142;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v36,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Eu,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_409;
  }
  v37 = v77;
  v38 = **(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, char *))v77;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  Instance = v38(v37, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68, (char *)this + 248);
  v71 = Instance;
  v39 = (unsigned int)Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72);
    v39 = (unsigned int)Instance;
    if ( DWORD < 0 )
    {
LABEL_89:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_36;
    }
    v39 = (unsigned int)Instance;
    switch ( v72 )
    {
      case 2u:
        v61 = -2023406815;
        break;
      case 3u:
        v61 = -2023406814;
        break;
      case 4u:
        v61 = -2147418094;
        break;
      case 5u:
        v61 = -2147022986;
        break;
      default:
        goto LABEL_89;
    }
    v39 = v61;
    v71 = v61;
    Instance = v61;
    goto LABEL_89;
  }
LABEL_36:
  if ( (v39 & 0x80000000) != 0LL && (_DWORD)v39 != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v39,
      &v71,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0x90u,
      v64,
      v66);
    Instance = v71;
  }
  if ( Instance < 0 )
  {
    v60 = 144LL;
    goto LABEL_410;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  v64 = (unsigned __int64 *)*((_QWORD *)this + 18);
  Instance = VirtualDesktopAcessibility_CreateInstance(v74, *((_QWORD *)this + 31), v75, *v25);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_91:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_39;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_91;
  }
LABEL_39:
  if ( Instance < 0 )
  {
    v62 = 153;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v40,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x99u,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_339;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Instance = VirtualDesktopGestureHandler_CreateInstance(*v25, v41, (void **)this + 28);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_93:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_41;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_93;
  }
LABEL_41:
  if ( Instance < 0 )
  {
    v62 = 155;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v42,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x9Bu,
        v64,
        v66);
      Instance = v71;
    }
    if ( Instance < 0 )
      goto LABEL_339;
  }
  v43 = (struct IVirtualDesktopLock **)v81;
  v44 = (void **)((char *)v81 + 216);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v81 + 27);
  v45 = v43 + 20;
  Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
               v43[20],
               v43[30],
               v76,
               v46,
               v43[18],
               (const struct _GUID *)v66,
               v44);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_95:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_43;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_95;
  }
LABEL_43:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v47,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA3u,
        v64,
        v67);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v60 = 163LL;
      goto LABEL_410;
    }
  }
  v48 = (__int64 *)(v43 + 24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v48);
  Instance = VirtualDesktopWindowMoveManager_CreateInstance(
               *v45,
               v75,
               v76,
               (struct IVirtualDesktopPinnedAppsPrivate *)*v44,
               (const struct _GUID *)v64,
               (void **)v48);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_97:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_45;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_97;
  }
LABEL_45:
  if ( Instance < 0 )
  {
    v62 = 170;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v49,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xAAu,
        v64,
        v68);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
LABEL_339:
      v60 = v62;
      goto LABEL_410;
    }
  }
  v50 = v81;
  v51 = (void **)((char *)v81 + 200);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v81 + 25);
  v52 = (struct IVirtualDesktopWindowMoveManager *)*v48;
  v53 = (__int64 *)((char *)v50 + 160);
  Instance = VirtualDesktopsApi_CreateInstance(
               *((struct IVirtualDesktopManagerPrivate **)v50 + 20),
               v75,
               v76,
               v52,
               *((struct IVirtualDesktopLock **)v50 + 18),
               (const struct _GUID *)v68,
               v51);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_99:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_47;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_99;
  }
LABEL_47:
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v54,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xB2u,
        v64,
        v69);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
      v60 = 178LL;
      goto LABEL_410;
    }
  }
  v82 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
  v83 = *v53;
  v84 = 0LL;
  v85 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
  v86 = *((_QWORD *)this + 23);
  v87 = 0LL;
  v88 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
  v89 = v77;
  v90 = 0LL;
  v91 = IID_IVirtualDesktopManager;
  v92 = *v51;
  v93 = 0LL;
  v94 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
  v95 = *((_QWORD *)v81 + 21);
  v96 = 0LL;
  v97 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
  v98 = *((_QWORD *)v81 + 26);
  v99 = 0LL;
  v100 = IID_IVirtualDesktopAccessibility;
  v101 = *((_QWORD *)this + 29);
  v102 = 0LL;
  v103 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
  v104 = *v44;
  v105 = 0LL;
  v106 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
  v107 = *((_QWORD *)this + 28);
  v108 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CVirtualDesktopComponent *)((char *)v81 + 40),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v82,
               9u);
  v71 = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v72) < 0 )
    {
LABEL_101:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    switch ( v72 )
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
    v71 = Instance;
    goto LABEL_101;
  }
LABEL_49:
  if ( Instance < 0 )
  {
    v59 = 192;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v55,
        &v71,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xC0u,
        v64,
        v69);
      Instance = v71;
    }
    if ( Instance < 0 )
    {
LABEL_409:
      v60 = v59;
      goto LABEL_410;
    }
  }
  Instance = 0;
LABEL_51:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
LABEL_52:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v75);
LABEL_53:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v78);
LABEL_54:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v80);
LABEL_55:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v76);
LABEL_56:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v77);
  return (unsigned int)Instance;
}
