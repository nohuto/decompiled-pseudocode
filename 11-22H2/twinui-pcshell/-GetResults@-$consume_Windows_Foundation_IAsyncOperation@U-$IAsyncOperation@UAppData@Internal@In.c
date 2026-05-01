/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x180696A74
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x180694D90 (--$wait_get@U-$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData>::GetResults(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a2;
}
