/*
 * XREFs of ??$duration_cast@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@_JU?$ratio@$00$0JIJGIA@@3@$0A@@chrono@std@@YA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@01@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@01@@Z @ 0x18019E884
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration_cast<std::chrono::duration<__int64,std::ratio<1,1000>>,__int64,std::ratio<1,10000000>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = (__int64)((unsigned __int128)(*a2 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  result = a1;
  *a1 = (v2 >> 63) + v2;
  return result;
}
