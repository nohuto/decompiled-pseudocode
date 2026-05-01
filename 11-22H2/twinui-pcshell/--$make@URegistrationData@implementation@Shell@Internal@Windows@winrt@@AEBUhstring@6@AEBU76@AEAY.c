/*
 * XREFs of ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@winrt@@YA?A_PAEBUhstring@0@0AEAY00$$CBG@Z @ 0x1807025A4
 * Callers:
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
        _QWORD *a1,
        winrt::impl **a2,
        winrt::impl **a3,
        ...)
{
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  struct winrt::impl::hstring_header *v10; // rdx
  unsigned int v11; // r8d
  _QWORD *v13; // [rsp+50h] [rbp+8h]
  va_list va; // [rsp+68h] [rbp+20h]
  winrt::impl *v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, winrt::impl *);
  v13 = operator new(0x30uLL);
  winrt::hstring::hstring((winrt::hstring *)va, &LocaleName);
  v13[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v13[1] = 1LL;
  *v13 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
  v13[3] = winrt::impl::duplicate_hstring(*a2, v6, v7);
  v13[4] = winrt::impl::duplicate_hstring(*a3, v8, v9);
  v13[5] = winrt::impl::duplicate_hstring(v15, v10, v11);
  *v13 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::RegistrationData>::`vftable';
  *a1 = v13 + 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)va);
  return a1;
}
