/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140ADAD10
 * Callers:
 *     VfSuspectDifRemoveEntry @ 0x140ADA37C (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140ADAA24 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140ADAA44 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADAAE4 (VfSuspectDriversUnloadCallback.c)
 *     VfVolatileRemoveDifVerification @ 0x140ADDB68 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversIsLoaded @ 0x140B96D64 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406DA2F0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
