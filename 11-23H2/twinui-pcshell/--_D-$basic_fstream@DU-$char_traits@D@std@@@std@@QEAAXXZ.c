/*
 * XREFs of ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x1806F0D28
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$12 @ 0x1806F1891 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806F1891.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$27 @ 0x1806F1965 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806F1965.c)
 * Callees:
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806F0958 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::fstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 184;
  std::fstream::~fstream<char,std::char_traits<char>>(a1 + 184);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
