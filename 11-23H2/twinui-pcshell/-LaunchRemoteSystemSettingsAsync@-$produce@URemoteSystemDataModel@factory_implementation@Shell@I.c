/*
 * XREFs of ?LaunchRemoteSystemSettingsAsync@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180715570
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1807155FC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::LaunchRemoteSystemSettingsAsync(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  *a3 = 0LL;
  try
  {
    v4 = (__int64 *)winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync();
    v5 = *v4;
    *v4 = 0LL;
    *a3 = v5;
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
