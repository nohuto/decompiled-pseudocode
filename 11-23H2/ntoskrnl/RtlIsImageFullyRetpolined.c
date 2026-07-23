/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x140360118
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x1407D4700 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A34538 (MiIsImageFullyRetpolined.c)
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B45CC4 (MiApplyBootLoadedDriversFixups.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B47308 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140B999A0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(void *a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
