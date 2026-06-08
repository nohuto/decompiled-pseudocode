/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x1C0002000
 * Callers:
 *     CpcAcquirePerformanceCallback @ 0x1C0001FE0 (CpcAcquirePerformanceCallback.c)
 *     CpcSubspaceAcquirePerformance @ 0x1C0002290 (CpcSubspaceAcquirePerformance.c)
 *     CpcSubspaceCommitPerformance @ 0x1C0002458 (CpcSubspaceCommitPerformance.c)
 *     CpcReadFeedbackAcquireCallback @ 0x1C0004B60 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceReadFeedback @ 0x1C0004CE0 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
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
