/*
 * XREFs of ?UnhookEventForAllWindowsAsync@?$produce@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801BA050
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18027CF14 (-UnhookEventForAllWindowsAsync@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTracker>::UnhookEventForAllWindowsAsync(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 *)winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync(
                    (a1 - 16) & -(__int64)(a1 != 0),
                    &v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
