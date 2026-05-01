/*
 * XREFs of ??$await_transform@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@I@Foundation@Windows@2@@Z @ 0x180629DA4
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  _QWORD *v4; // r8
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_BYTE *)(a1 + 93);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a2 + 24) = 1;
  v4 = (_QWORD *)((a1 + 72) & -(__int64)(v3 != 0));
  if ( v4 )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(((a1 + 72) & -(__int64)(v3 != 0)) + 8) = a2;
    *v4 = _lambda_f8e2cc796e8b9f8a5408b0712580aa8d_::_lambda_invoker_cdecl_;
  }
  return a2;
}
