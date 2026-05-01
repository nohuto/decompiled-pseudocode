/*
 * XREFs of ??$ReportFlyoutVisibility@_N@MeetAndChatTelemetry@@SAX$$QEA_N@Z @ 0x1806AF738
 * Callers:
 *     ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1806BF76C (-ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4V.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall MeetAndChatTelemetry::ReportFlyoutVisibility<bool>(char *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 1;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_1808788EF,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
