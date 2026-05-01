/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@@winrt@@YA?A_P$$QEAUhstring@0@0@Z @ 0x18071F5A0
 * Callers:
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180720A38 (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180721FD8 (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,winrt::hstring>(
        _QWORD *a1,
        winrt::impl **a2,
        winrt::impl **a3)
{
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  _QWORD *v11; // [rsp+50h] [rbp+8h]

  v11 = operator new(0x28uLL);
  v11[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::IRemoteDesktopProviderInfo>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v11[1] = 1LL;
  *v11 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  v11[3] = winrt::impl::duplicate_hstring(*a2, v6, v7);
  v11[4] = winrt::impl::duplicate_hstring(*a3, v8, v9);
  *v11 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  *a1 = v11 + 2;
  return a1;
}
