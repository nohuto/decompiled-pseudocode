/*
 * XREFs of NLS_UPCASE @ 0x14022D310
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A5A2C (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463BC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     CmpCompareUnicodeString @ 0x140690A4C (CmpCompareUnicodeString.c)
 *     CmpComputeComponentHashes @ 0x140690B10 (CmpComputeComponentHashes.c)
 *     CmpGetNameControlBlock @ 0x1406D8EE0 (CmpGetNameControlBlock.c)
 *     RtlFindUnicodeSubstring @ 0x1406D9330 (RtlFindUnicodeSubstring.c)
 *     RtlHashUnicodeString @ 0x1406D9430 (RtlHashUnicodeString.c)
 *     CmpCompareInIndex @ 0x1406D9660 (CmpCompareInIndex.c)
 *     RtlPrefixUnicodeString @ 0x1406D9E20 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1406D9FE0 (RtlCompareUnicodeStrings.c)
 *     RtlCompareUnicodeString @ 0x1406DA140 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x1406DA8B0 (CmpDoCompareKeyName.c)
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF830 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindNameInListFromIndex @ 0x1406DFE60 (CmpFindNameInListFromIndex.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     CmpHashUnicodeComponent @ 0x140708CE0 (CmpHashUnicodeComponent.c)
 *     RtlpHashStringToAtom @ 0x140717F70 (RtlpHashStringToAtom.c)
 *     CmpHashCompressedComponent @ 0x140769474 (CmpHashCompressedComponent.c)
 *     CompareUnicodeStrings @ 0x14079EB20 (CompareUnicodeStrings.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA3D0 (CmpCheckLexicographicalOrder.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B69F0 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x1407B6D38 (ObpLookupDirectoryEntry.c)
 *     CmpCompareTwoCompressedNames @ 0x1407BF7D0 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareCompressedName @ 0x1407C46E4 (CmpCompareCompressedName.c)
 *     AslStringPatternMatchExW @ 0x1407C686C (AslStringPatternMatchExW.c)
 *     RtlSuffixUnicodeString @ 0x1409B8A70 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1409B98D0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1409BF1B0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140A51E28 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A5754C (AslEnvVarQuery.c)
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
