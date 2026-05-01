/*
 * XREFs of ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x180129594
 * Callers:
 *     ??1?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180128F2C (--1-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@de.c)
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator_::module_count_wrapper_winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator__::_1_::dtor$0 @ 0x1802B5974 (_wil--details--module_count_wrapper_winrt--Windows--Internal--UI--Themes--implementation--ThemeC.c)
 *     ??_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806E1F1C (--_GThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@@Z @ 0x180129030 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KU-$com_ptr@USharedDesktopBackgroundVisua.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@1@@Z @ 0x180129074 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180129978 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_180129978.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::~ThemeCoordinator(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 35);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__QEAA_XZ((char *)this + 264);
  if ( *((_QWORD *)this + 32) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 256));
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
    (__int64)this + 232,
    (__int64)this + 232,
    *(__int64 **)(*((_QWORD *)this + 29) + 8LL));
  std::_Deallocate<16,0>(*((_QWORD *)this + 29), 48LL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>,void *>>>(
    (__int64)this + 216,
    (__int64)this + 216,
    *(__int64 **)(*((_QWORD *)this + 27) + 8LL));
  std::_Deallocate<16,0>(*((_QWORD *)this + 27), 48LL);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 18);
  v3 = (wil::details *)*((_QWORD *)this + 17);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 16);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v2);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this + 15);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 32));
}
