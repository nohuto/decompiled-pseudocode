/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009DC00
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180055118 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d10d8a4b96f47c58ecefc665244380ef_@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x18009BDC0 (-_lambda_invoker_cdecl_@_lambda_d10d8a4b96f47c58ecefc665244380ef_@@CAKPEAUHCMNOTIFICATION__@@PEA.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800966A8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x91F, v2, v3);
}
