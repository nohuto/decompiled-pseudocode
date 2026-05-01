/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_a02d817213a1872483990d5857a507da_@@CA@AEBUIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@Z @ 0x180089C20
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenForCurrentUser@?$consume_Windows_ApplicationModel_IPackageCatalogStatics@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180089C48 (-OpenForCurrentUser@-$consume_Windows_ApplicationModel_IPackageCatalogStatics@UIPackageCatalogSt.c)
 */

const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *__fastcall _lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_ApplicationModel_IPackageCatalogStatics<winrt::Windows::ApplicationModel::IPackageCatalogStatics>::OpenForCurrentUser(
    a2,
    a1);
  return a1;
}
