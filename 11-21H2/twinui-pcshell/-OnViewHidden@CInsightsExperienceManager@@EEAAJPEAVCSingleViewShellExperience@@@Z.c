/*
 * XREFs of ?OnViewHidden@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18002555C (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewHidden(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _DWORD *v3; // rcx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1806AA5E8, 0LL, 0LL, 2u, &v5);
  if ( *((_BYTE *)this + 240) )
    SingleViewLightDismissHelper::UnregisterWithLightDismiss((CInsightsExperienceManager *)((char *)this + 224));
  return 0LL;
}
