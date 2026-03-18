/*
 * XREFs of ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800B2070
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800B080C (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800B1EF8 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800B1FD8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800497F0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessAttributionObserver::ForEachChangedProcessAttribution(__int64 a1, __int64 a2, __int64 a3)
{
  CProcessAttributionManager::Record ***v3; // rbp
  __int64 (__fastcall ***v5)(_QWORD, __int64 *); // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11[7]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h]

  v3 = *(CProcessAttributionManager::Record ****)(a1 + 8);
  v5 = *(__int64 (__fastcall ****)(_QWORD, __int64 *))(a3 + 56);
  v12 = 0LL;
  if ( v5 )
    v12 = (**v5)(v5, v11);
  result = CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, a1, a2, v11);
  v10 = *(_QWORD *)(a3 + 56);
  if ( v10 )
  {
    LOBYTE(v9) = v10 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
