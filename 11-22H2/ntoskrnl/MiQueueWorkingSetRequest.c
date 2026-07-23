/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14035E878
 * Callers:
 *     MiCaptureAllWorkingSetAccessBits @ 0x14035E858 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x140634748 (MiEmptyAllWorkingSets.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x1406354D0 (MiTrimNoStealPagesFromWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14063570C (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // esi
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+30h] [rbp-28h] BYREF

  memset(&v12, 0, sizeof(v12));
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 16920);
  if ( !v3 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &v12);
  if ( !*(_DWORD *)(v3 + 40) )
    KeResetEvent((PRKEVENT)v3);
  if ( (a2 & *(_DWORD *)(v3 + 40)) == a2 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    *(_DWORD *)(v3 + 40) |= a2;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v12);
  OldIrql = v12.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v4 )
    KeSetEvent((PRKEVENT)(v3 + 96), 0, 0);
  if ( a2 != 1024 )
    KeWaitForSingleObject((PVOID)v3, WrVirtualMemory, 0, 0, 0LL);
  return 1LL;
}
