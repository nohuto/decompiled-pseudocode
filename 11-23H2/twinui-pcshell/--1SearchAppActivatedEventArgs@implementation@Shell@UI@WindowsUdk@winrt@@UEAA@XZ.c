/*
 * XREFs of ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1800B19FC
 * Callers:
 *     ??_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1800B19C0 (--_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 144);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 136);
  if ( *((_QWORD *)this + 15) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 120));
  if ( *((_QWORD *)this + 13) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 104));
  if ( *((_QWORD *)this + 12) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *)((char *)this + 96));
  winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 80);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference(this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
