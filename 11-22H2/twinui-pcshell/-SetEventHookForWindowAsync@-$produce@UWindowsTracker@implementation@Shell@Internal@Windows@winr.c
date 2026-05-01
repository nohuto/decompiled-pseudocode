/*
 * XREFs of ?SetEventHookForWindowAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAPEAX@Z @ 0x180725990
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UWindowId@UI@56@@Z @ 0x18027CB58 (-SetEventHookForWindowAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA-AUI.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker>::SetEventHookForWindowAsync(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    v5 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync(
           v4,
           (winrt::Windows::Foundation::IUnknown *)&v8,
           a2);
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
    *a3 = v6;
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
