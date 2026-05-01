/*
 * XREFs of ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x18068ECAC
 * Callers:
 *     ?put_Completed@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAX@Z @ 0x180692F20 (-put_Completed@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@_ea_180692F20.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ @ 0x1804FD088 (--0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x18068E24C (--$invoke@U-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Founda_ea_18068E24C.c)
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x18068E468 (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Founda.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::Completed(
        __int64 a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h]

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
      winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        a2,
        a1,
        &v6);
  }
  else
  {
    v4 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>>(
           (winrt::Windows::Foundation::IUnknown *)&v7,
           a2);
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 56), v4);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    ReleaseSRWLockExclusive_0(SRWLock);
  }
}
