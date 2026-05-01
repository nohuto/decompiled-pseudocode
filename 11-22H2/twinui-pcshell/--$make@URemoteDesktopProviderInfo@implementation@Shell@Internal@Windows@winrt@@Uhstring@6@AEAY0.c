/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@AEAY00$$CBG@winrt@@YA?A_P$$QEAUhstring@0@AEAY00$$CBG@Z @ 0x18071F480
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring,unsigned short const (&)[1]>(
        _QWORD *a1,
        winrt::impl **a2,
        winrt::impl *a3)
{
  struct winrt::impl::hstring_header *v5; // rdx
  unsigned int v6; // r8d
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  _QWORD *v10; // [rsp+50h] [rbp+8h]
  winrt::impl *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = operator new(0x28uLL);
  winrt::hstring::hstring((winrt::hstring *)&v11, &LocaleName);
  v10[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::IRemoteDesktopProviderInfo>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v10[1] = 1LL;
  *v10 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  v10[3] = winrt::impl::duplicate_hstring(*a2, v5, v6);
  v10[4] = winrt::impl::duplicate_hstring(v11, v7, v8);
  *v10 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  *a1 = v10 + 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
  return a1;
}
