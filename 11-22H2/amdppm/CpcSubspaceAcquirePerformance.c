/*
 * XREFs of CpcSubspaceAcquirePerformance @ 0x1C0002290
 * Callers:
 *     CpcAcquirePerformance @ 0x1C0002060 (CpcAcquirePerformance.c)
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x1C0002000 (CpcConsolidateCommandCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSubspaceAcquirePerformance(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64 (__fastcall *)(__int64, __int64), _QWORD *); // rax
  __int64 result; // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(__int64, __int64), _QWORD *))a1[14];
  a1[22] = a2;
  result = v2(a1[9], CpcAcquirePerformanceCallback, a1);
  if ( (int)result < 0 )
    return CpcConsolidateCommandCompletion(a1[22]);
  return result;
}
