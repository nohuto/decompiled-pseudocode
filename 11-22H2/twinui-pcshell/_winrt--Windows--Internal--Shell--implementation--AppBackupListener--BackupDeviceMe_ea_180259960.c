/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1_::_1_::catch$12 @ 0x180259960
 * Callers:
 *     <none>
 * Callees:
 *     ??$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z @ 0x1806EED94 (--$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1_::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 12LL);
  v3 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(v3 + 152) = v2;
  CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(v2, v3 + 152);
  return 0LL;
}
