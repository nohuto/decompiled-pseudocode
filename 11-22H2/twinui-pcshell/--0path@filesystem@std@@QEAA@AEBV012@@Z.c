/*
 * XREFs of ??0path@filesystem@std@@QEAA@AEBV012@@Z @ 0x1803D4628
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

std::filesystem::path *__fastcall std::filesystem::path::path(
        std::filesystem::path *this,
        const struct std::filesystem::path *a2)
{
  std::wstring::wstring(this, (__int64)a2);
  return this;
}
