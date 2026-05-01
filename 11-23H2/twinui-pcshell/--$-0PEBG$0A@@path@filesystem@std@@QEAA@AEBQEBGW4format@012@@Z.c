/*
 * XREFs of ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1803D116C
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

_QWORD *__fastcall std::filesystem::path::path(_QWORD *a1, _QWORD *a2)
{
  _WORD *v3; // rcx
  __int64 v4; // rax
  void *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_WORD *)*a2;
  v4 = -1LL;
  v6[0] = *(void **)a2;
  do
    ++v4;
  while ( v3[v4] );
  v6[1] = (void *)v4;
  std::wstring::wstring(a1, v6);
  return a1;
}
