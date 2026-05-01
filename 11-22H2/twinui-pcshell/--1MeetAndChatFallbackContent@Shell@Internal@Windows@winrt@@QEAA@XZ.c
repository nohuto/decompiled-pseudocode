/*
 * XREFs of ??1MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801AB204
 * Callers:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801AB16C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::~MeetAndChatFallbackContent(
        volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 1);
  winrt::handle_type<winrt::impl::hstring_traits>::close(this);
}
