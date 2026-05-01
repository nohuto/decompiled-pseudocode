/*
 * XREFs of ?SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x1806FC2E8
 * Callers:
 *     ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806FC390 (-WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VDiscoverablityManagerLogger@@@details@wil@@QEAAPEAVDiscoverablityManagerLogger@@P6AXXZ@Z @ 0x1806FCB5C (-get@-$static_lazy@VDiscoverablityManagerLogger@@@details@wil@@QEAAPEAVDiscoverablityManagerLogg.c)
 */

void __fastcall DiscoverablityManagerTelemetry::SnappedChangedConditionMet(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<DiscoverablityManagerLogger>::get(
                      a1,
                      _lambda_81411513ad094842fbc17151a1395e28_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18087BC95, 0LL, 0LL, 3u, &v4);
    }
  }
}
