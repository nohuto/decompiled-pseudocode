/*
 * XREFs of PsEnumProcesses @ 0x1407CF79C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406BF028 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B86AC (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140820620 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1408461D0 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x140851B7C (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1409EFC64 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409F3668 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 a2)
{
  __int64 *v4; // rcx
  __int64 *NextProcess; // rax
  __int64 *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = NextProcess;
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
