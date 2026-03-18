/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140ADBCE0
 * Callers:
 *     VfSuspectDifRemoveEntry @ 0x140ADB34C (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140ADB9F4 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140ADBA14 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140ADBAB4 (VfSuspectDriversUnloadCallback.c)
 *     VfVolatileRemoveDifVerification @ 0x140ADEB38 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversIsLoaded @ 0x140B97D64 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
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
