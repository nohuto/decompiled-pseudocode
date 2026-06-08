/*
 * XREFs of CpcSubspaceCommitPerformance @ 0x1C0002408
 * Callers:
 *     CpcCommitPerformance @ 0x1C00020D0 (CpcCommitPerformance.c)
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x1C0001FB0 (CpcConsolidateCommandCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSubspaceCommitPerformance(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), _QWORD *))a1[16];
  a1[22] = a2;
  LOBYTE(a2) = 1;
  result = v2(a1[9], a2, CpcAcquirePerformanceCallback, a1);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(a1[22]);
  return result;
}
