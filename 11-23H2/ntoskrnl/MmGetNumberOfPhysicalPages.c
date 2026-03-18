/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1407B98F0
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x140346F9C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140347138 (ExpGetSystemBasicInformation.c)
 *     ExpInitializePoolTrackerTable @ 0x140389B74 (ExpInitializePoolTrackerTable.c)
 *     ExpDetermineLargePagePolicy @ 0x140389D08 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140AA3FB0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA59E4 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADEE5C (ViPtInitCircularPoolTrace.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B739DC (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * a1) + 17040LL);
}
