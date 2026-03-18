/*
 * XREFs of KeQueryGroupAffinity @ 0x14032A0B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 *     PopProcessorInformation @ 0x1407A5E74 (PopProcessorInformation.c)
 *     PpmEnableWmiInterface @ 0x140851AF0 (PpmEnableWmiInterface.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1409999E0 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x140A04440 (NtCreateProfile.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= LOWORD(KeActiveProcessors[0]) )
    return 0LL;
  else
    return qword_140D1EFE8[GroupNumber];
}
