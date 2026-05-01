/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802DF834
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18022A430 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationCha.c)
 *     ??_G?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x1802E1330 (--_G-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Founda.c)
 *     ??_EUwpViewHandledEventArgs@@UEAAPEAXI@Z @ 0x1803034D0 (--_EUwpViewHandledEventArgs@@UEAAPEAXI@Z.c)
 *     ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x18037152C (--1StateChangedEventArgsImpl@@UEAA@XZ.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1803CCCD8 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 *     ??1UwpWindowingEnvironmentSettings@@UEAA@XZ @ 0x1803DF588 (--1UwpWindowingEnvironmentSettings@@UEAA@XZ.c)
 *     ??_EVirtualDesktopPerMonitorCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x18048EFA0 (--_EVirtualDesktopPerMonitorCollectionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ @ 0x180490820 (--1TrayInfoTipAppInfo@SystemTray@@EEAA@XZ.c)
 *     ??1ApplicationContainerActivation@@EEAA@XZ @ 0x1805715E4 (--1ApplicationContainerActivation@@EEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 40));
}
