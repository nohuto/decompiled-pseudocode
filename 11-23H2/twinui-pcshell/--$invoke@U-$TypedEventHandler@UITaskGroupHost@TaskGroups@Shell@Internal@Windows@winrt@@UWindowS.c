/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@34@UWindowStateChangedEventArgs@78934@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@1@AEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@41@AEBUWindowStateChangedEventArgs@78941@@Z @ 0x180153324
 * Callers:
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x180153224 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>,winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a2 + 16, *a3);
  if ( v3 < 0 )
  {
    try
    {
      winrt::throw_hresult((unsigned int)v3);
    }
    catch ( ... )
    {
      v8 = &v9;
      v5 = *(_DWORD *)winrt::to_hresult(v8 + 6);
      ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
        v7,
        v6,
        &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>,winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>'::`4'::handler);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>,winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>'::`4'::handler)(
        v5,
        0LL,
        0LL);
      return v5 != -2147417848 && v5 != -2147023174 && v5 != -1996357631;
    }
  }
  return 1;
}
