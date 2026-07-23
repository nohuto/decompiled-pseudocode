/*
 * XREFs of CmpLazyWriteWorker @ 0x14039FE60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpCompleteLazyWrite @ 0x140366034 (CmpCompleteLazyWrite.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpDiskFullWarning @ 0x140A11AF8 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  unsigned __int64 v2; // rsi
  char v3; // bl
  __int64 *v4; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    CmpInitializeThreadInfo((__int64)&v10);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KxReleaseSpinLock((volatile signed __int64 *)&Timer[2].DueTime);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    v3 = ((__int64 (__fastcall *)(char *, __int64 *))Timer[2].TimerListEntry.Flink)(&v11, &v12);
    if ( CmpCannotWriteConfiguration && Timer == &CmpLazyWriterData )
    {
      if ( v11 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    if ( v3 )
      v4 = &v12;
    else
      v4 = 0LL;
    CmpCompleteLazyWrite(Timer, v4);
    *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v10;
  }
}
