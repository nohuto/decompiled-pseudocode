/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x1C0001FB0
 * Callers:
 *     CpcAcquirePerformanceCallback @ 0x1C0001F90 (CpcAcquirePerformanceCallback.c)
 *     CpcSubspaceAcquirePerformance @ 0x1C0002240 (CpcSubspaceAcquirePerformance.c)
 *     CpcSubspaceCommitPerformance @ 0x1C0002408 (CpcSubspaceCommitPerformance.c)
 *     CpcReadFeedbackAcquireCallback @ 0x1C00051B0 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceReadFeedback @ 0x1C0005330 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcConsolidateCommandCompletion(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 (*v3)(void); // rbx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = *(_BYTE *)(a1 + 16) == 0;
    v3 = *(__int64 (**)(void))(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( !v2 )
      KeSetEvent(&Event, 0, 0);
    return v3();
  }
  return result;
}
