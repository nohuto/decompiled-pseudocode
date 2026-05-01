/*
 * XREFs of ?WinEventProc@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180725A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x1800B1FEC (-Current@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1807255CC (-CheckAndRaiseEvent@WindowsTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::WinEventProc(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject,
        LONG idChild)
{
  volatile __int64 *v6; // rax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( event == 32769 && !idObject && !idChild )
  {
    v6 = winrt::Windows::Internal::Shell::implementation::WindowsTracker::Current(v7);
    winrt::Windows::Internal::Shell::implementation::WindowsTracker::CheckAndRaiseEvent(
      (RTL_SRWLOCK *)((*v6 - 16) & -(__int64)(*v6 != 0)),
      hwnd);
    if ( v7[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v7);
  }
}
