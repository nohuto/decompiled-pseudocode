/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventArgsForShowAsViewModeDesktop@6789@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804BC7D0
 * Callers:
 *     ??1ViewEventArgsForShowAsViewMode@@UEAA@XZ @ 0x1802D755A (--1ViewEventArgsForShowAsViewMode@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventArgsForShowAsViewModeDesktop@3456@UIWindowingEnironmentSettingsArgsForImplicitEvent@3456@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804BD4D0 (--_E-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[13];
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 7);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
}
