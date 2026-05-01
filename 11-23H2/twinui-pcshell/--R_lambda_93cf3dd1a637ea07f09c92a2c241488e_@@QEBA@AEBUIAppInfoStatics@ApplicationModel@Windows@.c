/*
 * XREFs of ??R_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@QEBA@AEBUIAppInfoStatics@ApplicationModel@Windows@winrt@@@Z @ 0x1803D4E10
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1806A75BC (_anonymous_namespace_--TryGetPackagedAppDisplayName.c)
 * Callees:
 *     ?GetFromAppUserModelId@?$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803D8274 (-GetFromAppUserModelId@-$consume_Windows_ApplicationModel_IAppInfoStatics@UIAppInfoStatics@Appli.c)
 */

__int64 __fastcall _lambda_93cf3dd1a637ea07f09c92a2c241488e_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_ApplicationModel_IAppInfoStatics<winrt::Windows::ApplicationModel::IAppInfoStatics>::GetFromAppUserModelId(
    a3,
    a2,
    *a1);
  return a2;
}
