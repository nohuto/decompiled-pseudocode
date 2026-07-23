/*
 * XREFs of NLS_UPCASE @ 0x1800154D8
 * Callers:
 *     RtlpHashStringToAtom @ 0x180003AC0 (RtlpHashStringToAtom.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 *     LdrpHashUnicodeString @ 0x180014A04 (LdrpHashUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlSetEnvironmentVar @ 0x180014C10 (RtlSetEnvironmentVar.c)
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     RtlpFindEnvironmentHashEntry @ 0x18001EEA0 (RtlpFindEnvironmentHashEntry.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x180058990 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18007ECD0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlFindUnicodeSubstring @ 0x180086860 (RtlFindUnicodeSubstring.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800E96AC (HashStringToDwordCaseInsensitiveLen.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800F1480 (RtlUpcaseUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800F160C (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800F1728 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180109500 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlIsValidOemCharacter @ 0x18010A954 (RtlIsValidOemCharacter.c)
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
