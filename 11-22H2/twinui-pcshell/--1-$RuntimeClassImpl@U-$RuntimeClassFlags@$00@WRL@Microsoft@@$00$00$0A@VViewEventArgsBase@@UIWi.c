/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804A9E78
 * Callers:
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x1804AA020 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804AA3D0 (--_G-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Interna.c)
 *     ??1?$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1804BC7C4 (--1-$RuntimeClass@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shel.c)
 *     ??1ViewEventArgsForSwitch@@UEAA@XZ @ 0x1804BCC24 (--1ViewEventArgsForSwitch@@UEAA@XZ.c)
 *     ??1ViewEventArgsForWindowingSettings@@UEAA@XZ @ 0x1804BCC5C (--1ViewEventArgsForWindowingSettings@@UEAA@XZ.c)
 *     ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x1804BD5D0 (--_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012D4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[11];
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 7);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
}
