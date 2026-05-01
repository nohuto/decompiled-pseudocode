/*
 * XREFs of ??$await_transform@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@12@$$QEAU?$IAsyncOperation@I@Foundation@Windows@2@@Z @ 0x18056BB94
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1801B95F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B95F0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  char v5; // al
  _QWORD *v6; // r8
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_BYTE *)(a1 + 93);
  v4 = a1 + 72;
  v5 = -v3;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 16) = 0;
  v6 = (_QWORD *)(v4 & -(__int64)(v5 != 0));
  if ( v6 )
  {
    *(_QWORD *)a2 = v6;
    *(_QWORD *)((v4 & -(__int64)(v5 != 0)) + 8) = a2;
    *v6 = _lambda_18e193a120501d561f2c233ed8e0f717_::_lambda_invoker_cdecl_;
  }
  return a2;
}
