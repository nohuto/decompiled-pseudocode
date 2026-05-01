/*
 * XREFs of ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1806F9A9C
 * Callers:
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager____::_1_::dtor$1 @ 0x1806F96AB (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1806F96AB.c)
 *     ??1?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1806F99D4 (--1-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1806F9CDC (--_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1802D3C04 (--1-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@cereal.c)
 *     ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1803F94B0 (--1-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$abi@UIDeviceWat.c)
 *     ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x1806F9974 (--1-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$ab_ea_1806F9974.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::~DiscoverabilityManager(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>((void **)this + 59);
  if ( *((_QWORD *)this + 57) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 456));
  __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 55);
  __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 53);
  if ( *((_QWORD *)this + 52) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 416));
  if ( *((_QWORD *)this + 51) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 408));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 256));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 256);
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 128));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 128);
  if ( *((_QWORD *)this + 15) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 15);
  if ( *((_QWORD *)this + 14) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 14);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 24));
}
