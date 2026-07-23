/*
 * XREFs of KiAbProcessContextSwitch @ 0x1402BC0A8
 * Callers:
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 */

__int64 __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  result = *(unsigned __int8 *)(a1 + 792);
  if ( ((unsigned int)result | *(unsigned __int8 *)(a1 + 870)) != 0x3F )
  {
    v7 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0LL;
    KiAbProcessThreadLocks(a1, 1, 1, 1, (__int64)&v7, (__int64)&v8, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    KiAbPropagateBoosts(&v8, &CurrentPrcb->AbSelfIoBoostsList, &v7);
    result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v7);
    if ( a2 )
    {
      LOBYTE(v5) = 2;
      return KiCheckForThreadDispatch(CurrentPrcb, v5, v6);
    }
  }
  return result;
}
