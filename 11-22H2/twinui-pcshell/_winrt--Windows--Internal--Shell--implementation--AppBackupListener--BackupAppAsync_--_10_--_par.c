/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::_parameters_ @ 0x1806F05A0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x180258A6C (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        int a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  *(_QWORD *)a1 = a2;
  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v6;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v8 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  *(_DWORD *)(a1 + 32) = a6;
  return a1;
}
