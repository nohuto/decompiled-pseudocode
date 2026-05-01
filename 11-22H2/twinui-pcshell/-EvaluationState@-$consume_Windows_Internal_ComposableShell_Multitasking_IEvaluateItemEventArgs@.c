/*
 * XREFs of ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x1801B7D10
 * Callers:
 *     _lambda_690d2e9773cc08e07279b20ff14abba4_::operator() @ 0x18028A24C (_lambda_690d2e9773cc08e07279b20ff14abba4_--operator().c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 *     _lambda_286d0fe4c5dad9546df8d1816c162f02_::operator() @ 0x180762E68 (_lambda_286d0fe4c5dad9546df8d1816c162f02_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___::Invoke @ 0x18078B6A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18078B6A0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
