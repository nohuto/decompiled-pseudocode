/*
 * XREFs of ?ReportMeetAndChatUsage@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHH@Z @ 0x1805CDF50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x1801D66DC (-ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::ReportMeetAndChatUsage(
        __int64 a1,
        int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1 + 264;
  if ( !a1 )
    v3 = 272LL;
  v4 = *(_QWORD *)v3;
  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage(v4, &v6, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
