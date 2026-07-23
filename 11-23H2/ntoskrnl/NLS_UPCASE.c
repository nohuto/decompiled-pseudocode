/*
 * XREFs of NLS_UPCASE @ 0x14022D420
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A5C0C (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463FC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140690B10 (CmpComputeComponentHashes.c)
 *     CmpGetNameControlBlock @ 0x1406D8F10 (CmpGetNameControlBlock.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9360 (RtlFindUnicodeSubstring.c)
 *     RtlHashUnicodeString @ 0x1406D9460 (RtlHashUnicodeString.c)
 *     CmpCompareInIndex @ 0x1406D9690 (CmpCompareInIndex.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E50 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1406DA010 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1406DA8E0 (CmpDoCompareKeyName.c)
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF860 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindNameInListFromIndex @ 0x1406DFE90 (CmpFindNameInListFromIndex.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     CmpHashUnicodeComponent @ 0x140708EF0 (CmpHashUnicodeComponent.c)
 *     RtlpHashStringToAtom @ 0x140718170 (RtlpHashStringToAtom.c)
 *     CmpHashCompressedComponent @ 0x140769664 (CmpHashCompressedComponent.c)
 *     CompareUnicodeStrings @ 0x14079ED10 (CompareUnicodeStrings.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA5C0 (CmpCheckLexicographicalOrder.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6CD0 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1407B7018 (ObpLookupDirectoryEntry.c)
 *     CmpCompareTwoCompressedNames @ 0x1407BFAA0 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x1407C49B4 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x1407C6B3C (AslStringPatternMatchExW.c)
 *     RtlSuffixUnicodeString @ 0x1409B8C70 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B9AD0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BF3B0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140A520D8 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A577FC (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x61u )
    return a2;
  if ( a2 <= 0x7Au )
    return a2 - 32;
  if ( a1 && a2 >= 0xC0u )
    return *(_WORD *)(a1
                    + 2LL
                    * ((a2 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(a1
                                                         + 2LL
                                                         * (((unsigned __int8)a2 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(a1
                                                                                              + 2
                                                                                              * ((unsigned __int64)a2 >> 8))))))
         + a2;
  else
    return a2;
}
