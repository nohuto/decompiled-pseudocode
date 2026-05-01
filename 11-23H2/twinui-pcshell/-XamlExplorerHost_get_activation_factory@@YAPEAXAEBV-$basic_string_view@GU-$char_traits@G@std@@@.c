/*
 * XREFs of ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5728
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B555C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B44A4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     _lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator() @ 0x1800B5834 (_lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_--operator().c)
 */

_QWORD *__fastcall XamlExplorerHost_get_activation_factory(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r11
  __int64 v3; // rcx
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r11
  const unsigned __int16 *v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h]
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF

  v11 = 55LL;
  v10 = L"Windows.Internal.Shell.XamlExplorerHost.XamlApplication";
  if ( (unsigned __int8)lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(a1, a1, &v10) )
  {
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v12);
    return (_QWORD *)v12;
  }
  else
  {
    v11 = 67LL;
    v10 = L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow";
    if ( (unsigned __int8)lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(v1, v2, &v10) )
    {
      return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow();
    }
    else
    {
      v11 = 73LL;
      v10 = L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow_WASDK";
      if ( (unsigned __int8)lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(v3, v4, &v10) )
      {
        return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK();
      }
      else
      {
        v11 = 62LL;
        v10 = L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow";
        if ( (unsigned __int8)lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(v5, v6, &v10) )
        {
          return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow();
        }
        else
        {
          v11 = 68LL;
          v10 = L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow_WASDK";
          if ( (unsigned __int8)lambda_d046a7f0bb8829bd0b3dc4aa6cc3107c_::operator()(v7, v8, &v10) )
            return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow_WASDK();
          else
            return 0LL;
        }
      }
    }
  }
}
