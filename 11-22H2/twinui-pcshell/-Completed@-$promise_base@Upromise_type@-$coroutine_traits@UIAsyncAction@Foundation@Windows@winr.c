/*
 * XREFs of ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBUAsyncActionCompletedHandler@Foundation@Windows@3@@Z @ 0x180225C4C
 * Callers:
 *     ?put_Completed@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAX@Z @ 0x180229170 (-put_Completed@-$produce@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@_ea_180229170.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??$make_agile_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAsyncActionCompletedHandler@Foundation@Windows@1@AEBU2341@@Z @ 0x1800B1F14 (--$make_agile_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@@impl@winrt@@YA-AU.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBUAsyncActionCompletedHandler@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1802255C8 (--$invoke@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U-$promise_base@Up_ea_1802255C8.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ @ 0x1804FD088 (--0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::Completed(
        __int64 a1,
        _QWORD *a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+18h]
  char v8; // [rsp+68h] [rbp+20h] BYREF

  SRWLock = (PSRWLOCK)(a1 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( *(_BYTE *)(a1 + 92) )
  {
    winrt::hresult_illegal_delegate_assignment::hresult_illegal_delegate_assignment((winrt::hresult_illegal_delegate_assignment *)pExceptionObject);
    throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 92) = 1;
  v6 = *(_DWORD *)(a1 + 88);
  if ( v6 )
  {
    ReleaseSRWLockExclusive_0(SRWLock);
    if ( *a2 )
      winrt::impl::invoke<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        a2,
        a1,
        &v6);
  }
  else
  {
    v4 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler>(
           (winrt::Windows::Foundation::IUnknown *)&v8,
           (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2);
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 56), v4);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
    ReleaseSRWLockExclusive_0(SRWLock);
  }
}
