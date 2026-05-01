/*
 * XREFs of ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807155FC
 * Callers:
 *     ?LaunchRemoteSystemSettingsAsync@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180715570 (-LaunchRemoteSystemSettingsAsync@-$produce@URemoteSystemDataModel@factory_implementation@Shell@I.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180715790 (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x1803F6FA4 (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 *     ??R_lambda_0a61d549bec6c444b35123f4c9509ca7_@@QEBA@AEBUIUriRuntimeClassFactory@Foundation@Windows@winrt@@@Z @ 0x1803F9F20 (--R_lambda_0a61d549bec6c444b35123f4c9509ca7_@@QEBA@AEBUIUriRuntimeClassFactory@Foundation@Window.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@UUri@856@@Z @ 0x180714454 (-LaunchAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  struct winrt::impl::shared_hstring_header **v7; // rax
  __int64 *v8; // rax
  struct winrt::impl::shared_hstring_header **v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  volatile signed __int32 *v12; // [rsp+28h] [rbp-58h] BYREF
  struct winrt::impl::shared_hstring_header *v13; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-48h] BYREF
  struct winrt::impl::shared_hstring_header *v15; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v16[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+28h] BYREF
  __int64 *v19; // [rsp+B8h] [rbp+38h] BYREF

  v18 = a2;
  v6 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
         a3,
         v16);
  v7 = winrt::operator+(&v15, (__int64 *)&c_remoteSystemSettingsUri, (__int64)L"?");
  v8 = (__int64 *)winrt::operator+((__int64)&v14, (__int64)v7, (__int64)&c_remoteDesktopIdQueryParam);
  v9 = winrt::operator+(&v13, v8, (__int64)L"=");
  v17 = *(_QWORD *)winrt::operator+((__int64)&v12, (__int64)v9, v6);
  v19 = &v17;
  v16[1] = (volatile signed __int32 *)&qword_180990828;
  _InterlockedIncrement64(&qword_180990828);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    _lambda_0a61d549bec6c444b35123f4c9509ca7_::operator()(
      &v19,
      &v18,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>);
    _InterlockedDecrement64(&qword_180990828);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990828);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      v10,
      &v18,
      &v19);
  }
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchAsync(
    a1,
    a2,
    a3,
    (winrt::Windows::Foundation::IUnknown *)&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v16);
  return a2;
}
