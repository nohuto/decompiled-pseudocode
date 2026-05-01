/*
 * XREFs of ??$time_point_cast@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@Usystem_clock@23@V123@$0A@@chrono@std@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@01@AEBV201@@Z @ 0x1806F0318
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::time_point_cast<std::chrono::duration<__int64,std::ratio<1,10000000>>,std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>,0>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = *a2;
  return a1;
}
