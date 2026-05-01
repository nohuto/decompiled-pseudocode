/*
 * XREFs of ?remove_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180413100
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180412F50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::remove_StateChanged(
        __int64 a1,
        void *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx

  v4 = a1 + 160;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 64;
  if ( !a1 )
    v5 = 80LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(
    v5,
    a2);
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  return 0LL;
}
