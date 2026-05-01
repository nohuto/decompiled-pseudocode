/*
 * XREFs of ?IsLocalSessionCapableOf@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHHPEA_N@Z @ 0x180721ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B4084 (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ?IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x1807141B0 (-IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsLocalSessionCapableOf(
        char *a1,
        int a2,
        bool *a3)
{
  char *v4; // rbx
  bool IsLocalSessionCapableOf; // di
  __int64 result; // rax
  char *v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  try
  {
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(&v7);
    if ( v7 )
      v4 = v7 - 16;
    else
      v4 = 0LL;
    v7 = v4;
    IsLocalSessionCapableOf = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::IsLocalSessionCapableOf(
                                (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)v4,
                                (const enum winrt::Windows::Internal::Shell::LocalCapabilities *)&v8);
    if ( v4 )
      winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref((volatile __int64 **)&v7);
    *a3 = IsLocalSessionCapableOf;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
