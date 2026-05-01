/*
 * XREFs of ?get_WindowTitle@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804222A0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEB_W@Z @ 0x1800F50FC (--0hstring@winrt@@QEAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_WindowTitle(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v10[2]; // [rsp+20h] [rbp-228h] BYREF
  WCHAR pString[256]; // [rsp+30h] [rbp-218h] BYREF

  *a2 = 0LL;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  if ( InternalGetWindowText(*(HWND *)v4, pString, 255) )
  {
    v8 = 0LL;
  }
  else
  {
    winrt::hstring::hstring((winrt::hstring *)v10, pString);
    v8 = v10[0];
  }
  v10[0] = 0LL;
  *a2 = v8;
  winrt::handle_type<winrt::impl::hstring_traits>::close(v10, v5, v6, v7);
  return 0LL;
}
