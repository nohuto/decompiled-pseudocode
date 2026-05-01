/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x180258A6C
 * Callers:
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180258EF8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180258B90 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::_parameters_ @ 0x1806F05A0 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_--_10_--_par.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::_parameters_(
    a2 + 294,
    a8,
    a4,
    a5,
    a6,
    *a7);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 293) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(a2);
}
