/*
 * XREFs of ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180042498
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1801B8430 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8430.c)
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator() @ 0x1801BB050 (_lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall _await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(
        __int64 a1)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  return *(_QWORD *)(*(_QWORD *)a1 + 16LL) <= 0LL;
}
