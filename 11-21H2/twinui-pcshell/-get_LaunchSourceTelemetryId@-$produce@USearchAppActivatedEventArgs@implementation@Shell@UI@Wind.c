/*
 * XREFs of ?get_LaunchSourceTelemetryId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800F2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>::get_LaunchSourceTelemetryId(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v4; // rcx
  struct winrt::impl::hstring_header *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 64;
  if ( !a1 )
    v4 = 80LL;
  v5 = winrt::impl::duplicate_hstring(*(winrt::impl **)v4, (struct winrt::impl::hstring_header *)0x50);
  v10 = 0LL;
  *a2 = v5;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10, v6, v7, v8);
  return 0LL;
}
