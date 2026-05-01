/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContextProvider@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18003918C
 * Callers:
 *     ??_ECViewPositionChangedEventArgs@@UEAAPEAXI@Z @ 0x180039150 (--_ECViewPositionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800391C0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewPositionChangedEventArgs@Experi.c)
 *     ??1?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAA@XZ @ 0x180141B6C (--1-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@detai.c)
 *     ??_E?$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z @ 0x180179540 (--_E-$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContextProvider,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 40);
}
