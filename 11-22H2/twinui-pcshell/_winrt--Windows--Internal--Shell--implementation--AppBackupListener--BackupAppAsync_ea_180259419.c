/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$1 @ 0x180259419
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 224) + 32LL;
  *(_QWORD *)(a2 + 72) = **(_QWORD **)(a2 + 64);
  winrt::hstring::~hstring(*(void ***)(a2 + 72));
}
