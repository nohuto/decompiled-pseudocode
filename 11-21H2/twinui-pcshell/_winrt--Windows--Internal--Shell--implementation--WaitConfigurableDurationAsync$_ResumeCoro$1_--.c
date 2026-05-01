/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801CDD84
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1801C4664 (--1-$notify_awaiter@V-$duration@HU-$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 128) + 32LL;
  winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>::~notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>(*(_QWORD *)(a2 + 72));
}
