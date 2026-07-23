/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1402F1B64
 * Callers:
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x140285100 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F19A4 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x1402F2C90 (MiUpdatePageTableUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1406427F8 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14064C5AC (MiUpdateAwePageTable.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140665980 (MiUpdateForkMaps.c)
 *     MiInsertLargeUserMapping @ 0x140669040 (MiInsertLargeUserMapping.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 */

char __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  char result; // al
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = -1;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MmIsAddressValidEx(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
