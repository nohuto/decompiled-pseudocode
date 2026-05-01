/*
 * XREFs of ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x1804051E4
 * Callers:
 *     ??$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x1803E8BD8 (--$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycl.c)
 *     ??$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x1803E8D4C (--$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpW_ea_1803E8D4C.c)
 * Callees:
 *     ??$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x18009BC38 (--$WindowEventDispatcher_CreatedWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804050F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrappe.c)
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180405E64 (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Z @ 0x1804153F4 (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A66C (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
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
        int a10)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v14; // r15
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp+8h] BYREF

  StringRawBuffer = (PCWSTR)a1;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>((_QWORD *)a1);
  *(_QWORD *)a1 = &UwpWindowWrapper::`vftable';
  *(_QWORD *)(a1 + 8) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::Selector<UwpWindowWrapperBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<UwpWindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>>'};
  *(_QWORD *)(a1 + 16) = &UwpWindowWrapper::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewWrapper'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *(_QWORD *)(a1 + 40) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *(_QWORD *)(a1 + 56) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 64) = &UwpWindowWrapper::`vftable'{for `IFramedViewWrapper'};
  *(_QWORD *)(a1 + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 576) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<UwpWindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>>'};
  *(_QWORD *)(a1 + 584) = &UwpWindowWrapper::`vftable'{for `IUAPViewWrapper'};
  *(_QWORD *)(a1 + 592) = &UwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_BYTE *)(a1 + 624) = 0;
  *(_DWORD *)(a1 + 628) = 1;
  memset_0((void *)(a1 + 632), 0, 0x5CuLL);
  v14 = a7;
  UwpWindowWrapperBase::Initialize(a1 + 8, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *(_BYTE *)(a1 + 624) = 0;
  if ( v14 )
    UwpWindowWrapper::OnSetWindowInternal((UwpWindowWrapper *)a1, v14);
  UwpWindowReadyState::FrameworkKindChanged(a1 + 360, *(unsigned int *)(a1 + 468));
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 320), 0LL);
  a7 = (struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *)WindowsGetStringRawBuffer(
                                                                                  *(HSTRING *)(a1 + 312),
                                                                                  0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
    (const WCHAR **)&a7,
    &StringRawBuffer,
    (_DWORD *)(a1 + 352));
  return a1;
}
