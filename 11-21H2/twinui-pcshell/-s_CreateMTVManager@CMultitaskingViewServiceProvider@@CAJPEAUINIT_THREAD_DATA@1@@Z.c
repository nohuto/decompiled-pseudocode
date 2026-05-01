/*
 * XREFs of ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18011546C
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1801152E0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115AF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115F74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4.c)
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@AEBU_GUID@@PEAPEAX@Z @ 0x180116190 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
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
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  const struct _GUID *v30; // [rsp+C8h] [rbp-98h]
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v31; // [rsp+E0h] [rbp-80h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v32; // [rsp+E8h] [rbp-78h] BYREF
  struct ITabViewManager *v33; // [rsp+F0h] [rbp-70h] BYREF
  struct IInspectable *v34; // [rsp+F8h] [rbp-68h] BYREF
  struct IInspectable *v35; // [rsp+100h] [rbp-60h] BYREF
  struct IXamlExplorerHost *v36; // [rsp+108h] [rbp-58h] BYREF
  struct IImmersiveMonitorManager *v37; // [rsp+110h] [rbp-50h] BYREF
  struct IApplicationViewIconLoader *v38; // [rsp+118h] [rbp-48h] BYREF
  struct ISnapServiceProvider *v39; // [rsp+120h] [rbp-40h] BYREF
  struct IShellTargetingContractManager *v40; // [rsp+128h] [rbp-38h] BYREF
  struct ITabletModeViewManager *v41; // [rsp+130h] [rbp-30h] BYREF
  struct IImmersiveSettingsCache *v42; // [rsp+138h] [rbp-28h] BYREF
  struct IMultitaskingViewGestureState *v43; // [rsp+140h] [rbp-20h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v44; // [rsp+148h] [rbp-18h] BYREF
  struct IImmersiveAppCrusher *v45; // [rsp+150h] [rbp-10h] BYREF
  struct IVirtualDesktopNotificationService *v46; // [rsp+158h] [rbp-8h] BYREF
  struct ITabletModeController *v47; // [rsp+160h] [rbp+0h] BYREF
  struct IVirtualDesktopPinnedApps *v48; // [rsp+168h] [rbp+8h] BYREF
  struct IVirtualDesktopManagerInternal *v49; // [rsp+170h] [rbp+10h] BYREF
  struct IApplicationViewSwitcher *v50; // [rsp+178h] [rbp+18h] BYREF
  struct IApplicationViewVisibilityDebouncedNotificationService *v51; // [rsp+180h] [rbp+20h] BYREF
  struct IApplicationViewCollection *v52[5]; // [rsp+188h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+58h]
  struct ITouchGestureSettings *v54; // [rsp+1C0h] [rbp+60h] BYREF
  struct IMultitaskingViewServiceProvider *v55; // [rsp+1C8h] [rbp+68h] BYREF
  void *v56; // [rsp+1D0h] [rbp+70h] BYREF
  struct IImmersiveShellHookService *v57; // [rsp+1D8h] [rbp+78h] BYREF

  v55 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v55);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, (void **)&v55, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_39;
  }
  v52[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v52);
  v4 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 8),
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (void **)v52,
         0);
  v3 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_38;
  }
  v51 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v51);
  v5 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 16),
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         (void **)&v51,
         0);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_37;
  }
  v50 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v50);
  v6 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 24),
         &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
         (void **)&v50,
         0);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x237,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_36;
  }
  v49 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
  CMarshaledInterface::_Unmarshal(
    (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 32),
    &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
    (void **)&v49,
    0);
  v48 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v48);
  CMarshaledInterface::_Unmarshal(
    (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 40),
    &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
    (void **)&v48,
    0);
  v47 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v47);
  v7 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 48),
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (void **)&v47,
         0);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_35;
  }
  v46 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v46);
  CMarshaledInterface::_Unmarshal(
    (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 56),
    &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
    (void **)&v46,
    0);
  v45 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v45);
  v8 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 64),
         &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
         (void **)&v45,
         0);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_34;
  }
  v44 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v44);
  v9 = CMarshaledInterface::_Unmarshal(
         (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 72),
         &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
         (void **)&v44,
         0);
  v3 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_33;
  }
  v43 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
  v10 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 80),
          &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
          (void **)&v43,
          0);
  v3 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_32;
  }
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
  v11 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 88),
          &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
          (void **)&v42,
          0);
  v3 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_31;
  }
  v41 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
  v12 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 96),
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          (void **)&v41,
          0);
  v3 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x249,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_30;
  }
  v40 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
  v13 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 104),
          &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
          (void **)&v40,
          0);
  v3 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_29;
  }
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39);
  v14 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 112),
          &GUID_fff59320_db70_4865_8fed_8b502d692f12,
          (void **)&v39,
          0);
  v3 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_28;
  }
  v38 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
  v15 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 120),
          &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
          (void **)&v38,
          0);
  v3 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_27;
  }
  v37 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
  v16 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 144),
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          (void **)&v37,
          0);
  v3 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_26;
  }
  v36 = 0LL;
  LOBYTE(v18) = 3;
  LOBYTE(v17) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetImpl'::`2'::impl,
    v17,
    v18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
  v19 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 152),
          &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
          (void **)&v36,
          0);
  v3 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_25;
  }
  v35 = 0LL;
  v34 = 0LL;
  LOBYTE(v21) = 3;
  LOBYTE(v20) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
    v20,
    v21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
  CMarshaledInterface::_Unmarshal(
    (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 128),
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    (void **)&v35,
    0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  CMarshaledInterface::_Unmarshal(
    (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 136),
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    (void **)&v34,
    0);
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33);
    v27 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 176),
            &GUID_d1710073_c814_4a0c_9685_00e44547418f,
            (void **)&v33,
            0);
    v3 = v27;
    if ( v27 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
      v27 = CMarshaledInterface::_Unmarshal(
              (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 168),
              &GUID_de815fce_67de_41ea_8c7f_37a65bf92294,
              (void **)&v32,
              0);
      v3 = v27;
      if ( v27 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v31);
        v27 = CMarshaledInterface::_Unmarshal(
                (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 160),
                &GUID_947c042a_0955_4e95_b853_d3c1877d5ef2,
                (void **)&v31,
                0);
        v3 = v27;
        if ( v27 >= 0 )
          goto LABEL_17;
        v28 = 615LL;
      }
      else
      {
        v28 = 614LL;
      }
    }
    else
    {
      v28 = 613LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_24;
  }
LABEL_17:
  v54 = 0LL;
  LOBYTE(v23) = 3;
  LOBYTE(v22) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    v22,
    v23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v54);
  if ( (int)CMarshaledInterface::_Unmarshal(
              (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 184),
              &GUID_8bc0416b_e6fa_4b43_9553_9386b4584de0,
              (void **)&v54,
              0) < 0 )
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v54);
  v57 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
  v24 = CMarshaledInterface::_Unmarshal(
          (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 192),
          &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
          (void **)&v57,
          0);
  v3 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_23;
  }
  v56 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
  v25 = CMultitaskingViewManager_CreateInstance(
          v55,
          v52[0],
          v51,
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
          v35,
          v34,
          v37,
          v36,
          v32,
          v31,
          v33,
          v54,
          v57,
          v30,
          &v56);
  v3 = v25;
  if ( v25 < 0 )
  {
    v29 = 657LL;
LABEL_65:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_22;
  }
  v25 = (*(__int64 (__fastcall **)(struct IMultitaskingViewServiceProvider *, void *))(*(_QWORD *)v55 + 24LL))(v55, v56);
  v3 = v25;
  if ( v25 < 0 )
  {
    v29 = 660LL;
    goto LABEL_65;
  }
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v56);
LABEL_23:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v57);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v54);
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
LABEL_25:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v36);
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v37);
LABEL_27:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
LABEL_28:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
LABEL_31:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
LABEL_32:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
LABEL_33:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v44);
LABEL_34:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v45);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v46);
LABEL_35:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v47);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v48);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v49);
LABEL_36:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v50);
LABEL_37:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v51);
LABEL_38:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v52);
LABEL_39:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v55);
  return v3;
}
