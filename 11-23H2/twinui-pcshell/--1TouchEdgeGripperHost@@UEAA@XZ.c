/*
 * XREFs of ??1TouchEdgeGripperHost@@UEAA@XZ @ 0x18018300C
 * Callers:
 *     ??_E?$heap_implements@VTouchEdgeGripperHost@@@impl@winrt@@UEAAPEAXI@Z @ 0x180182F80 (--_E-$heap_implements@VTouchEdgeGripperHost@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?subtract_reference@?$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@IEAAIXZ @ 0x1800B1C58 (-subtract_reference@-$root_implements@UDesktopTaskGroupsSwitchItemController@factory_implementat.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall TouchEdgeGripperHost::~TouchEdgeGripperHost(TouchEdgeGripperHost *this, __int64 a2)
{
  __int64 v3; // rdx
  void *v4; // rdx
  char *v5; // rcx
  wil::details *v6; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<TouchEdgeGripperHost>::`vftable';
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 168,
    a2);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 104,
    v3);
  if ( *((_QWORD *)this + 11) )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)this + 11);
  if ( *((_QWORD *)this + 10) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperHost *)((char *)this + 80));
  if ( *((_QWORD *)this + 9) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperHost *)((char *)this + 72));
  if ( *((_QWORD *)this + 8) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperHost *)((char *)this + 64));
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref();
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  v5 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = (wil::details *)*((_QWORD *)this + 4);
  if ( v6 )
    wil::details::CloseHandle(v6, v4);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
