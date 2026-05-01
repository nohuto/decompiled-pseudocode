/*
 * XREFs of ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x18045B2FC
 * Callers:
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414 (_anonymous_namespace_--FindDashboardAppExtension.c)
 * Callees:
 *     ?FindAll@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x18004CEC8 (-FindAll@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtension.c)
 *     ??$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x18045AAE8 (--$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
        const struct winrt::param::hstring *a1,
        const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *a2,
        _QWORD *a3)
{
  _QWORD *v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_18098E268);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::FindAll(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      a1,
      a2,
      (unsigned int *)a3);
    _InterlockedDecrement64(&qword_18098E268);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E268);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6efd2761bda3320a8aa70aa0ac08757d_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      a1,
      v5);
  }
  return a1;
}
