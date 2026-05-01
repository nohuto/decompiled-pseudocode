/*
 * XREFs of ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180453190
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180453214 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x18045554C (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
                      this,
                      _lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(
        v3,
        (unsigned __int8 *)dword_180850CC3,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        0LL,
        2u,
        &v4);
  }
}
