/*
 * XREFs of KiAbProcessContextSwitch @ 0x1402BBE18
 * Callers:
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140249C90 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x1402BBED0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC350 (KiAbProcessThreadLocks.c)
 *     KiCheckForThreadDispatch @ 0x1402BCA78 (KiCheckForThreadDispatch.c)
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
