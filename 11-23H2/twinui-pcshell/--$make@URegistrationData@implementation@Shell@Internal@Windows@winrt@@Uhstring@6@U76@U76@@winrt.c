/*
 * XREFs of ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@Uhstring@6@U76@U76@@winrt@@YA?A_P$$QEAUhstring@0@00@Z @ 0x1807027F0
 * Callers:
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801ADAC0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring,winrt::hstring,winrt::hstring>(
        _QWORD *a1,
        winrt::impl **a2,
        winrt::impl **a3,
        winrt::impl **a4)
{
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  struct winrt::impl::hstring_header *v10; // rdx
  unsigned int v11; // r8d
  struct winrt::impl::hstring_header *v12; // rdx
  unsigned int v13; // r8d
  _QWORD *v15; // [rsp+50h] [rbp+8h]

  v15 = operator new(0x30uLL);
  v15[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v15[1] = 1LL;
  *v15 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
  v15[3] = winrt::impl::duplicate_hstring(*a2, v8, v9);
  v15[4] = winrt::impl::duplicate_hstring(*a3, v10, v11);
  v15[5] = winrt::impl::duplicate_hstring(*a4, v12, v13);
  *v15 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RegistrationData>::`vftable';
  *a1 = v15 + 2;
  return a1;
}
