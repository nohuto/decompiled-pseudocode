/*
 * XREFs of ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18056EB14
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x1801B8D00 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8D00.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x1801B9170 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B9170.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x18001F32C (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x18056BDAC (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_ea_18056BDAC.c)
 */

char __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  char v4; // di
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  v6 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  v4 = 1;
  if ( !*(_DWORD *)(v2 + 88) )
    *(_DWORD *)(v2 + 88) = 1;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)&v6,
    (winrt::Windows::Foundation::IUnknown *)(v2 + 56));
  ReleaseSRWLockExclusive_0((PSRWLOCK)(v2 + 48));
  if ( v6 )
  {
    winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
      (__int64)&v6,
      v2);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  if ( !(unsigned int)winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_reference(*a1) )
    return 0;
  return v4;
}
