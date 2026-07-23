/*
 * XREFs of MmQuerySessionWorkingSetInformation @ 0x14046C8C4
 * Callers:
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A71DC (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQuerySessionWorkingSetInformation(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  int v5; // edi
  unsigned __int64 *v6; // rbp
  __int64 *v7; // r8
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+20h] [rbp-28h] BYREF

  memset(&v20, 0, sizeof(v20));
  v4 = 0;
  v5 = 0;
  v6 = (unsigned __int64 *)(a1 + 40LL * (unsigned int)*a2);
  KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &v20);
  v7 = (__int64 *)qword_140C69900;
  if ( (__int64 *)qword_140C69900 != &qword_140C69900 )
  {
    v8 = (unsigned __int64 *)(a1 + 32);
    do
    {
      if ( v8 - 4 == v6 )
      {
        v4 = -1073741820;
      }
      else
      {
        *((_DWORD *)v8 - 8) = *((_DWORD *)v7 - 28);
        *v8 = v7[26];
        v9 = v7[25];
        *(v8 - 1) = 0LL;
        v10 = *v8;
        v11 = *v8 < v9;
        *(v8 - 3) = v9;
        v12 = *(v7 - 10);
        if ( v11 )
          v9 = v10;
        *(v8 - 2) = v12;
        if ( v9 >= v12 )
          v9 = v12;
        *v8 = v9;
        v8 += 5;
      }
      v7 = (__int64 *)*v7;
      ++v5;
    }
    while ( v7 != &qword_140C69900 );
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v20);
  OldIrql = v20.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v20.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (v20.OldIrql + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = v4;
  *a2 = v5;
  return result;
}
