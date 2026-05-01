/*
 * XREFs of ??R?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@23@AEBUWindowStateChangedEventArgs@56723@@Z @ 0x180646EB8
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_449089f7a9d99eac3aa0569ffd6ad89f_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_Internal_Shell_TaskGroups_WindowStateChangedEventArgs@23@@Z @ 0x1806486F0 (-Invoke@-$delegate@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@W_ea_1806486F0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
