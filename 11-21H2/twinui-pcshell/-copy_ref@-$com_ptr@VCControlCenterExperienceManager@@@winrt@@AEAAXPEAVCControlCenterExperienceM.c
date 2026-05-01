/*
 * XREFs of ?copy_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceManager@@@Z @ 0x180354F84
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00 (CControlCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180194960 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewE_ea_180194960.c)
 *     ?unconditional_release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x18035562C (-unconditional_release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CControlCenterExperienceManager>::copy_ref(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    if ( *a1 )
      result = winrt::com_ptr<CControlCenterExperienceManager>::unconditional_release_ref();
    *a1 = a2;
    if ( a2 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::AddRef(a2);
  }
  return result;
}
