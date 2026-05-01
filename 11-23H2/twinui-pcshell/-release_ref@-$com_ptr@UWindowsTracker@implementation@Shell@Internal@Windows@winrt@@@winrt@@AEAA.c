/*
 * XREFs of ?release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A524
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18027C8F0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18027CCF0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_18027CCF0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A540 (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::release_ref(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref();
  return result;
}
