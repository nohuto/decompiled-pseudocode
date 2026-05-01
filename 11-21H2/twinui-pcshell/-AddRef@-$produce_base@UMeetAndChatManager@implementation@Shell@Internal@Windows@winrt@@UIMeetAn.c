/*
 * XREFs of ?AddRef@?$produce_base@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@X@impl@winrt@@UEAAIXZ @ 0x180041DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager,void>::AddRef(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 - 8) & -(__int64)(a1 != 0);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
