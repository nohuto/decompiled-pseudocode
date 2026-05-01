/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch$22 @ 0x1806F11BC
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH$$QEAPEBG@Z @ 0x1806EEC44 (--$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD **)(a2 + 248);
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  *(_QWORD *)(a2 + 264) = v2;
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 72) + 12LL);
  *(_DWORD *)(a2 + 240) = v3;
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 240),
    (__int64 *)(a2 + 264));
  return 0LL;
}
