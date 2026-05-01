/*
 * XREFs of ?SwitchToRemoteDesktop@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHPEAX@Z @ 0x180718E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180718E60 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics>::SwitchToRemoteDesktop(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((a1 - 24) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SwitchToRemoteDesktop(
      v2,
      (const struct winrt::hstring *)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
