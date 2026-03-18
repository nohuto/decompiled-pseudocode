/*
 * XREFs of PsEnumProcesses @ 0x1406BF0AC
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406A7BF4 (PopEtEnergyTrackerQuery.c)
 *     EtwpDisableTraceProviders @ 0x140795400 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x14081454C (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 *     PopEtEnergyTrackerCreate @ 0x140857300 (PopEtEnergyTrackerCreate.c)
 *     PfTStart @ 0x1409884F4 (PfTStart.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1409EB374 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409F36F4 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
