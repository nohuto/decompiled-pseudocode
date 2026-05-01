/*
 * XREFs of ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x18027E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18027E24C (-CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z.c)
 *     ?Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x18027E3B0 (-Current@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessEndedCallback(int *a1, char a2)
{
  char *v3; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v3 = winrt::Windows::Internal::Shell::implementation::ProcessTracker::Current(&v4);
    winrt::Windows::Internal::Shell::implementation::ProcessTracker::CheckAndRaiseEvent(
      (RTL_SRWLOCK *)((*(_QWORD *)v3 - 16LL) & -(__int64)(*(_QWORD *)v3 != 0LL)),
      *a1);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  }
}
