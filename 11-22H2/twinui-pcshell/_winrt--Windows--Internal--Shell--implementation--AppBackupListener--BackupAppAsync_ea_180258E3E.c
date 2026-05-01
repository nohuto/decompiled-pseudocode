/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x180258E3E
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1806EE2C0 (--$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEA.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  const unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  const unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx

  v3 = winrt::hstring::c_str((winrt::hstring *)(*(_QWORD *)(a2 + 128) + 318LL));
  *(_QWORD *)(v4 + 264) = v3;
  v5 = winrt::hstring::c_str((winrt::hstring *)(v4 + 310));
  *(_QWORD *)(v6 + 272) = v5;
  v7 = winrt::hstring::c_str((winrt::hstring *)(v6 + 302));
  *(_QWORD *)(v8 + 280) = v7;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL);
  *(_DWORD *)(v8 + 288) = v9;
  CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
    v9,
    v8 + 288,
    v8 + 280,
    v8 + 272,
    v8 + 264);
  return 0LL;
}
