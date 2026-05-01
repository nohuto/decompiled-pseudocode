/*
 * XREFs of ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x180633904
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

_QWORD *__fastcall std::filesystem::path::path(_QWORD *a1, _QWORD *a2)
{
  void *v3; // rax
  void *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (void *)a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v5[0] = a2;
  v5[1] = v3;
  std::wstring::wstring(a1, v5);
  return a1;
}
