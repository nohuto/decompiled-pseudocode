/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801BA7EA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x180238938 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 80LL;
  return winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(*(_QWORD *)(a2 + 72));
}
