/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804053FC
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1804053F0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrappe.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180405A70 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VUwpWindowWrapperBase@@UIUAPViewWrapp.c)
 *     ??_GUwpWindowWrapper@@UEAAPEAXI@Z @ 0x180405AB0 (--_GUwpWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 608);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v3));
  UwpWindowWrapperBase::~UwpWindowWrapperBase((UwpWindowWrapperBase *)(a1 + 8), a2);
}
