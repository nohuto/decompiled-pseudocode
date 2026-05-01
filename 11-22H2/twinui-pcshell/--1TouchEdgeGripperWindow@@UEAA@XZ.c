/*
 * XREFs of ??1TouchEdgeGripperWindow@@UEAA@XZ @ 0x180658EEC
 * Callers:
 *     ??_G?$heap_implements@VTouchEdgeGripperWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x180656850 (--_G-$heap_implements@VTouchEdgeGripperWindow@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065B070 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 */

void __fastcall TouchEdgeGripperWindow::~TouchEdgeGripperWindow(TouchEdgeGripperWindow *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &TouchEdgeGripperWindow::`vftable';
  TouchEdgeGripperWindow::DestroyXamlWindow(this);
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 152));
  if ( *((_QWORD *)this + 18) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 144));
  if ( *((_QWORD *)this + 17) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 136));
  if ( *((_QWORD *)this + 16) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 128));
  if ( *((_QWORD *)this + 15) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 120));
  if ( *((_QWORD *)this + 12) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGripperWindow *)((char *)this + 96));
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 24,
    v2);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference((__int64)this);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
