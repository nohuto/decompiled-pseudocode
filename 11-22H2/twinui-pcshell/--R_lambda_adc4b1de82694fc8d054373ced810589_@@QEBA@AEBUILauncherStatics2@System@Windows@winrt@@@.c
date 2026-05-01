/*
 * XREFs of ??R_lambda_adc4b1de82694fc8d054373ced810589_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x180705724
 * Callers:
 *     ?GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x180706970 (-GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AU-$IVectorView@UAppIn.c)
 *     ?GetProviderAppInfoForBoot@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x18072DB94 (-GetProviderAppInfoForBoot@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AU-$IVectorView.c)
 * Callees:
 *     ?FindUriSchemeHandlersAsync@?$consume_Windows_System_ILauncherStatics2@UILauncherStatics2@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18070604C (-FindUriSchemeHandlersAsync@-$consume_Windows_System_ILauncherStatics2@UILauncherStatics2@System.c)
 */

__int64 __fastcall _lambda_adc4b1de82694fc8d054373ced810589_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_System_ILauncherStatics2<winrt::Windows::System::ILauncherStatics2>::FindUriSchemeHandlersAsync(
    a3,
    a2,
    *a1);
  return a2;
}
