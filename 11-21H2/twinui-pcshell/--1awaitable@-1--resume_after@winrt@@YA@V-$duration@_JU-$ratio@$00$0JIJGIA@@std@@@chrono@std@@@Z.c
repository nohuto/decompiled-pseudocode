/*
 * XREFs of ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180158CE0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1801B8430 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8430.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1801B8A9E (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B8A9E.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801B8AC7 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B8AC7.c)
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator() @ 0x1801BB050 (_lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator().c)
 *     __lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1801BB218 (__lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator()_--_1_--dtor$0.c)
 *     ??1?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1801C4664 (--1-$notify_awaiter@V-$duration@HU-$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1801CDB70 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 * Callees:
 *     WINRT_IMPL_CloseThreadpoolTimer @ 0x180189320 (WINRT_IMPL_CloseThreadpoolTimer.c)
 */

void __fastcall `winrt::resume_after'::`2'::awaitable::~awaitable(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx
  volatile __int64 *v3; // rbx

  v2 = *(struct _TP_TIMER **)(a1 + 8);
  if ( v2 )
  {
    WINRT_IMPL_CloseThreadpoolTimer(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(volatile __int64 **)a1;
  if ( v3 )
  {
    while ( _InterlockedExchange64(v3, 0LL) == 1 )
      _Thrd_yield();
  }
}
