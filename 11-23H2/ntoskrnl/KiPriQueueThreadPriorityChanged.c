/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1402BAD84
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140350330 (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B6D8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x14030BEDC (KiActivateWaiterPriQueue.c)
 */

__int64 __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r11
  __int64 v6; // rbx
  int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  signed __int8 v12; // cf
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    goto LABEL_2;
  v8 = v4 & 0x100;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  result = (unsigned __int8)v2;
  v11 = (unsigned __int8)v2 | (unsigned int)v8;
  *(_DWORD *)(a2 + 540) = v11;
  if ( !v5 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v12 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v12 )
      result = KiActivateWaiterQueueWithNoLocks(a2, a1, 0LL);
    else
      result = KiActivateWaiterPriQueue(a1, v11, v2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      return KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  }
  return result;
}
