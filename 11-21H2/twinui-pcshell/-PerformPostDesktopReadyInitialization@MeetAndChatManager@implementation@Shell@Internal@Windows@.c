/*
 * XREFs of ?PerformPostDesktopReadyInitialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801D2AE0
 * Callers:
 *     ?perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18017FDA0 (-perform_delayed_initialization@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_InitCoro$2 @ 0x1801D2628 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDesktopReadyInit.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization(
        __int64 a1,
        _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+2E8h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x2A9uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
