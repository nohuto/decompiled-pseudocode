/*
 * XREFs of KeQueryGroupAffinity @ 0x14032A520
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1407A1A8C (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x1407A5B54 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140850EE0 (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140999B30 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140A04620 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_140D1EFF8[GroupNumber];
}
