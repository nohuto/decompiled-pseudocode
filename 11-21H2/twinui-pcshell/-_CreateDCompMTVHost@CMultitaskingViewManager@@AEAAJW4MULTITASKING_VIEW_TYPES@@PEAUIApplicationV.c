/*
 * XREFs of ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18049AD54
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800525BC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x180040458 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115AF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802317C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A0300 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A0930 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A16E0 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3B3C (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A590C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CMultitaskingViewManager::_CreateDCompMTVHost(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        ...)
{
  __int64 v4; // rsi
  _QWORD *v8; // r13
  const struct _GUID *v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  int Instance; // eax
  __int64 v14; // rdx
  int v15; // eax
  _DWORD *v16; // rcx
  _DWORD *v17; // r9
  struct IMultitaskingViewManagerInternal *v18; // rcx
  void *v19; // r8
  __int64 v20; // r9
  int v21; // r15d
  int v22; // r15d
  int v23; // r15d
  int v24; // eax
  __int64 v25; // rdx
  const char *v26; // r9
  _QWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rbx
  struct _GUID *v31; // [rsp+30h] [rbp-41h]
  struct _GUID *v32; // [rsp+38h] [rbp-39h]
  struct _GUID *v33; // [rsp+50h] [rbp-21h]
  __int64 v34; // [rsp+70h] [rbp-1h] BYREF
  void *v35; // [rsp+78h] [rbp+7h] BYREF
  struct IMultitaskingData *v36[2]; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]
  struct IMultitaskingViewManagerInternal *v38; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v39; // [rsp+E8h] [rbp+77h]
  _QWORD *v40; // [rsp+F0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+7Fh]
  va_list va1; // [rsp+F8h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v40 = va_arg(va1, _QWORD *);
  v39 = a4;
  v4 = a4;
  v8 = v40;
  *v40 = 0LL;
  v35 = 0LL;
  if ( *(_QWORD *)(a1 + 120) )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    v10 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
            *(struct IVirtualDesktopManagerInternal **)(a1 + 120),
            *(struct ITabletModeController **)(a1 + 136),
            *(struct IVirtualDesktopNotificationService **)(a1 + 144),
            v9,
            &v35);
    if ( v10 < 0 )
    {
      v11 = 666LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_48:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
      return (unsigned int)v10;
    }
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    if ( a2 == 1 )
    {
      LODWORD(v40) = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(**(_QWORD **)(a1 + 176) + 32LL))(
              *(_QWORD *)(a1 + 176),
              1LL,
              (_QWORD **)va);
      if ( v10 < 0 )
      {
        v11 = 673LL;
        goto LABEL_8;
      }
    }
  }
  *(_OWORD *)v36 = 0LL;
  if ( a3 )
  {
    v34 = 0LL;
    v12 = **a3;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
    Instance = v12(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &v34);
    v10 = Instance;
    if ( Instance < 0 )
    {
      v14 = 682LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
LABEL_47:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      goto LABEL_48;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
    v33 = *(struct _GUID **)(a1 + 264);
    v32 = *(struct _GUID **)(a1 + 200);
    v31 = *(struct _GUID **)(a1 + 176);
    Instance = MultitaskingData_CreateInstance(
                 a3,
                 v34,
                 v35,
                 *(_QWORD *)(a1 + 120),
                 *(_QWORD *)(a1 + 128),
                 *(_QWORD *)(a1 + 144));
    v10 = Instance;
    if ( Instance < 0 )
    {
      v14 = 696LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
  }
  else
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
    v33 = *(struct _GUID **)(a1 + 264);
    v32 = *(struct _GUID **)(a1 + 200);
    v31 = *(struct _GUID **)(a1 + 176);
    v15 = MultitaskingData_CreateInstance(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(a1 + 104),
            v35,
            *(_QWORD *)(a1 + 120),
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 144));
    v10 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C9,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_47;
    }
    v4 = v39;
  }
  v38 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
  v38 = 0LL;
  if ( InlineIsEqualGUID(&GUID_4026878b_100e_4920_8bc7_baeed683a086, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v38 = (struct IMultitaskingViewManagerInternal *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    if ( InlineIsEqualGUID(v16, &GUID_537b455d_1240_433b_82af_10929138b8be) )
    {
      v18 = (struct IMultitaskingViewManagerInternal *)a1;
      v38 = (struct IMultitaskingViewManagerInternal *)a1;
    }
    else
    {
      if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                  a1 + 8,
                  v17) < 0 )
        goto LABEL_26;
      v18 = v38;
    }
    (*(void (__fastcall **)(struct IMultitaskingViewManagerInternal *))(*(_QWORD *)v18 + 8LL))(v18);
  }
LABEL_26:
  v21 = a2 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( !v22 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
        1u,
        3u,
        v20);
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2F7,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        v26);
    }
    v23 = v22 - 2;
    if ( v23 )
    {
      if ( v23 == 4 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
        v24 = CPPIAllUpViewHost_CreateInstance(
                v36[1],
                v38,
                *(struct IApplicationViewSwitcher **)(a1 + 112),
                *(struct IImmersiveAppCrusher **)(a1 + 152),
                *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
                *(struct ITabletModeViewManager **)(a1 + 184),
                v31,
                (void **)v36);
        v10 = v24;
        if ( v24 < 0 )
        {
          v25 = 796LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
          goto LABEL_47;
        }
      }
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
        0,
        (__int64)v19,
        v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      v24 = CSnapAssistViewHost_CreateInstance(
              v36[1],
              v38,
              *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
              *(struct IImmersiveAppCrusher **)(a1 + 152),
              *(struct IApplicationViewCollection **)(a1 + 96),
              *(struct Windows::Internal::ComposableShell::Tabs::ITabController **)(a1 + 256),
              *(struct ITabViewManager **)(a1 + 264),
              v32,
              (void **)v36);
      v10 = v24;
      if ( v24 < 0 )
      {
        v25 = 785LL;
        goto LABEL_46;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
    v24 = CAltTabViewHost_CreateInstance(
            v36[1],
            v38,
            *(struct IApplicationViewSwitcher **)(a1 + 112),
            *(struct IImmersiveAppCrusher **)(a1 + 152),
            *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
            *(struct IMultitaskingViewGestureState **)(a1 + 168),
            *(struct IApplicationViewCollection **)(a1 + 96),
            *(struct Windows::Internal::ComposableShell::Tabs::ITabController **)(a1 + 256),
            *(struct ITabViewManager **)(a1 + 264),
            *(struct ITouchGestureSettings **)(a1 + 272),
            v33,
            (void **)v36);
    v10 = v24;
    if ( v24 == -2147019873 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      v10 = -2147019873;
      goto LABEL_48;
    }
    if ( v24 < 0 )
    {
      v25 = 740LL;
      goto LABEL_46;
    }
  }
  v27 = (_QWORD *)(a1 + 288);
  v28 = v27[1];
  if ( v28 != v27[3]
    || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
              (__int64)v27,
              v28 + 1,
              v19) >= 0 )
  {
    v29 = *v27 + 16 * v27[1]++;
    if ( v29 )
    {
      *(struct IMultitaskingData **)v29 = v36[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v29);
      *(struct IMultitaskingData **)(v29 + 8) = v36[1];
      if ( v36[1] )
        (*(void (__fastcall **)(struct IMultitaskingData *))(*(_QWORD *)v36[1] + 8LL))(v36[1]);
    }
  }
  v24 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, _QWORD *))v36[0])(v36[0], v4, v8);
  v10 = v24;
  if ( v24 < 0 )
  {
    v25 = 802LL;
    goto LABEL_46;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v36[1]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
  return 0LL;
}
