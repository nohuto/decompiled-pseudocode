/*
 * XREFs of ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x1801D66DC
 * Callers:
 *     ?ReportMeetAndChatUsage@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHH@Z @ 0x1805CDF50 (-ReportMeetAndChatUsage@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_InitCoro$2 @ 0x1801D6304 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_InitCo.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  char *v5; // rax
  int v7; // [rsp+1B8h] [rbp+10h] BYREF
  int v8; // [rsp+1C0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x161uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__InitCoro_2(
    &v7,
    v5,
    a2,
    &v8,
    a1);
  return a2;
}
