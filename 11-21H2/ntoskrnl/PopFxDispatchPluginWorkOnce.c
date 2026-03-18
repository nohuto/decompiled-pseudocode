/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x14022ED94
 * Callers:
 *     PopFxProcessWorkPool @ 0x14022EBF8 (PopFxProcessWorkPool.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x14022EEF4 (PopFxEnableWorkOrderWatchdog.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopPepWork @ 0x140355EE8 (PopPepWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403580A8 (PopFxDisableWorkOrderWatchdog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter3)
{
  bool v2; // zf
  unsigned __int64 v3; // rdi
  unsigned __int8 (__fastcall *v5)(__int64, __int128 *); // rax
  unsigned __int8 (__fastcall *v6)(__int64, __int128 *); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  __int128 v11; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[8]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v14[16]; // [rsp+128h] [rbp+20h] BYREF

  v14[1] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v12[6] = BugCheckParameter2;
  LODWORD(BugCheckParameter2[10]) = 275;
  BugCheckParameter2[2] = 8LL;
  BugCheckParameter2[18] = (ULONG_PTR)v12;
  BugCheckParameter2[4] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[3] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[13] = (ULONG_PTR)PopFxWorkOrderWatchdog;
  BugCheckParameter2[14] = (ULONG_PTR)BugCheckParameter2;
  memset(v12, 0, 40);
  v12[5] = BugCheckParameter3;
  BugCheckParameter2[5] = 0LL;
  HIDWORD(BugCheckParameter2[9]) = 0;
  LOWORD(BugCheckParameter2[9]) = 0;
  BugCheckParameter2[17] = 0LL;
  BugCheckParameter2[12] = 0LL;
  PopFxEnableWorkOrderWatchdog(v12, (unsigned int)PopFxWatchdogWorkOrderTimeout);
  v11 = 0LL;
  memset(v14, 0, sizeof(v14));
  BYTE8(v11) = 0;
  *(_QWORD *)&v11 = v14;
  if ( !BugCheckParameter3 )
  {
    v2 = (unsigned __int8)PopPepWork(v14) == 0;
    goto LABEL_3;
  }
  v5 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter3 + 96);
  if ( v5 && v5(13LL, &v11) )
  {
    v2 = BYTE8(v11) == 0;
LABEL_3:
    if ( v2 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
    goto LABEL_4;
  }
  v6 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter3 + 112);
  if ( !v6 || !v6(10LL, &v11) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  if ( BYTE8(v11) )
  {
    if ( (unsigned int)(v14[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter3, 0LL, 0LL);
LABEL_4:
    v3 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2[19] = (ULONG_PTR)v14;
    KxReleaseSpinLock(&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v2 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v2 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    PopFxProcessWork(BugCheckParameter3);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
}
