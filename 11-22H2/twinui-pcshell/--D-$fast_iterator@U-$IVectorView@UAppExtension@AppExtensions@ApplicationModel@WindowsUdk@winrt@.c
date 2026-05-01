/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x18045ACD0
 * Callers:
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@5@@impl@winrt@@QEBA@I@Z @ 0x18004CE68 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppExtension@AppExte.c)
 */

_QWORD *__fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
        __int64 a1,
        _QWORD *a2)
{
  winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>,winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::GetAt(
    *(_QWORD **)a1,
    a2,
    *(_DWORD *)(a1 + 8));
  return a2;
}
