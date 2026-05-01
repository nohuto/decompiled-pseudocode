/*
 * XREFs of ??$make@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEAY00$$CBG@winrt@@YA?A_PAEBUhstring@0@AEAY00$$CBG@Z @ 0x1807028F4
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x180705438 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::hstring const &,unsigned short const (&)[1]>(
        _QWORD *a1,
        __int64 a2,
        winrt::impl *a3)
{
  struct winrt::impl::hstring_header *v4; // rdx
  unsigned int v5; // r8d
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v9; // [rsp+48h] [rbp+10h]
  winrt::impl *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = operator new(0x28uLL);
  winrt::hstring::hstring((winrt::hstring *)&v10, &LocaleName);
  v9[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::IRemoteDesktopProviderInfo>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v9[1] = 1LL;
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  v9[3] = winrt::impl::duplicate_hstring((winrt::impl *)c_bootSystemId, v4, v5);
  v9[4] = winrt::impl::duplicate_hstring(v10, v6, v7);
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo>::`vftable';
  *a1 = v9 + 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v10);
  return a1;
}
