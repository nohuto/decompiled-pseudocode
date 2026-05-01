/*
 * XREFs of ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAIAEA_N@winrt@@YA?A_PAEAUhstring@0@AEAIAEA_N@Z @ 0x18070C104
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool &>(
        _QWORD *a1,
        winrt::impl **a2,
        _DWORD *a3,
        _BYTE *a4)
{
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  _QWORD *v11; // [rsp+50h] [rbp+8h]

  v11 = operator new(0x28uLL);
  v11[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::Windows::Internal::Shell::IProcessInfoChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v11[1] = 1LL;
  *v11 = &winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::`vftable';
  v11[3] = winrt::impl::duplicate_hstring(*a2, v8, v9);
  *((_DWORD *)v11 + 8) = *a3;
  *((_BYTE *)v11 + 36) = *a4;
  *v11 = &winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs::`vftable';
  *a1 = v11 + 2;
  return a1;
}
