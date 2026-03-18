/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140217E64
 * Callers:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiFillSystemPtes @ 0x14027E8C0 (MiFillSystemPtes.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EE8BC (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140325150 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapArbitraryPage @ 0x140359F9C (MiMapArbitraryPage.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5AE8 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageOfProtoPool @ 0x14061D9E0 (MiReplacePageOfProtoPool.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MiMapMemoryDumpMdl @ 0x14062FD48 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140632678 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140643EF8 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14065E96C (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F0F0 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB28 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x1406B0FF8 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1407442C0 (MiRelocateImagePfn.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
