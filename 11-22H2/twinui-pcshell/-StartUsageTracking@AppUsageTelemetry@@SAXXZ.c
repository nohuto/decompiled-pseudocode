/*
 * XREFs of ?StartUsageTracking@AppUsageTelemetry@@SAXXZ @ 0x1806201F0
 * Callers:
 *     ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x180620290 (-StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall AppUsageTelemetry::StartUsageTracking(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                   a1,
                   (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x2000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18086F78E, 0LL, 0LL, 3u, &v4);
    }
  }
}
