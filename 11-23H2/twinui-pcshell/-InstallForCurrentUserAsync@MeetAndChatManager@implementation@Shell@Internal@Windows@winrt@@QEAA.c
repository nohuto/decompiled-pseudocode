/*
 * XREFs of ?InstallForCurrentUserAsync@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@56@XZ @ 0x18025496C
 * Callers:
 *     ?InstallForCurrentUserAsync@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806BE120 (-InstallForCurrentUserAsync@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_InitCoro$2 @ 0x180254130 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+518h] [rbp+10h] BYREF

  v4 = operator new(0x4D9uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
