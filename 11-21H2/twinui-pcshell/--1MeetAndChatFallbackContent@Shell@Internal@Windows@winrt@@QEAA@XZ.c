/*
 * XREFs of ??1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805C0798
 * Callers:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805C07D0 (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::~MeetAndChatFallbackContent(
        volatile signed __int32 **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 3, a2, a3, a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 2, v5, v6, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 1, v8, v9, v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this, v11, v12, v13);
}
