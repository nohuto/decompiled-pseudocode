/*
 * XREFs of KeRegisterObjectDpc @ 0x140565F08
 * Callers:
 *     ExQueueDpcEventWait @ 0x14063E340 (ExQueueDpcEventWait.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x1402F0AF8 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRegisterObjectDpc(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r15
  __int64 v5; // rdi
  ULONG_PTR v6; // r12
  unsigned __int8 CurrentIrql; // si
  char v9; // bp
  __int64 *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  v4 = (char)SchedulerAssist;
  *(_WORD *)(a3 + 16) = 1028;
  v5 = a3;
  *(_QWORD *)(a3 + 24) = a2;
  v6 = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  if ( *(int *)(a1 + 4) <= 0 || (KiWaitSatisfyOther(a1), v9 = 1, v4) )
  {
    v10 = *(__int64 **)(a1 + 16);
    if ( *v10 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)v5 = a1 + 8;
    *(_QWORD *)(v5 + 8) = v10;
    *v10 = v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_BYTE *)(v5 + 17) = 5;
    KiInsertQueueDpc(v6, a1, v5, 0LL, 0);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  }
  return v9;
}
