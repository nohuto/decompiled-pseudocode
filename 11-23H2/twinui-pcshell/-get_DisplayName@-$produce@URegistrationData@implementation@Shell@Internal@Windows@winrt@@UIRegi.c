/*
 * XREFs of ?get_DisplayName@?$produce@URegistrationData@implementation@Shell@Internal@Windows@winrt@@UIRegistrationData@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1807262C0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::get_DisplayName(
        __int64 a1,
        struct winrt::impl::hstring_header **a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  winrt::impl *v6; // rcx
  struct winrt::impl::hstring_header *v7; // rax
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  v6 = *(winrt::impl **)v5;
  try
  {
    v7 = winrt::impl::duplicate_hstring(v6, (struct winrt::impl::hstring_header *)0x28, a3);
    v9 = 0LL;
    *a2 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
