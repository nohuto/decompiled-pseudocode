/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180719620
 * Callers:
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18070F66C (-CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712DCC (-GetRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68 (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 * Callees:
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@@Z @ 0x1800933D8 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, *a3, a2);
  winrt::impl::check_hresult_allow_bounds(&v6, v4);
  return a2;
}
