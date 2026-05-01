/*
 * XREFs of ??$invoke@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@UProcessInfoChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBUProcessInfoChangedEventArgs@7841@@Z @ 0x18070BBCC
 * Callers:
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UProcessInfoChangedEventArgs@2345@@?$event@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBUProcessInfoChangedEventArgs@4561@@Z @ 0x180709314 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UProcessInfoCha.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??B?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18070EF2C (--B-$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIAc.c)
 *     ??R?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBUProcessInfoChangedEventArgs@Shell@Internal@23@@Z @ 0x18070F0E0 (--R-$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::operator winrt::Windows::Foundation::IInspectable(
    a2,
    &v6);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>::operator()();
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  catch ( ... )
  {
    v3 = *winrt::to_hresult(&v6);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v5,
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>,winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
