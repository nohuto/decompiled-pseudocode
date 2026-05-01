/*
 * XREFs of ??$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18070C654
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::hstring const &,std::chrono::duration<__int64,std::ratio<1,10000000>> const &>(
        _QWORD *a1,
        winrt::impl **a2,
        _QWORD *a3)
{
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v9 = operator new(0x28uLL);
  v9[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemTimeOutInfoChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v9[1] = 1LL;
  *v9 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs::`vftable';
  v9[3] = winrt::impl::duplicate_hstring(*a2, v6, v7);
  v9[4] = *a3;
  *v9 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs>::`vftable';
  *a1 = v9 + 2;
  return a1;
}
