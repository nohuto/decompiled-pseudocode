/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x14035F928
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x1407D49B0 (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A342F8 (MiIsImageFullyRetpolined.c)
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 *     MiImportOptimizationCompatibleWithDriverRelocation @ 0x140B4AA08 (MiImportOptimizationCompatibleWithDriverRelocation.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140B9A9A0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4B48 (LdrImageDirectoryEntryToLoadConfig.c)
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
