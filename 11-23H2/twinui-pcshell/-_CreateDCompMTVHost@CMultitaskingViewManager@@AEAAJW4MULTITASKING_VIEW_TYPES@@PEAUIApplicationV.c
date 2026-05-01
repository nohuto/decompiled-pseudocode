/*
 * XREFs of ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180553C44
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAJ_K0@Z @ 0x1800F0430 (-_EnsureCapacity@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UENUMERATED.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126B8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18013F6AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18055FCE0 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1805602F0 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x180561000 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180562F7C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewManager::_CreateDCompMTVHost(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        struct IMultitaskingViewManagerInternal *a5)
{
  struct IMultitaskingViewManagerInternal *v9; // r15
  const struct _GUID *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int Instance; // eax
  __int64 v15; // rdx
  void *v16; // r8
  __int64 v17; // r9
  int v18; // esi
  int v19; // esi
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  const char *v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rbx
  struct _GUID *v29; // [rsp+30h] [rbp-31h]
  struct IUnknown *v30; // [rsp+40h] [rbp-21h]
  const struct _GUID *v31; // [rsp+50h] [rbp-11h]
  void *v32; // [rsp+70h] [rbp+Fh] BYREF
  struct IMultitaskingData *v33[2]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  __int64 v35; // [rsp+C0h] [rbp+5Fh] BYREF

  v9 = a5;
  *(_QWORD *)a5 = 0LL;
  v32 = 0LL;
  if ( *(_QWORD *)(a1 + 120) )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    v11 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
            *(struct IVirtualDesktopManagerInternal **)(a1 + 120),
            *(struct ITabletModeController **)(a1 + 136),
            *(struct IVirtualDesktopNotificationService **)(a1 + 144),
            v10,
            &v32);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A4,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_32:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
      return v12;
    }
  }
  *(_OWORD *)v33 = 0LL;
  if ( a3 )
  {
    v35 = 0LL;
    v13 = **a3;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
    Instance = v13(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &v35);
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 686LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
LABEL_31:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33[1]);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33[1]);
    v30 = *(struct IUnknown **)(a1 + 216);
    v29 = *(struct _GUID **)(a1 + 176);
    Instance = MultitaskingData_CreateInstance(
                 a3,
                 v35,
                 v32,
                 *(_QWORD *)(a1 + 120),
                 *(_QWORD *)(a1 + 128),
                 *(_QWORD *)(a1 + 144));
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 700LL;
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v35);
  }
  else
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33[1]);
    v30 = *(struct IUnknown **)(a1 + 216);
    v29 = *(struct _GUID **)(a1 + 176);
    v22 = MultitaskingData_CreateInstance(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(a1 + 104),
            v32,
            *(_QWORD *)(a1 + 120),
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 144));
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CD,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_31;
    }
  }
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>>(
    a1,
    &GUID_4026878b_100e_4920_8bc7_baeed683a086,
    &a5);
  v18 = a2 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
        1u,
        3u,
        v17);
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2FB,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        v23);
    }
    if ( v19 == 6 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
      v20 = CPPIAllUpViewHost_CreateInstance(
              v33[1],
              a5,
              *(struct IApplicationViewSwitcher **)(a1 + 112),
              *(struct IImmersiveAppCrusher **)(a1 + 152),
              *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
              *(struct ITabletModeViewManager **)(a1 + 184),
              v29,
              (void **)v33);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 774LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
        goto LABEL_31;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
    v20 = CAltTabViewHost_CreateInstance(
            v33[1],
            a5,
            *(struct IApplicationViewSwitcher **)(a1 + 112),
            *(struct IImmersiveAppCrusher **)(a1 + 152),
            *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
            *(struct IMultitaskingViewGestureState **)(a1 + 168),
            *(struct IApplicationViewCollection **)(a1 + 96),
            *(struct Windows::Internal::ComposableShell::Tabs::ITabController **)(a1 + 256),
            v30,
            *(struct ITouchGestureSettings **)(a1 + 264),
            v31,
            (void **)v33);
    v12 = v20;
    if ( v20 == -2147019873 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33[1]);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
      v12 = -2147019873;
      goto LABEL_32;
    }
    if ( v20 < 0 )
    {
      v21 = 744LL;
      goto LABEL_30;
    }
  }
  v24 = (_QWORD *)(a1 + 296);
  v25 = v24[1];
  if ( v25 != v24[3]
    || (int)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_EnsureCapacity(
              (__int64)v24,
              v25 + 1,
              v16) >= 0 )
  {
    v26 = v24[1];
    v24[1] = v26 + 1;
    v27 = *v24 + 16 * v26;
    if ( v27 )
    {
      *(struct IMultitaskingData **)v27 = v33[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v27);
      *(struct IMultitaskingData **)(v27 + 8) = v33[1];
      if ( v33[1] )
        (*(void (__fastcall **)(struct IMultitaskingData *))(*(_QWORD *)v33[1] + 8LL))(v33[1]);
    }
  }
  v20 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, struct IMultitaskingViewManagerInternal *))v33[0])(
          v33[0],
          a4,
          v9);
  v12 = v20;
  if ( v20 < 0 )
  {
    v21 = 780LL;
    goto LABEL_30;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v33[1]);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
  return 0LL;
}
