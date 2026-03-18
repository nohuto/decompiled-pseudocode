/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x1406B9020
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14028C180 (PsGetProcessServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     PsIsHostSilo @ 0x1402AF900 (PsIsHostSilo.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 EffectiveServerSilo; // rsi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  v6 = 0;
  if ( !a3 )
    return PdcCreateWatchdogAroundClientCall();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return PdcCreateWatchdogAroundClientCall();
  }
  return EffectiveServerSilo;
}
