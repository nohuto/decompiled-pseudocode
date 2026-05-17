/*
 * XREFs of NLS_UPCASE @ 0x180041758
 * Callers:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18000DC24 (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 *     RtlpFindEnvironmentHashEntry @ 0x180038070 (RtlpFindEnvironmentHashEntry.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800413B4 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlPrefixUnicodeString @ 0x180041530 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1800416B0 (RtlCompareUnicodeStrings.c)
 *     RtlpComputeLangListCheckSum @ 0x180043308 (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_Ustr @ 0x180046BD0 (RtlGetFullPathName_Ustr.c)
 *     RtlpHashStringToAtom @ 0x1800629D0 (RtlpHashStringToAtom.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x1800D92C8 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 *     WerEscalationLazyInit @ 0x1800E95C4 (WerEscalationLazyInit.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800F0420 (RtlUpcaseUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800F0738 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800F084C (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlFindUnicodeSubstring @ 0x1800F5EF0 (RtlFindUnicodeSubstring.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180108344 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlIsValidOemCharacter @ 0x180109520 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 result; // ax

  result = a2;
  if ( a2 >= 0x61u )
  {
    if ( a2 > 0x7Au )
    {
      if ( a1 )
      {
        if ( a2 >= 0xC0u )
          return a2
               + *(_WORD *)(a1
                          + 2LL
                          * ((a2 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(a1
                                                               + 2LL
                                                               * (((unsigned __int8)a2 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)a2 >> 8))))));
      }
    }
    else
    {
      return a2 - 32;
    }
  }
  return result;
}
