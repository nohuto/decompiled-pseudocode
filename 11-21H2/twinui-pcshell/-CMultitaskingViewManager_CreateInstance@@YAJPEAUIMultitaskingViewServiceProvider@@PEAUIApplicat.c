/*
 * XREFs of ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@AEBU_GUID@@PEAPEAX@Z @ 0x180116190
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18011546C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x180116350 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802317C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager_CreateInstance(
        struct IMultitaskingViewServiceProvider *a1,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IApplicationViewSwitcher *a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct ITabletModeController *a7,
        struct IVirtualDesktopNotificationService *a8,
        struct IImmersiveAppCrusher *a9,
        struct IMultitaskingViewVisibilityServiceInternal *a10,
        struct IMultitaskingViewGestureState *a11,
        struct IImmersiveSettingsCache *a12,
        struct ITabletModeViewManager *a13,
        struct IShellTargetingContractManager *a14,
        struct ISnapServiceProvider *a15,
        struct IApplicationViewIconLoader *a16,
        struct IInspectable *a17,
        struct IInspectable *a18,
        struct IImmersiveMonitorManager *a19,
        struct IXamlExplorerHost *a20,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a21,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a22,
        struct ITabViewManager *a23,
        struct ITouchGestureSettings *a24,
        struct IImmersiveShellHookService *a25,
        const struct _GUID *a26,
        void **a27)
{
  void **v27; // rdi
  int v28; // eax
  int CanCastTo; // ebx
  _DWORD *v30; // rcx
  _DWORD *v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v34; // r9
  __int64 v35; // rdx
  void **v36; // rcx
  int v37[2]; // [rsp+20h] [rbp-C9h] BYREF
  struct IApplicationViewCollection *v38; // [rsp+28h] [rbp-C1h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v39; // [rsp+30h] [rbp-B9h]
  struct IApplicationViewSwitcher *v40; // [rsp+38h] [rbp-B1h]
  struct IVirtualDesktopManagerInternal *v41; // [rsp+40h] [rbp-A9h]
  struct IVirtualDesktopPinnedApps *v42; // [rsp+48h] [rbp-A1h]
  struct ITabletModeController *v43; // [rsp+50h] [rbp-99h]
  struct IVirtualDesktopNotificationService *v44; // [rsp+58h] [rbp-91h]
  struct IImmersiveAppCrusher *v45; // [rsp+60h] [rbp-89h]
  struct IMultitaskingViewVisibilityServiceInternal *v46; // [rsp+68h] [rbp-81h]
  struct IMultitaskingViewGestureState *v47; // [rsp+70h] [rbp-79h]
  struct IImmersiveSettingsCache *v48; // [rsp+78h] [rbp-71h]
  struct ITabletModeViewManager *v49; // [rsp+80h] [rbp-69h]
  struct IShellTargetingContractManager *v50; // [rsp+88h] [rbp-61h]
  struct ISnapServiceProvider *v51; // [rsp+90h] [rbp-59h]
  struct IApplicationViewIconLoader *v52; // [rsp+98h] [rbp-51h]
  struct IImmersiveMonitorManager *v53; // [rsp+A0h] [rbp-49h]
  struct IXamlExplorerHost *v54; // [rsp+A8h] [rbp-41h]
  struct IInspectable *v55; // [rsp+B0h] [rbp-39h]
  struct IInspectable *v56; // [rsp+B8h] [rbp-31h]
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v57; // [rsp+C0h] [rbp-29h]
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v58; // [rsp+C8h] [rbp-21h]
  struct ITabViewManager *v59; // [rsp+D0h] [rbp-19h]
  struct ITouchGestureSettings *v60; // [rsp+D8h] [rbp-11h]
  struct IImmersiveShellHookService *v61; // [rsp+E0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+Fh]

  v27 = a27;
  *a27 = 0LL;
  a27 = 0LL;
  *(_QWORD *)v37 = a1;
  v38 = a2;
  v39 = a3;
  v40 = a4;
  v41 = a5;
  v42 = a6;
  v43 = a7;
  v44 = a8;
  v45 = a9;
  v46 = a10;
  v47 = a11;
  v48 = a12;
  v49 = a13;
  v50 = a14;
  v51 = a15;
  v52 = a16;
  v53 = a19;
  v54 = a20;
  v55 = a17;
  v56 = a18;
  v57 = a21;
  v58 = a22;
  v59 = a23;
  v60 = a24;
  v61 = a25;
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&a27);
  v28 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
          &a27,
          v37);
  CanCastTo = v28;
  if ( v28 < 0 )
  {
    v34 = (unsigned int)v28;
    v35 = 1256LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)v34);
    goto LABEL_7;
  }
  *v27 = 0LL;
  if ( InlineIsEqualGUID(&GUID_537b455d_1240_433b_82af_10929138b8be, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v36 = a27;
    *v27 = a27;
    (*((void (__fastcall **)(void **))*v36 + 1))(v36);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v30, v31) )
    {
      *v27 = a27;
      CanCastTo = 0;
LABEL_5:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v27 + 8LL))(*v27);
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                  a27 + 1,
                  v32,
                  v27);
    if ( CanCastTo >= 0 )
      goto LABEL_5;
  }
LABEL_6:
  if ( CanCastTo < 0 )
  {
    v34 = (unsigned int)CanCastTo;
    v35 = 1257LL;
    goto LABEL_13;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&a27);
  return (unsigned int)CanCastTo;
}
