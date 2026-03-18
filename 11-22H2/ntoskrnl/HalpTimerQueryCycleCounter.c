/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x14037A450
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x14037B658 (HalpFindTimer.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = *(_QWORD *)(result + 192);
    InternalData = HalpTimerGetInternalData(result);
    return (*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
  }
  return result;
}
