/*
 * XREFs of ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180051BE0
 * Callers:
 *     _lambda_fd92b21980b3dabee44eae3597b927cc_::operator() @ 0x18005127C (_lambda_fd92b21980b3dabee44eae3597b927cc_--operator().c)
 *     _lambda_e1408536c029d8c29a87d65e8f468219_::operator() @ 0x180051330 (_lambda_e1408536c029d8c29a87d65e8f468219_--operator().c)
 *     _lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator() @ 0x1805F9A40 (_lambda_fac63ae4a10d0c60eda94047ae860b1f_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
