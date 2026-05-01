/*
 * XREFs of ?OnDismiss@CInsightsExperienceManager@@EEAAJXZ @ 0x180385800
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x180040298 (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnDismiss(CInsightsExperienceManager *this)
{
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG v7; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1806AA3C1, 0LL, 0LL, 2u, &v8);
  CInsightsExperienceManager::CloseExperienceIfRunning(
    (CInsightsExperienceManager *)((char *)this - 16),
    v2,
    v4,
    v5,
    v7);
  return 0LL;
}
