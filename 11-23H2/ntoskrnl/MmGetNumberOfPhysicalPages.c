/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1407B9BD0
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14034722C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1403473C8 (ExpGetSystemBasicInformation.c)
 *     ExpInitializePoolTrackerTable @ 0x140389D54 (ExpInitializePoolTrackerTable.c)
 *     ExpDetermineLargePagePolicy @ 0x140389EE8 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140AA3E20 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5854 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADEE4C (ViPtInitCircularPoolTrace.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B739DC (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * a1) + 17040LL);
}
