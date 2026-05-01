/*
 * XREFs of ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@3@@Z @ 0x1801C5E1C
 * Callers:
 *     ?put_Completed@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAX@Z @ 0x1801CF940 (-put_Completed@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windo.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1801C2C78 (--$invoke@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U-$promise_base@Upromis.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ @ 0x18041CF50 (--0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ.c)
 *     ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU2341@@Z @ 0x18056C004 (--$make_agile_delegate@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@@impl@winr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::Completed(
        __int64 a1,
        _QWORD *a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+18h]

  SRWLock = (PSRWLOCK)(a1 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( *(_BYTE *)(a1 + 92) )
  {
    winrt::hresult_illegal_delegate_assignment::hresult_illegal_delegate_assignment((winrt::hresult_illegal_delegate_assignment *)pExceptionObject);
    throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 92) = 1;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v6 = *(_DWORD *)(a1 + 88);
    ReleaseSRWLockExclusive_0(SRWLock);
    if ( *a2 )
      winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        (__int64)a2,
        a1);
  }
  else
  {
    v4 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>>((winrt::Windows::Foundation::IUnknown *)&v6);
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 56), v4);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v6);
    ReleaseSRWLockExclusive_0(SRWLock);
  }
}
