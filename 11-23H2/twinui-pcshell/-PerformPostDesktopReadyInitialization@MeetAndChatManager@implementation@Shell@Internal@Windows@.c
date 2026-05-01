/*
 * XREFs of ?PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180254E60
 * Callers:
 *     ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18019DAF0 (-perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_InitCoro$2 @ 0x1802549D4 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDesktopReadyInit.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization(
        __int64 a1,
        _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+268h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x22AuLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
