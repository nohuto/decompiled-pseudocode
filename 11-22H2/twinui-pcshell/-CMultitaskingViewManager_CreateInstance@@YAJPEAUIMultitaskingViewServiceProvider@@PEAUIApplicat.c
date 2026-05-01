/*
 * XREFs of ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x180126748
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180125F3C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1801268CC (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18013F6AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVi.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180140284 (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
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
        struct ISnapAssistSwitchItemRelevanceProvider *a16,
        struct IApplicationViewIconLoader *a17,
        struct IInspectable *a18,
        struct IInspectable *a19,
        struct IImmersiveMonitorManager *a20,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a21,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a22,
        struct IUnknown *a23,
        struct ITouchGestureSettings *a24,
        struct IImmersiveShellHookService *a25,
        struct Windows::Internal::UI::Shell::IWindowTabExtension *a26,
        struct Windows::Internal::Shell::IRemoteSessionWindowManager *a27,
        const struct _GUID *a28,
        void **a29)
{
  void **v29; // rdi
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v33; // rdx
  int v34[2]; // [rsp+20h] [rbp-D9h] BYREF
  struct IApplicationViewCollection *v35; // [rsp+28h] [rbp-D1h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v36; // [rsp+30h] [rbp-C9h]
  struct IApplicationViewSwitcher *v37; // [rsp+38h] [rbp-C1h]
  struct IVirtualDesktopManagerInternal *v38; // [rsp+40h] [rbp-B9h]
  struct IVirtualDesktopPinnedApps *v39; // [rsp+48h] [rbp-B1h]
  struct ITabletModeController *v40; // [rsp+50h] [rbp-A9h]
  struct IVirtualDesktopNotificationService *v41; // [rsp+58h] [rbp-A1h]
  struct IImmersiveAppCrusher *v42; // [rsp+60h] [rbp-99h]
  struct IMultitaskingViewVisibilityServiceInternal *v43; // [rsp+68h] [rbp-91h]
  struct IMultitaskingViewGestureState *v44; // [rsp+70h] [rbp-89h]
  struct IImmersiveSettingsCache *v45; // [rsp+78h] [rbp-81h]
  struct ITabletModeViewManager *v46; // [rsp+80h] [rbp-79h]
  struct IShellTargetingContractManager *v47; // [rsp+88h] [rbp-71h]
  struct ISnapServiceProvider *v48; // [rsp+90h] [rbp-69h]
  struct ISnapAssistSwitchItemRelevanceProvider *v49; // [rsp+98h] [rbp-61h]
  struct IApplicationViewIconLoader *v50; // [rsp+A0h] [rbp-59h]
  struct IImmersiveMonitorManager *v51; // [rsp+A8h] [rbp-51h]
  struct IInspectable *v52; // [rsp+B0h] [rbp-49h]
  struct IInspectable *v53; // [rsp+B8h] [rbp-41h]
  __int128 v54; // [rsp+C0h] [rbp-39h]
  __int64 v55; // [rsp+D0h] [rbp-29h]
  struct ITouchGestureSettings *v56; // [rsp+D8h] [rbp-21h]
  struct IImmersiveShellHookService *v57; // [rsp+E0h] [rbp-19h]
  struct Windows::Internal::UI::Shell::IWindowTabExtension *v58; // [rsp+E8h] [rbp-11h]
  struct Windows::Internal::Shell::IRemoteSessionWindowManager *v59; // [rsp+F0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+Fh]

  v29 = a29;
  *a29 = 0LL;
  a29 = 0LL;
  *(_QWORD *)v34 = a1;
  v35 = a2;
  v36 = a3;
  v37 = a4;
  v38 = a5;
  v39 = a6;
  v40 = a7;
  v41 = a8;
  v42 = a9;
  v43 = a10;
  v44 = a11;
  v45 = a12;
  v46 = a13;
  v47 = a14;
  v48 = a15;
  v49 = a16;
  v50 = a17;
  v51 = a20;
  v52 = a18;
  v53 = a19;
  v54 = 0LL;
  v55 = 0LL;
  v56 = a24;
  v57 = a25;
  v58 = a26;
  v59 = a27;
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a29);
  v30 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
          &a29,
          v34);
  v31 = v30;
  if ( v30 < 0 )
  {
    v33 = 1290LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v30,
      v34[0]);
    goto LABEL_3;
  }
  v30 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>>(
          a29,
          &GUID_537b455d_1240_433b_82af_10929138b8be,
          v29);
  v31 = v30;
  if ( v30 < 0 )
  {
    v33 = 1291LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a29);
  return v31;
}
