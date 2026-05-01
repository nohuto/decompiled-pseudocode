/*
 * XREFs of ?SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ @ 0x180369B38
 * Callers:
 *     ?OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z @ 0x18016A650 (-OnMessage@CPeopleBarFlyoutExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x18036A908 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

void __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::SessionBecameIdleDuringShow(
        CommonPeopleTelemetry::ShowPeopleBarFlyout *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
                      this,
                      _lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(
        v3,
        (unsigned __int8 *)dword_1806A6C77,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        2u,
        &v4);
  }
}
