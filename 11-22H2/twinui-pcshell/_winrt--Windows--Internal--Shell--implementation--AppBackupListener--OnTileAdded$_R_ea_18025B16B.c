/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x18025B16B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18063DED0 (--1-$lock_guard@Vmutex@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 192) + 152LL;
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>(*(_QWORD *)(a2 + 112));
}
