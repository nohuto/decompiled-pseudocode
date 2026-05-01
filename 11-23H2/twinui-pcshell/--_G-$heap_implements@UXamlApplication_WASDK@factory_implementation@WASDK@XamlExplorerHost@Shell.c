/*
 * XREFs of ??_G?$heap_implements@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804F54C0
 * Callers:
 *     <none>
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

char *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>::`scalar deleting destructor'(
        char *Block,
        char a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v4 = (winrt::Windows::Foundation::IUnknown *)(Block + 40);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)Block);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
