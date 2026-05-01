/*
 * XREFs of ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1807253F4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18027CAEC (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Re.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18027CEB0 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAll_ea_18027CEB0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A540 (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 */

signed __int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(
        __int64 *a1)
{
  signed __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref(a1);
  return result;
}
