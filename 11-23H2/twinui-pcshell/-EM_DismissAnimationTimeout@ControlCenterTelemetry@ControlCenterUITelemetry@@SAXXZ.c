/*
 * XREFs of ?EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041EBF4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___::Run @ 0x1801DFB80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___--Run.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_DismissAnimationTimeout(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (_DWORD *)wil::details::static_lazy<ControlCenterLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18084A5FD, 0LL, 0LL, 3u, &v4);
    }
  }
}
