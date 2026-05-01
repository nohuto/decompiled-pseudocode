/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgsForWindowingSettings@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803DF1B4
 * Callers:
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$22 @ 0x1803E208B (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$22.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$23 @ 0x1803ECBE4 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$23.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803CFE40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1803CFE40.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>::~com_ptr_t<ViewEventArgsForWindowingSettings,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(v1);
  return result;
}
