/*
 * XREFs of ?get_LaunchSourceTelemetryId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800DB8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>::get_LaunchSourceTelemetryId(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v4; // rcx
  winrt::impl *v5; // rcx
  struct winrt::impl::hstring_header *v6; // rax
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 64;
  if ( !a1 )
    v4 = 80LL;
  v5 = *(winrt::impl **)v4;
  try
  {
    v6 = winrt::impl::duplicate_hstring(v5, (struct winrt::impl::hstring_header *)0x50);
    v8 = 0LL;
    *a2 = v6;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
