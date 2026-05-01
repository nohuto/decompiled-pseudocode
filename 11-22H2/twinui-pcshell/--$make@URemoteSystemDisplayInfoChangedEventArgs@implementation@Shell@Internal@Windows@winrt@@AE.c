/*
 * XREFs of ??$make@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x18070C3E8
 * Callers:
 *     ?NotifyDisplayInfoChanged@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@0@Z @ 0x180715F24 (-NotifyDisplayInfoChanged@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAX.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::hstring const &,winrt::hstring const &>(
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
  v11[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v11[1] = 1LL;
  *v11 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::`vftable';
  v11[3] = winrt::impl::duplicate_hstring(*a2, v6, v7);
  v11[4] = winrt::impl::duplicate_hstring(*a3, v8, v9);
  *v11 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::`vftable';
  *a1 = v11 + 2;
  return a1;
}
