/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6303e3e5e10b4f0abde3a9b07bd3902f_@@CA@AEBUIUserDataPathsStatics@Storage@Windows@winrt@@@Z @ 0x1801B38D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefault@?$consume_Windows_Storage_IUserDataPathsStatics@UIUserDataPathsStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B38F8 (-GetDefault@-$consume_Windows_Storage_IUserDataPathsStatics@UIUserDataPathsStatics@Storage@Windo.c)
 */

const struct winrt::Windows::Storage::IUserDataPathsStatics *__fastcall _lambda_6303e3e5e10b4f0abde3a9b07bd3902f_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Storage::IUserDataPathsStatics *a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_Storage_IUserDataPathsStatics<winrt::Windows::Storage::IUserDataPathsStatics>::GetDefault(
    a2,
    a1);
  return a1;
}
