/*
 * XREFs of ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180125F3C
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180125EC0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??BCMarshaledInterface@@QEBAPEQBoolStruct@0@HXZ @ 0x180126734 (--BCMarshaledInterface@@QEBAPEQBoolStruct@0@HXZ.c)
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x180126748 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126974 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126B8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unmarshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0A20 (-Unmarshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  struct Windows::Internal::UI::Shell::IWindowTabExtension *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v26; // [rsp+20h] [rbp-150h]
  int v27; // [rsp+20h] [rbp-150h]
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v28; // [rsp+A0h] [rbp-D0h]
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v29; // [rsp+A8h] [rbp-C8h]
  struct IUnknown *v30; // [rsp+B0h] [rbp-C0h]
  const struct _GUID *v31; // [rsp+D8h] [rbp-98h]
  struct IImmersiveShellHookService *v32; // [rsp+F0h] [rbp-80h] BYREF
  struct IInspectable *v33; // [rsp+F8h] [rbp-78h] BYREF
  struct IInspectable *v34; // [rsp+100h] [rbp-70h] BYREF
  struct IImmersiveMonitorManager *v35; // [rsp+108h] [rbp-68h] BYREF
  struct IApplicationViewIconLoader *v36; // [rsp+110h] [rbp-60h] BYREF
  struct ISnapServiceProvider *v37; // [rsp+118h] [rbp-58h] BYREF
  struct IShellTargetingContractManager *v38; // [rsp+120h] [rbp-50h] BYREF
  struct ITabletModeViewManager *v39; // [rsp+128h] [rbp-48h] BYREF
  struct IImmersiveSettingsCache *v40; // [rsp+130h] [rbp-40h] BYREF
  struct IMultitaskingViewGestureState *v41; // [rsp+138h] [rbp-38h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v42; // [rsp+140h] [rbp-30h] BYREF
  struct IImmersiveAppCrusher *v43; // [rsp+148h] [rbp-28h] BYREF
  struct IVirtualDesktopNotificationService *v44; // [rsp+150h] [rbp-20h] BYREF
  struct ITabletModeController *v45; // [rsp+158h] [rbp-18h] BYREF
  struct IVirtualDesktopPinnedApps *v46; // [rsp+160h] [rbp-10h] BYREF
  struct IVirtualDesktopManagerInternal *v47; // [rsp+168h] [rbp-8h] BYREF
  struct IApplicationViewSwitcher *v48; // [rsp+170h] [rbp+0h] BYREF
  struct IApplicationViewVisibilityDebouncedNotificationService *v49; // [rsp+178h] [rbp+8h] BYREF
  struct IApplicationViewCollection *v50; // [rsp+180h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::IRemoteSessionWindowManager *v51; // [rsp+188h] [rbp+18h] BYREF
  struct ISnapAssistSwitchItemRelevanceProvider *v52; // [rsp+190h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+58h]
  struct Windows::Internal::UI::Shell::IWindowTabExtension *v54; // [rsp+1D0h] [rbp+60h] BYREF
  struct ITouchGestureSettings *v55; // [rsp+1D8h] [rbp+68h] BYREF
  struct IMultitaskingViewServiceProvider *v56; // [rsp+1E0h] [rbp+70h] BYREF
  void *v57; // [rsp+1E8h] [rbp+78h] BYREF

  v56 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
  v2 = CMarshaledInterface::Unmarshal(this, &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, (void **)&v56);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v50 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v50);
    v4 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 8),
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (void **)&v50);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v4,
        v26);
LABEL_57:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v50);
      goto LABEL_58;
    }
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
    v5 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 16),
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           (void **)&v49);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x237,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v5,
        v26);
LABEL_56:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v49);
      goto LABEL_57;
    }
    v48 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v48);
    v6 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 24),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           (void **)&v48);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x239,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v6,
        v26);
LABEL_55:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v48);
      goto LABEL_56;
    }
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v47);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 32),
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (void **)&v47);
    v46 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v46);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 40),
      &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
      (void **)&v46);
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v45);
    v7 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 48),
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (void **)&v45);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23F,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v7,
        v26);
LABEL_54:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v45);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v46);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v47);
      goto LABEL_55;
    }
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v44);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 56),
      &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
      (void **)&v44);
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
    v8 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 64),
           &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
           (void **)&v43);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x243,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v8,
        v26);
LABEL_53:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v43);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v44);
      goto LABEL_54;
    }
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
    v9 = CMarshaledInterface::Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 72),
           &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
           (void **)&v42);
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9,
        v26);
LABEL_52:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v42);
      goto LABEL_53;
    }
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
    v10 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 80),
            &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            (void **)&v41);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x247,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v10,
        v26);
LABEL_51:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v41);
      goto LABEL_52;
    }
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
    v11 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 88),
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            (void **)&v40);
    v3 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11,
        v26);
LABEL_50:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v40);
      goto LABEL_51;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39);
    v12 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 96),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            (void **)&v39);
    v3 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24B,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12,
        v26);
LABEL_49:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v39);
      goto LABEL_50;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
    v13 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 104),
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            (void **)&v38);
    v3 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24D,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13,
        v26);
LABEL_48:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v38);
      goto LABEL_49;
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
    v14 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 112),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            (void **)&v37);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14,
        v26);
LABEL_47:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v37);
      goto LABEL_48;
    }
    v52 = 0LL;
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
    v15 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 128),
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            (void **)&v36);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15,
        v26);
LABEL_46:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v36);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v52);
      goto LABEL_47;
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
    v16 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 152),
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (void **)&v35);
    v3 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x258,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v16,
        v26);
LABEL_45:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v35);
      goto LABEL_46;
    }
    v34 = 0LL;
    v33 = 0LL;
    LOBYTE(v18) = 3;
    LOBYTE(v17) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
      v17,
      v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 136),
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      (void **)&v34);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 144),
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      (void **)&v33);
    v55 = 0LL;
    if ( (unsigned int)CMarshaledInterface::operator int CMarshaledInterface::BoolStruct::*((char *)this + 160) != -1 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v55);
      if ( (int)CMarshaledInterface::Unmarshal(
                  (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 160),
                  &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
                  (void **)&v55) < 0 )
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v55);
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
    v19 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 168),
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            (void **)&v32);
    v3 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19,
        v26);
LABEL_44:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v32);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v55);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v33);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v34);
      goto LABEL_45;
    }
    v54 = 0LL;
    LOBYTE(v20) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ETUpdate>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ETUpdate>::GetImpl'::`2'::impl,
      v20);
    v21 = v54;
    v54 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(struct Windows::Internal::UI::Shell::IWindowTabExtension *))(*(_QWORD *)v21 + 16LL))(v21);
    CMarshaledInterface::Unmarshal(
      (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 176),
      &GUID_0e84cceb_709b_52d2_a663_ec5130862a9b,
      (void **)&v54);
    v51 = 0LL;
    v22 = CMarshaledInterface::Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 184),
            &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
            (void **)&v51);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x275,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v22,
        v26);
    v57 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
    v23 = CMultitaskingViewManager_CreateInstance(
            v56,
            v50,
            v49,
            v48,
            v47,
            v46,
            v45,
            v44,
            v43,
            v42,
            v41,
            v40,
            v39,
            v38,
            v37,
            v52,
            v36,
            v34,
            v33,
            v35,
            v28,
            v29,
            v30,
            v55,
            v32,
            v54,
            v51,
            v31,
            &v57);
    v3 = v23;
    if ( v23 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(struct IMultitaskingViewServiceProvider *, void *))(*(_QWORD *)v56 + 24LL))(
              v56,
              v57);
      v3 = v23;
      if ( v23 >= 0 )
      {
LABEL_43:
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v57);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v51);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
        goto LABEL_44;
      }
      v24 = 663LL;
    }
    else
    {
      v24 = 660LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v23,
      v27);
    goto LABEL_43;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x233,
    (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v2,
    v26);
LABEL_58:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v56);
  return v3;
}
