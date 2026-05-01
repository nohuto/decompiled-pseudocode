/*
 * XREFs of ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A1100
 * Callers:
 *     ??$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x18006AA78 (--$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycl.c)
 *     ??$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1800A1F64 (--$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpW_ea_1800A1F64.c)
 * Callees:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009EC20 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A04F0 (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1340 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrappe.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A16BC (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 *     ??$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x1800A1D4C (--$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$.c)
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowWrapper::UwpWindowWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  char v15; // r15
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v16; // r12
  const char *v17; // r9
  PCWSTR v19[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  PCWSTR StringRawBuffer; // [rsp+A0h] [rbp+8h] BYREF

  StringRawBuffer = (PCWSTR)a1;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>();
  *(_QWORD *)a1 = &UwpWindowWrapper::`vftable';
  *(_QWORD *)(a1 + 8) = &UwpWindowWrapper::`vftable'{for `INtUserViewWrapper'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 24) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 32) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 56) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *(_QWORD *)(a1 + 64) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 72) = &UwpWindowWrapper::`vftable'{for `IFramedViewWrapper'};
  *(_QWORD *)(a1 + 80) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 592) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 600) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
  *(_QWORD *)(a1 + 608) = &UwpWindowWrapper::`vftable'{for `IUwpWindowWrapperUniversalInternal'};
  *(_QWORD *)(a1 + 616) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_BYTE *)(a1 + 648) = 0;
  v15 = 1;
  *(_DWORD *)(a1 + 652) = 1;
  memset_0((void *)(a1 + 656), 0, 0x5CuLL);
  v16 = a7;
  UwpWindowWrapperBase::Initialize(a1 + 8, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  *(_BYTE *)(a1 + 648) = 0;
  if ( !IsBamoEnabled() || *(_DWORD *)(a1 + 336) == 1 )
    v15 = 0;
  if ( v15 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      v17);
  if ( v16 )
    UwpWindowWrapper::OnSetWindowInternal((UwpWindowWrapper *)a1, v16);
  UwpWindowReadyState::FrameworkKindChanged((UwpWindowReadyState *)(a1 + 368), *(_DWORD *)(a1 + 476));
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 328), 0LL);
  v19[0] = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 320), 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
    v19,
    &StringRawBuffer,
    a1 + 360);
  return a1;
}
