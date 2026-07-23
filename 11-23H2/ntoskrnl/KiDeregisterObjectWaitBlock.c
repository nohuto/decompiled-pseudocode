/*
 * XREFs of KiDeregisterObjectWaitBlock @ 0x14033C6C0
 * Callers:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140304E44 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpShutdownWorkerFactory @ 0x14031DB98 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x140349B40 (IopCancelWaitCompletionPacket.c)
 *     ExCancelDpcEventWait @ 0x14060C410 (ExCancelDpcEventWait.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDeregisterObjectWaitBlock(volatile signed __int32 *a1, __int64 *a2)
{
  unsigned __int8 v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 *v6; // rcx
  __int64 **v7; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  KiAcquireKobjectLockSafe(a1);
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    v6[1] = (__int64)v7;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
