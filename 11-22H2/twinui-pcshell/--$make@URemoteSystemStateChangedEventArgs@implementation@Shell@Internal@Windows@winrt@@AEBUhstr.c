/*
 * XREFs of ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBW4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@AEBW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C4C4
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState const &>(
        _QWORD *a1,
        winrt::impl **a2,
        _DWORD *a3)
{
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v9 = operator new(0x28uLL);
  v9[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v9[1] = 1LL;
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs>::`vftable';
  v9[3] = winrt::impl::duplicate_hstring(*a2, v6, v7);
  *((_DWORD *)v9 + 8) = *a3;
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs>::`vftable';
  *a1 = v9 + 2;
  return a1;
}
