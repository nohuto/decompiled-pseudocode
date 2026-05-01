/*
 * XREFs of ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x180256834
 * Callers:
 *     ?ReportMeetAndChatUsage@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHH@Z @ 0x1806BF860 (-ReportMeetAndChatUsage@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_InitCoro$2 @ 0x1802564CC (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_InitCo.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  void *v5; // rax
  int v7; // [rsp+D8h] [rbp+10h] BYREF
  int v8; // [rsp+E0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = operator new(0x8AuLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__InitCoro_2(
    &v7,
    (__int64)v5,
    a2,
    &v8,
    a1);
  return a2;
}
