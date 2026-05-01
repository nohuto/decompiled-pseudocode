/*
 * XREFs of ?TryGetTitleForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180649E80
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetTitleForWindow(
        __int64 a1,
        unsigned int a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v6[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pString[264]; // [rsp+30h] [rbp-228h] BYREF

  *a3 = 0LL;
  if ( InternalGetWindowText((HWND)a2, pString, 260) )
    winrt::hstring::hstring((winrt::hstring *)v6, pString);
  else
    winrt::hstring::hstring((winrt::hstring *)v6, &LocaleName);
  v4 = v6[0];
  v6[0] = 0LL;
  *a3 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
  return 0LL;
}
