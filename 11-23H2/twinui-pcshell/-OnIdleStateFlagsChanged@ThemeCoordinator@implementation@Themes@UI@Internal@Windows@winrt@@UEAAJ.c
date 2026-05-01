/*
 * XREFs of ?OnIdleStateFlagsChanged@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1806E3210
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::OnIdleStateFlagsChanged(
        __int64 a1,
        char a2)
{
  __int64 v2; // rbx
  unsigned __int64 BackgroundHostForType; // rax
  volatile __int64 *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (a2 & 2) != 0 )
  {
    v2 = a1 - 8;
    BackgroundHostForType = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(
                              a1 - 8,
                              1u,
                              0);
    if ( BackgroundHostForType != 0xFFFFFFFF )
    {
      winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
        v2,
        &v5,
        BackgroundHostForType);
      if ( v5 )
      {
        SharedDesktopBackgroundVisualHost::SyncState(v5, 16LL);
        if ( v5 )
          winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v5);
      }
    }
  }
  return 0LL;
}
