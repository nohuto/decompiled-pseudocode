/*
 * XREFs of ?_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z @ 0x1806EC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::_OnXamlContentLoaded(
        RTL_SRWLOCK *this,
        const struct IInspectable *a2,
        const struct winrt::Windows::UI::Xaml::RoutedEventArgs *a3)
{
  RTL_SRWLOCK *v4; // rdi
  int Ptr_high; // esi
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  LOBYTE(this[26].Ptr) = 1;
  Ptr_high = HIDWORD(this[25].Ptr);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  try
  {
    SharedDesktopBackgroundVisualHost::SyncState((__int64)this, Ptr_high);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x25A,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
      v6);
  }
}
