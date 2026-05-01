/*
 * XREFs of ??4MeetAndChatFallbackContent@Shell@Internal@Windows@winrt@@QEAAAEAU01234@AEBU01234@@Z @ 0x1806C7590
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x180256050 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

volatile signed __int32 **__fastcall winrt::Windows::Internal::Shell::MeetAndChatFallbackContent::operator=(
        volatile signed __int32 **a1,
        winrt::impl **a2,
        unsigned int a3)
{
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d

  winrt::hstring::operator=(a1, a2, a3);
  winrt::hstring::operator=(a1 + 1, a2 + 1, v5);
  winrt::hstring::operator=(a1 + 2, a2 + 2, v6);
  winrt::hstring::operator=(a1 + 3, a2 + 3, v7);
  return a1;
}
