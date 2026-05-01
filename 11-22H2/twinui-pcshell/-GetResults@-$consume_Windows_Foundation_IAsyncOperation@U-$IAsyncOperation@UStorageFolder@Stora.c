/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UStorageFolder@Storage@34@@impl@winrt@@QEBA@XZ @ 0x1800B01F4
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x1800B01A4 (--$wait_get@U-$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>,winrt::Windows::Storage::StorageFolder>::GetResults(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a2;
}
