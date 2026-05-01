/*
 * XREFs of ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x180721730
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x180712C98 (-GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ??$detach_abi@URemoteDesktopInformation@Shell@Internal@Windows@winrt@@$0A@@winrt@@YA?A_P$$QEAURemoteDesktopInformation@Shell@Internal@Windows@0@@Z @ 0x18071EF58 (--$detach_abi@URemoteDesktopInformation@Shell@Internal@Windows@winrt@@$0A@@winrt@@YA-A_P$$QEAURe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteDesktopInformation(
        volatile __int64 *a1,
        __int64 a2)
{
  __int64 *FactoryImplObj; // rax
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v6; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]
  volatile __int64 *v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  try
  {
    FactoryImplObj = (__int64 *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v10);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(
      *FactoryImplObj,
      (__int64)&v5);
    if ( v10 )
      winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v10);
    winrt::detach_abi<winrt::Windows::Internal::Shell::RemoteDesktopInformation,0>((__int64)&v8, &v5);
    *(_OWORD *)a2 = v8;
    *(_QWORD *)(a2 + 16) = v9;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10) = *winrt::to_hresult(&v10);
    return (unsigned int)v10;
  }
  return result;
}
