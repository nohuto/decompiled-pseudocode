/*
 * XREFs of ?GetRemoteSystemName@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1807217F0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180725DD8 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteSystemName(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rax
  __int64 result; // rax
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *a2 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::GetRemoteDesktopName();
    v3 = v5;
    v5 = 0LL;
    *a2 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
