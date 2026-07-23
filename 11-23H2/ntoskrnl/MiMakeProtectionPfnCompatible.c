/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x140217E64
 * Callers:
 *     MiMapSinglePage @ 0x140217D58 (MiMapSinglePage.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402EEB4C (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F19A4 (MiInsertPhysicalPteMapping.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403253E0 (MiUpdateImagePfnImportRelocations.c)
 *     MiMapArbitraryPage @ 0x14035A13C (MiMapArbitraryPage.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5CC8 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 *     MmProtectMdlSystemAddress @ 0x14061F320 (MmProtectMdlSystemAddress.c)
 *     MiMapMemoryDumpMdl @ 0x140630298 (MiMapMemoryDumpMdl.c)
 *     MiInitializeSlowPte @ 0x140632BC8 (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140644448 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubLargePage @ 0x14065EEBC (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065F640 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x140660078 (MiCopyMemoryPagefileData.c)
 *     MiValidateImagePfn @ 0x1406B1028 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1407444B0 (MiRelocateImagePfn.c)
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
