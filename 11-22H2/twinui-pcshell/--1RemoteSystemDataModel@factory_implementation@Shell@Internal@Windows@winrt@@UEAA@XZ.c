/*
 * XREFs of ??1RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18070ED30
 * Callers:
 *     ??_G?$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18070F550 (--_G-$heap_implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18027F1A4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemTimeOutInfoChan.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18046E084 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@URemoteSystemWindowAddedEven.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A7BC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@st.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18070EC00 (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::~RemoteSystemDataModel(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this)
{
  unsigned int **v2; // rcx
  __int64 v3; // rcx
  void *v4; // rdi

  v2 = (unsigned int **)((char *)this + 272);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 32) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 256));
  if ( *((_QWORD *)this + 29) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 29);
  if ( *((_QWORD *)this + 26) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 26);
  if ( *((_QWORD *)this + 23) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 23);
  if ( *((_QWORD *)this + 20) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs>>>::unconditional_release_ref((unsigned int **)this + 20);
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 152));
  if ( *((_QWORD *)this + 18) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)((char *)this + 144));
  std::_Deallocate<16,0>(
    *((void **)this + 11),
    (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    v3,
    *((_QWORD *)this + 9));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x20uLL);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::~RemoteSessionPersistenceHelper(*((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4));
    operator delete(v4);
  }
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
