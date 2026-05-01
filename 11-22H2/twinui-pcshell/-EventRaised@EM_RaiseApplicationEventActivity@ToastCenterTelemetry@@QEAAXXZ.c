/*
 * XREFs of ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180435F4C
 * Callers:
 *     _lambda_527ad20aa16d56b88e42a79a9a93120f_::operator() @ 0x180435784 (_lambda_527ad20aa16d56b88e42a79a9a93120f_--operator().c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180438FA8 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x1801A9428 (-get@-$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised(
        ToastCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  _DWORD *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<ToastCenterLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_bf79752da0796684e7476bfa6049aec2_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v2,
      (unsigned __int8 *)dword_18084A0ED,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      0LL,
      2u,
      &v3);
}
