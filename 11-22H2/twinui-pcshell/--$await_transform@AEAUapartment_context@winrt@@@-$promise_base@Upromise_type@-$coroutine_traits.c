/*
 * XREFs of ??$await_transform@AEAUapartment_context@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_PAEAUapartment_context@2@@Z @ 0x1805FE518
 * Callers:
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180215A60 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,CVirtualDesktopManager *,IVirtualDesktop *,enum VirtualDesktopSwitchType>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::apartment_context &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v5 = *a3;
  *(_QWORD *)a2 = *a3;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2);
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
