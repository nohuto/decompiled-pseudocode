/*
 * XREFs of ?get_Status@?$produce@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatInstallStatus@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x1805CF800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,winrt::Windows::Internal::Shell::IMeetAndChatInstallStatus>::get_Status(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 8;
  if ( !a1 )
    v2 = 24LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
