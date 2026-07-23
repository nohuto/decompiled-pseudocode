/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140558680
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeAlertThread @ 0x140309AE0 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140558B2C (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // esi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // eax
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf
  int v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v12, (__int64)&v13);
  if ( v2 >= 0 && !v12 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(qword_140C5DDF0);
    v4 = v13;
    *(_QWORD *)(v13 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140C5DE20 )
        KeAlertThread(qword_140C5DE20, 0);
    }
    else
    {
      v5 = (__int64 *)qword_140C5DDE8;
      if ( *(PVOID **)qword_140C5DDE8 != &qword_140C5DDE0 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_140C5DDE0;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_140C5DDE8 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140C5DE18 )
      {
        byte_140C5DE18 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)qword_140C5DDF0);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  return (unsigned int)v2;
}
