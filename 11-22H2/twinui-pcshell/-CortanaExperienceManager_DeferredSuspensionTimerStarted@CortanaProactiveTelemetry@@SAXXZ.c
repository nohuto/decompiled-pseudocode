/*
 * XREFs of ?CortanaExperienceManager_DeferredSuspensionTimerStarted@CortanaProactiveTelemetry@@SAXXZ @ 0x18042A7D4
 * Callers:
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180430C9C (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1804607AC (-_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x1800BC960 (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_DeferredSuspensionTimerStarted(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v1 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                   a1,
                   _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 0x1000000LL;
    v5 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_18084BF33, 0LL, 0LL, 3u, &v3);
  }
}
