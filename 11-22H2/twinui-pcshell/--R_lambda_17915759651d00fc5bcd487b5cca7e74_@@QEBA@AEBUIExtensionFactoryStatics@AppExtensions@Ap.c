/*
 * XREFs of ??R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x180088F08
 * Callers:
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0AEBW4AppExtensionOptions@2345@@Z @ 0x180088154 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@par.c)
 *     ??$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@Z @ 0x180088DFC (--$call@AEAV_lambda_17915759651d00fc5bcd487b5cca7e74_@@@-$factory_cache_entry@UExtensionFactory@.c)
 * Callees:
 *     ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x180088F88 (-GetFactory@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExten.c)
 */

__int64 __fastcall _lambda_17915759651d00fc5bcd487b5cca7e74_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2]);
  return a2;
}
