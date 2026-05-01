/*
 * XREFs of ?MissingRegistrationRecovery@MeetAndChatTelemetry@@SAXXZ @ 0x1806C59E0
 * Callers:
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1802558D0 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall MeetAndChatTelemetry::MissingRegistrationRecovery(__int64 a1)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_180879513, 0LL, 0LL, 2u, &v2);
}
