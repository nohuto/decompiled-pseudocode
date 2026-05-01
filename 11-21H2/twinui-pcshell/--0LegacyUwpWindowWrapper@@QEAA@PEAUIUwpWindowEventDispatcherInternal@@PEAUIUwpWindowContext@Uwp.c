/*
 * XREFs of ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@@Z @ 0x180403B90
 * Callers:
 *     ??$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x1803E88F0 (--$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLi.c)
 *     ??$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x1803E8A64 (--$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContex_ea_1803E8A64.c)
 * Callees:
 *     ??$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0AEAI@Z @ 0x1803FADC8 (--$WindowEventDispatcher_CreatedLegacyWindowWrapper@PEBGPEBGAEAI@ViewManagerInteropTraceLogging@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180403AAC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UILegacyViewWra.c)
 *     ?LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ @ 0x180404534 (-LoadQuirksForApp@LegacyUwpWindowWrapper@@AEAAJXZ.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Z @ 0x1804153F4 (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LegacyUwpWindowWrapper::LegacyUwpWindowWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  PCWSTR v15[2]; // [rsp+50h] [rbp-18h] BYREF
  PCWSTR StringRawBuffer; // [rsp+70h] [rbp+8h] BYREF

  StringRawBuffer = (PCWSTR)a1;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>((_QWORD *)a1);
  *(_QWORD *)a1 = &LegacyUwpWindowWrapper::`vftable'{for `IInspectable'};
  *(_QWORD *)(a1 + 8) = &LegacyUwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<UwpWindowWrapperBase>,IWeakReferenceSource,ILegacyViewWrapper>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewWrapper'};
  *(_QWORD *)(a1 + 24) = &LegacyUwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IUwpWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 32) = &LegacyUwpWindowWrapper::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *(_QWORD *)(a1 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *(_QWORD *)(a1 + 56) = &LegacyUwpWindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 64) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `IFramedViewWrapper'};
  *(_QWORD *)(a1 + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 576) = &LegacyUwpWindowWrapper::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 584) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,UwpWindowWrapperBase,ILegacyViewWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILegacyViewWrapper>'};
  *(_WORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_DWORD *)(a1 + 624) = 1;
  *(_QWORD *)(a1 + 632) = 1LL;
  *(_QWORD *)(a1 + 640) = 0LL;
  UwpWindowWrapperBase::Initialize(a1 + 8, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  LegacyUwpWindowWrapper::LoadQuirksForApp((LegacyUwpWindowWrapper *)a1);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 320), 0LL);
  v15[0] = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 312), 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_CreatedLegacyWindowWrapper<unsigned short const *,unsigned short const *,unsigned int &>(
    (__int64 *)v15,
    (__int64 *)&StringRawBuffer,
    (_DWORD *)(a1 + 352));
  return a1;
}
