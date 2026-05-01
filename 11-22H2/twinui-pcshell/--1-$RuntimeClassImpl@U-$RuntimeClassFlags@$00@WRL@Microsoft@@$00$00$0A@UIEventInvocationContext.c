/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContextProvider@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004798C
 * Callers:
 *     ??_EVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x180047950 (--_EVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@UIEventInvocationContextProvider@details@wil@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18006B360 (--_G-$RuntimeClass@UIEventInvocationContextProvider@details@wil@@VFtmBase@WRL@Microsoft@@@WRL@Mi.c)
 *     ??_E?$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z @ 0x1801B59D0 (--_E-$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 40));
}
