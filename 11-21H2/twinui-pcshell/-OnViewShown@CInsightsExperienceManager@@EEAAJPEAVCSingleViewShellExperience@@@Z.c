/*
 * XREFs of ?OnViewShown@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x180385E80 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewShown(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _DWORD *v4; // rcx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1806AA452, 0LL, 0LL, 2u, &v6);
  if ( *((_BYTE *)this + 240) )
    CInsightsExperienceManager::RegisterWithLightDismiss((CInsightsExperienceManager *)((char *)this - 56), a2);
  return 0LL;
}
