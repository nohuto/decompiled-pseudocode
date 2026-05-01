/*
 * XREFs of ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806E20C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x1806E2174 (-GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA-A.c)
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x1806E2288 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     ?GetPrimaryMonitorSize@@YA?AUSize@Foundation@Windows@winrt@@XZ @ 0x1806E26E0 (-GetPrimaryMonitorSize@@YA-AUSize@Foundation@Windows@winrt@@XZ.c)
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1806E8E40 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::DisplaySettingsChange(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // r8
  __int64 BackgroundHostForType; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  SharedDesktopBackgroundVisualHost *v10; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v9) >= 0 )
  {
    if ( v9 )
    {
      if ( (a3 & 0x2B) != 0 )
      {
        LOBYTE(v5) = 1;
        BackgroundHostForType = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType(
                                  a1,
                                  1LL,
                                  v5);
        if ( BackgroundHostForType != 0xFFFFFFFFLL )
        {
          winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
            a1,
            &v10,
            BackgroundHostForType);
          if ( v10 )
          {
            GetPrimaryMonitorSize(v8);
            SharedDesktopBackgroundVisualHost::Size(v10, (const struct winrt::Windows::Foundation::Size *)v8);
            if ( v10 )
              winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((volatile __int64 **)&v10);
          }
        }
      }
    }
  }
  return 0LL;
}
