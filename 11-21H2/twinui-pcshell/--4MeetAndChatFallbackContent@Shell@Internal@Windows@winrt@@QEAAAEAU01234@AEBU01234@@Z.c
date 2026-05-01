/*
 * XREFs of ??4MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAAAEAU01234@AEBU01234@@Z @ 0x1805D4348
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1801D5E10 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::operator=(
        struct winrt::impl::hstring_header **a1,
        winrt::impl **a2)
{
  winrt::hstring::operator=(a1, a2);
  winrt::hstring::operator=(a1 + 1, a2 + 1);
  winrt::hstring::operator=(a1 + 2, a2 + 2);
  winrt::hstring::operator=(a1 + 3, a2 + 3);
  return a1;
}
