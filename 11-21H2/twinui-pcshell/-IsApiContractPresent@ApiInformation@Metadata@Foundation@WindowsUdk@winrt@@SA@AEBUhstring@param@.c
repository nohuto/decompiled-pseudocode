/*
 * XREFs of ?IsApiContractPresent@ApiInformation@Metadata@Foundation@WindowsUdk@winrt@@SA@AEBUhstring@param@5@G@Z @ 0x180353EC4
 * Callers:
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ??$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@V_lambda_9553f26b39c360ab0f553b854f05e574_@@@impl@winrt@@YA_N$$QEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031430 (--$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@23.c)
 */

char __fastcall winrt::WindowsUdk::Foundation::Metadata::ApiInformation::IsApiContractPresent(
        const struct winrt::param::hstring *a1,
        __int16 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v3[0] = a1;
  v3[1] = &v4;
  return winrt::impl::call_factory<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics,_lambda_9553f26b39c360ab0f553b854f05e574_>((__int64)v3);
}
