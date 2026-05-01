/*
 * XREFs of ?ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4BackgroundIdentifier@34567@@Z @ 0x1806E39C8
 * Callers:
 *     ?ShutdownHostForId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH@Z @ 0x1806E3970 (-ShutdownHostForId@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8DB8 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ShutdownHostForId(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int64 BackgroundHostForType; // rax
  bool v5; // dl
  __int64 v6; // rcx
  SharedDesktopBackgroundVisualHost *v7; // [rsp+40h] [rbp+18h] BYREF

  BackgroundHostForType = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(
                            a1,
                            a2,
                            0);
  if ( BackgroundHostForType != 0xFFFFFFFF )
  {
    winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
      a1,
      &v7,
      BackgroundHostForType);
    if ( v7 )
    {
      SharedDesktopBackgroundVisualHost::Shutdown(v7, v5);
      if ( v7 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v7);
    }
  }
  if ( a2 == 1 )
  {
    v6 = *(_QWORD *)(a1 + 280);
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
