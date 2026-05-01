/*
 * XREFs of ??0path@filesystem@std@@QEAA@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1806AB418
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::filesystem::path::path(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  result = a1;
  *(_QWORD *)(a2 + 24) = 7LL;
  return result;
}
