/*
 * XREFs of MiGetSlabStandbyPage @ 0x1405B130C
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x1402EB59C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiReInitializeFreeSlabPfn @ 0x14023C030 (MiReInitializeFreeSlabPfn.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListLock @ 0x140338D00 (MiReleasePageListLock.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockPageListAndFirstPage @ 0x1405B350C (MiLockPageListAndFirstPage.c)
 */

__int64 __fastcall MiGetSlabStandbyPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 Page; // rax
  __int64 v7; // r14
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  _BYTE v18[112]; // [rsp+20h] [rbp-98h] BYREF

  if ( *(_QWORD *)(a1 + 80) == 0x3FFFFFFFFFLL )
    return -1LL;
  memset(v18, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = -1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  Page = MiLockPageListAndFirstPage(a1 + 64, v18);
  v7 = Page;
  if ( Page == -1 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v13 = 48 * Page - 0x220000000000LL;
    MiUnlinkPageFromListEx(v13, (v18[0] != 0) + 1);
    MiReleasePageListLock(a1 + 64, (__int64)v18);
    MiDiscardTransitionPteEx(v13, 2048);
    MiReInitializeFreeSlabPfn(v13, a1);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
    }
    v4 = v7;
  }
  __writecr8(CurrentIrql);
  return v4;
}
