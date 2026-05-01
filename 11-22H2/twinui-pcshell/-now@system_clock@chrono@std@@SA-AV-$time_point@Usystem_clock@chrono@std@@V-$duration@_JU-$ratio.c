/*
 * XREFs of ?now@system_clock@chrono@std@@SA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@23@XZ @ 0x1803DD2A4
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::chrono::system_clock::now(__int64 *a1)
{
  *a1 = _Xtime_get_ticks();
  return a1;
}
