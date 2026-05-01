/*
 * XREFs of ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x1803E3094
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806962D8 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?CreateStringValue@?$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E33E0 (-CreateStringValue@-$consume_Windows_Data_Json_IJsonValueStatics@UIJsonValueStatics@Json@Data@Wi.c)
 */

__int64 __fastcall _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Data_Json_IJsonValueStatics<winrt::Windows::Data::Json::IJsonValueStatics>::CreateStringValue(
    a3,
    a2,
    *a1);
  return a2;
}
