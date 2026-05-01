/*
 * XREFs of ?Item@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18009430C
 * Callers:
 *     _lambda_690d2e9773cc08e07279b20ff14abba4_::operator() @ 0x18028A24C (_lambda_690d2e9773cc08e07279b20ff14abba4_--operator().c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::operator() @ 0x18028D158 (_lambda_f11de0bc23a1be581f21c48152b34889_--operator().c)
 *     _lambda_286d0fe4c5dad9546df8d1816c162f02_::operator() @ 0x180762E68 (_lambda_286d0fe4c5dad9546df8d1816c162f02_--operator().c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem_______lambda_dac3b76ab7a726297b89406c03dbf98a___ @ 0x18078ADB4 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Int.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::Item(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
