/*
 * XREFs of ?Release@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAKXZ @ 0x18022CFE8
 * Callers:
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18022CFB0 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windows.c)
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18022CFD0 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Window.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@impl@winrt@@IEAAIXZ @ 0x1800D9A88 (-subtract_reference@-$root_implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Release(
        __int64 a1)
{
  unsigned int v2; // ebx

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback<std::_Binder<std::_Unforced,winrt::fire_and_forget (*)(std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int),std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData> &,winrt::com_ptr<IServiceProvider> &,Geometry::CRect,unsigned int>>,winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::subtract_reference(a1);
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 120) |= 1uLL;
    (*(void (__fastcall **)(__int64))(a1 + 112))(a1 + 112);
  }
  return v2;
}
