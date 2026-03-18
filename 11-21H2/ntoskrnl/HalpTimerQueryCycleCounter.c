/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x1403DDFB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x1403ACEFC (HalpFindTimer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

ULONG_PTR *__fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  ULONG_PTR *result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = result[24];
    InternalData = HalpTimerGetInternalData((__int64)result);
    return (ULONG_PTR *)(*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
  }
  return result;
}
