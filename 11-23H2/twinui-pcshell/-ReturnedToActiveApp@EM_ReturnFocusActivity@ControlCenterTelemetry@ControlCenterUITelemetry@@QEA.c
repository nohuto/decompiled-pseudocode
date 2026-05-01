/*
 * XREFs of ?ReturnedToActiveApp@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x180422EB4
 * Callers:
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422DC0 (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_ReturnFocusActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<ControlCenterLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_18084951A,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
