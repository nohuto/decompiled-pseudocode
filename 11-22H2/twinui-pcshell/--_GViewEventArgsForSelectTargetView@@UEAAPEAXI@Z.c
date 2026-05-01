/*
 * XREFs of ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x1804BD5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804A9E78 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIWi.c)
 */

ViewEventArgsForSelectTargetView *__fastcall ViewEventArgsForSelectTargetView::`scalar deleting destructor'(
        ViewEventArgsForSelectTargetView *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>((__int64 *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
