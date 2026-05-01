/*
 * XREFs of ?TryGetTitleForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x18058B830
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetTitleForWindow(
        __int64 a1,
        unsigned int a2,
        volatile signed __int32 **a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v9[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pString[264]; // [rsp+30h] [rbp-228h] BYREF

  *a3 = 0LL;
  if ( InternalGetWindowText((HWND)a2, pString, 260) )
    winrt::hstring::hstring((winrt::hstring *)v9, pString);
  else
    winrt::hstring::hstring((winrt::hstring *)v9, &LocaleName);
  v7 = v9[0];
  v9[0] = 0LL;
  *a3 = v7;
  winrt::handle_type<winrt::impl::hstring_traits>::close(v9, v4, v5, v6);
  return 0LL;
}
