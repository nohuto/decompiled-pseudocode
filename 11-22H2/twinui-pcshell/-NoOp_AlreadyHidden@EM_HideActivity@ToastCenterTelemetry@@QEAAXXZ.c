/*
 * XREFs of ?NoOp_AlreadyHidden@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180056BDC
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x1801A9428 (-get@-$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ToastCenterTelemetry::EM_HideActivity::NoOp_AlreadyHidden(ToastCenterTelemetry::EM_HideActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<ToastCenterLogging>::get(
                      this,
                      _lambda_bf79752da0796684e7476bfa6049aec2_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((int)v2, (int)&dword_18084D6AF, *((_QWORD *)this + 6) + 8, 0, 2u, &v3);
}
