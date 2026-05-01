/*
 * XREFs of ??$detach_abi@URemoteDesktopInformation@Shell@Internal@Windows@winrt@@$0A@@winrt@@YA?A_P$$QEAURemoteDesktopInformation@Shell@Internal@Windows@0@@Z @ 0x18071EF58
 * Callers:
 *     ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x180721730 (-GetRemoteDesktopInformation@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::detach_abi<winrt::Windows::Internal::Shell::RemoteDesktopInformation,0>(
        __int64 a1,
        _DWORD *a2)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx

  v2 = (volatile signed __int32 **)(a1 + 8);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = *a2;
  v5 = (volatile signed __int32 **)(a2 + 2);
  if ( (_DWORD *)(a1 + 8) != a2 + 2 )
  {
    v6 = *v5;
    *v5 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v2);
    *v2 = v6;
  }
  v7 = (__int64 *)(a2 + 4);
  if ( (_DWORD *)(a1 + 16) != a2 + 4 )
  {
    v8 = *v7;
    *v7 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 16));
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = v8;
  }
  return a1;
}
