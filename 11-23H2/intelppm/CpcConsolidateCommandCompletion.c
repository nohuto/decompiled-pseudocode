/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x1C0005162
 * Callers:
 *     CpcSubspaceCommitPerformance @ 0x1C0005270 (CpcSubspaceCommitPerformance.c)
 *     CpcAcquirePerformanceCallback @ 0x1C0008CA0 (CpcAcquirePerformanceCallback.c)
 *     CpcReadFeedbackAcquireCallback @ 0x1C0008DA0 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceAcquirePerformance @ 0x1C0008EA0 (CpcSubspaceAcquirePerformance.c)
 *     CpcSubspaceReadFeedback @ 0x1C0008EF0 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcConsolidateCommandCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rbx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = *(__int64 (**)(void))(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_BYTE *)(a1 + 16) )
      KeSetEvent(&Event, 0, 0);
    return v2();
  }
  return result;
}
