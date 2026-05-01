/*
 * XREFs of ??1CShellSnapComponent@@UEAA@XZ @ 0x18065EFF0
 * Callers:
 *     ??_GCShellSnapComponent@@UEAAPEAXI@Z @ 0x18065FA58 (--_GCShellSnapComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ @ 0x180035324 (--1-$root_implements@VSnapLayoutProvider@@UIInspectable@@@impl@winrt@@MEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unordered_map@HIU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHI@std@@@2@@std@@QEAA@XZ @ 0x1802219C0 (--1-$unordered_map@HIU-$hash@H@std@@U-$equal_to@H@2@V-$allocator@U-$pair@$$CBHI@std@@@2@@std@@QE.c)
 *     ??1?$unordered_map@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@U?$hash@H@std@@U?$equal_to@H@4@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@@std@@QEAA@XZ @ 0x1802219CC (--1-$unordered_map@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$unordered_map@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@6@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@@std@@QEAA@XZ @ 0x1802219D8 (--1-$unordered_map@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@U-$hash@Uhstring@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065E79C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@s.c)
 *     ??1?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA@XZ @ 0x18065EE08 (--1-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistory@Sn.c)
 *     ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x18065F3F4 (--1InteractionTracker@SnapInteraction@@UEAA@XZ.c)
 *     ??1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ @ 0x18065F484 (--1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::~CShellSnapComponent(CShellSnapComponent *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  unsigned __int64 *v4; // rsi
  unsigned __int64 i; // rbp

  std::unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>::~unordered_map<winrt::hstring,CShellSnapComponent::SnapLaunchData>((__int64)this + 1752);
  if ( *((_QWORD *)this + 218) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CShellSnapComponent *)((char *)this + 1744));
  if ( *((_QWORD *)this + 217) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CShellSnapComponent *)((char *)this + 1736));
  std::unordered_map<int,unsigned int>::~unordered_map<int,unsigned int>((__int64)this + 1664);
  std::unordered_map<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>::~unordered_map<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>((__int64)this + 1600);
  std::_Deallocate<16,0>(
    *((void **)this + 195),
    (*((_QWORD *)this + 196) - *((_QWORD *)this + 195)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 195) = 0LL;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 197) = 0LL;
  std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
    v2,
    *((_QWORD ***)this + 193));
  std::_Deallocate<16,0>(*((void **)this + 193), 0x28uLL);
  if ( *((_QWORD *)this + 189) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 189);
  if ( *((_QWORD *)this + 188) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CShellSnapComponent *)((char *)this + 1504));
  CSnapComponentTelemetry::OnSnappingCancelled::~OnSnappingCancelled((CShellSnapComponent *)((char *)this + 1184));
  std::deque<SnapEducationHandler::ApplicationViewHistory>::~deque<SnapEducationHandler::ApplicationViewHistory>((void **)this + 139);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 1088);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 133);
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 936));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 936);
  if ( *((_QWORD *)this + 116) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CShellSnapComponent *)((char *)this + 928));
  if ( *((_QWORD *)this + 114) )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)this + 114);
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 784));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 784);
  v3 = (void *)*((_QWORD *)this + 95);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 97) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  SnapInteraction::InteractionTracker::~InteractionTracker((CShellSnapComponent *)((char *)this + 616));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 75);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 74);
  if ( *((_QWORD *)this + 73) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 73);
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 456));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)this + 456);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 54);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 53);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 52);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 51);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 50);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 49);
  if ( *((_QWORD *)this + 48) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((CShellSnapComponent *)((char *)this + 384));
  v4 = (unsigned __int64 *)((char *)this + 336);
  if ( *((_QWORD *)this + 41) )
  {
    for ( i = 0LL; i < *v4; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 41) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 41));
    *((_QWORD *)this + 41) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 38);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 37);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 32);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>(this);
}
