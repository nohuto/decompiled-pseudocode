/*
 * XREFs of ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x1804AA020
 * Callers:
 *     ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x1804AA550 (--_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewHostItemPropertyChangedArgs::~ViewHostItemPropertyChangedArgs(HSTRING *this)
{
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>((__int64 *)this);
}
