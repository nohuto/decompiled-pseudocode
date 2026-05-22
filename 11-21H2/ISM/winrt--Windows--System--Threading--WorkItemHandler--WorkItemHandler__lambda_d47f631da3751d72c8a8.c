/*
 * XREFs of winrt::Windows::System::Threading::WorkItemHandler::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800C9150
 * Callers:
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800CA4B4 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800C9848 (winrt--impl--make_delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::System::Threading::WorkItemHandler::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
        __int64 a1,
        __int64 *a2)
{
  winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(a1);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
  return a1;
}
