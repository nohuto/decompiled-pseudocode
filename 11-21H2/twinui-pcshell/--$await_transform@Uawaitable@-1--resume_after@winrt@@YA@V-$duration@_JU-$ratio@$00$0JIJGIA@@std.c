/*
 * XREFs of ??$await_transform@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@12@$$QEAUawaitable@?1??resume_after@2@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x18056BC5C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1801B8430 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8430.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall ___await_transform_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_I_Foundation_Windows_winrt__PEAUDragDropSimulatorComponent_implementation_DragDropSimulator_Shell_Internal_34_AEBV__com_ptr_t_UIDropTarget__Uerr_exception_policy_wil___wil__AEBV__com_ptr_t_UIDataObject__Uerr_exception_policy_wil___wil__AEBUtagPOINT___N_experimental_std__U__IAsyncOperation_I_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_after_2_YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  _QWORD *v7; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v4 = *(_BYTE *)(a1 + 93);
  v5 = a1 + 72;
  v6 = -v4;
  *a2 = a3;
  v7 = (_QWORD *)(v5 & -(__int64)(v6 != 0));
  if ( v7 )
  {
    *a3 = v7;
    *(_QWORD *)((v5 & -(__int64)(v6 != 0)) + 8) = a3;
    *v7 = _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_;
  }
  return a2;
}
