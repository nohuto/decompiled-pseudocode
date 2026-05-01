/*
 * XREFs of ?DataSource@CachedDataSource@@QEBA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@XZ @ 0x180763924
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?TaskGroupItemCount@CachedDataSource@@QEBAHXZ @ 0x180766A3C (-TaskGroupItemCount@CachedDataSource@@QEBAHXZ.c)
 * Callees:
 *     ??$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007D1CC (--$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UI.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall CachedDataSource::DataSource(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rdx

  v3 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 32);
  if ( v3 )
  {
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      a2,
      v3);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 40);
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
  }
  return a2;
}
