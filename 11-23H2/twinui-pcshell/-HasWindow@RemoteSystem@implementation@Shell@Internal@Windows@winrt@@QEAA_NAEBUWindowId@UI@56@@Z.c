/*
 * XREFs of ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180729A90
 * Callers:
 *     ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1800BDAE0 (-GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windo.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?IndexOf@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@AEBUWindowId@UI@Windows@3@AEAI@Z @ 0x180729B00 (-IndexOf@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  RTL_SRWLOCK *v4; // rsi
  char v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 4;
  AcquireSRWLockShared(this + 4);
  v7 = 0;
  v5 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::IndexOf(
         &this[7],
         a2,
         &v7);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
