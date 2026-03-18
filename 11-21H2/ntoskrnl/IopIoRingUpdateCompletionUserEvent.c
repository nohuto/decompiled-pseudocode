/*
 * XREFs of IopIoRingUpdateCompletionUserEvent @ 0x14055A060
 * Callers:
 *     NtSetInformationIoRing @ 0x140939130 (NtSetInformationIoRing.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopIoRingUpdateCompletionUserEvent(__int64 a1, void **a2, KPROCESSOR_MODE a3)
{
  PVOID v4; // r14
  void *v5; // rcx
  NTSTATUS result; // eax
  KIRQL v7; // al
  void *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  PVOID v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = *a2;
  if ( !*a2
    || (v15 = 0LL,
        result = ObReferenceObjectByHandle(v5, 2u, (POBJECT_TYPE)ExEventObjectType, a3, &v15, 0LL),
        v4 = v15,
        result >= 0) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    v8 = *(void **)(a1 + 168);
    v9 = v7;
    *(_QWORD *)(a1 + 168) = v4;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 104));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    return 0;
  }
  return result;
}
