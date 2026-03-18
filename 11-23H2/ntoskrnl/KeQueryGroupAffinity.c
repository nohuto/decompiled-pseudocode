/*
 * XREFs of KeQueryGroupAffinity @ 0x14032A290
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1407A189C (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x1407A5964 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140850BE0 (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140999930 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140A04390 (NtCreateProfile.c)
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
