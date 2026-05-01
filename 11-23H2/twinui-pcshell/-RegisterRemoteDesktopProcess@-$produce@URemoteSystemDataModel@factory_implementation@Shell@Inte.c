/*
 * XREFs of ?RegisterRemoteDesktopProcess@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1807171E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::RegisterRemoteDesktopProcess(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((a1 - 24) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
      v3,
      a2,
      (const struct winrt::Windows::Foundation::Uri *)&v6,
      0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
