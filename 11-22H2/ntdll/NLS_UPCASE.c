/*
 * XREFs of NLS_UPCASE @ 0x1800156E8
 * Callers:
 *     RtlpHashStringToAtom @ 0x180003960 (RtlpHashStringToAtom.c)
 *     RtlpComputeLangListCheckSum @ 0x1800137EC (RtlpComputeLangListCheckSum.c)
 *     RtlPrefixUnicodeString @ 0x180014AC0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     LdrpHashUnicodeString @ 0x180014C14 (LdrpHashUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014C80 (RtlCompareUnicodeString.c)
 *     RtlSetEnvironmentVar @ 0x180014E20 (RtlSetEnvironmentVar.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C2A0 (RtlGetFullPathName_Ustr.c)
 *     RtlpFindEnvironmentHashEntry @ 0x18001F080 (RtlpFindEnvironmentHashEntry.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x180058AF0 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18007E660 (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlFindUnicodeSubstring @ 0x180086060 (RtlFindUnicodeSubstring.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800E837C (HashStringToDwordCaseInsensitiveLen.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800F0070 (RtlUpcaseUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800F01FC (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800F0318 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1801080D0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlIsValidOemCharacter @ 0x1801094E4 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NLS_UPCASE(__int64 a1, int a2)
{
  if ( (unsigned __int16)a2 < 0x61u )
    return (unsigned __int16)a2;
  if ( (unsigned __int16)a2 <= 0x7Au )
    return (unsigned int)(a2 - 32);
  if ( !a1 || (unsigned __int16)a2 < 0xC0u )
    return (unsigned __int16)a2;
  return (unsigned __int16)(*(_WORD *)(a1
                                     + 2LL
                                     * ((a2 & 0xF)
                                      + (unsigned int)*(unsigned __int16 *)(a1
                                                                          + 2LL
                                                                          * (((unsigned __int8)a2 >> 4)
                                                                           + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)(unsigned __int16)a2 >> 8))))))
                          + a2);
}
