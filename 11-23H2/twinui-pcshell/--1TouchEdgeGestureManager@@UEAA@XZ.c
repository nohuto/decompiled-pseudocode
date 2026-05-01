/*
 * XREFs of ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x180142CD8
 * Callers:
 *     ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BD724 (--_E-$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18012C948 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x180144D38 (--1TouchEdgeGestureProcessor@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU123@AEAV?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@0@@Z @ 0x1801B6130 (--$_Destroy_range@V-$allocator@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGestureManager::~TouchEdgeGestureManager(TouchEdgeGestureManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,ITouchEdgeGesture,void>'};
  *((_QWORD *)this + 1) = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,IGameFocusEvents,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchEdgeGestureManager>::`vftable';
  v2 = *((_QWORD *)this + 52);
  if ( v2 )
  {
    ____Destroy_range_V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__YAXPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU123_AEAV__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___0__Z(
      v2,
      *((_QWORD *)this + 53));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 52),
      (*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  std::_Deallocate<16,0>(
    *((_QWORD *)this + 47),
    (*((_QWORD *)this + 48) - *((_QWORD *)this + 47)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
    v3,
    *((_QWORD *)this + 45));
  std::_Deallocate<16,0>(*((_QWORD *)this + 45), 32LL);
  SmartCookie::Unregister((TouchEdgeGestureManager *)((char *)this + 216));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 216);
  TouchEdgeGestureProcessor::~TouchEdgeGestureProcessor((TouchEdgeGestureManager *)((char *)this + 96));
  if ( *((_QWORD *)this + 11) )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref((char *)this + 88);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 10);
  if ( *((_QWORD *)this + 9) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 9);
  if ( *((_QWORD *)this + 8) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 8);
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference((__int64)this + 24);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
