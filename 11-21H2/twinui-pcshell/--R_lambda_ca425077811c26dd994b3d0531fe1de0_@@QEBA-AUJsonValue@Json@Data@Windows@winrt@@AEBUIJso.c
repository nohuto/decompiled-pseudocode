/*
 * XREFs of ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA?AUJsonValue@Json@Data@Windows@winrt@@AEBUIJsonValueStatics@2345@@Z @ 0x1801C5768
 * Callers:
 *     ??$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@?$factory_cache_entry@UJsonValue@Json@Data@Windows@winrt@@UIJsonValueStatics@2345@@impl@winrt@@QEAA?AUJsonValue@Json@Data@Windows@2@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@Z @ 0x1801C252C (--$call@AEAV_lambda_ca425077811c26dd994b3d0531fe1de0_@@@-$factory_cache_entry@UJsonValue@Json@Da.c)
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(_QWORD **a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a3 + 80LL))(*a3, **a1, &v6);
  winrt::check_hresult(v4);
  *a2 = v6;
  return a2;
}
