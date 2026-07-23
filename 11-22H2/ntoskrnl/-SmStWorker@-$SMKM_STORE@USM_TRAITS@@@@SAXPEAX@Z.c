/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403683E0 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140208890 (IoSetThreadHardErrorMode.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1402B9630 (KeSetActualBasePriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140344DA0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345708 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MmSetHardFaultBehavior @ 0x1403685A0 (MmSetHardFaultBehavior.c)
 *     SmSetThreadPagePriority @ 0x1403686B0 (SmSetThreadPagePriority.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140465B32 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C2644 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C88E8 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C9608 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C9744 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ecx
  __int64 result; // rax
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v13; // rcx
  bool v14; // zf
  char v15; // al
  struct _KTHREAD *v16; // rcx
  _DWORD *v17; // rdi
  struct _KTHREAD *v18; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int v20; // [rsp+90h] [rbp+38h] BYREF
  int v21; // [rsp+98h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+48h] BYREF
  LARGE_INTEGER Interval; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v21 = 0;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(_DWORD *)(v1 + 6736);
  else
    v5 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v4);
  KeSetActualBasePriorityThread(BugCheckParameter1, v5);
  v6 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&BugCheckParameter1, 0LL);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *(void **)(qword_140C674C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25]),
                         0x1AuLL,
                         1024LL) )
    {
      --CurrentThread->SpecialApcDisable;
      LOBYTE(CurrentThread[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    v6 = v3;
    v7 = v3;
    *(_DWORD *)(BugCheckParameter1 + 1380) |= 2u;
    v3 = v3 >= 0;
  }
  *(_DWORD *)(a1 + 32) = v6;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v7 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
LABEL_9:
      v9 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             Executive,
             0,
             0,
             (PLARGE_INTEGER)((v1 + 6600) & -(__int64)(*(_QWORD *)(v1 + 6600) != 0LL)),
             0LL);
      v20 = v9;
      v10 = v9;
      if ( v9 < 2 )
        goto LABEL_10;
      if ( v9 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          KeAbPostRelease(v1 + 6024);
          v13 = KeGetCurrentThread();
          v14 = v13->SpecialApcDisable++ == -1;
          if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
            KiCheckForKernelApcDelivery();
        }
        v10 = 0;
        v20 = 0;
LABEL_10:
        if ( !v10 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          while ( 1 )
          {
            while ( 1 )
            {
              v17 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v21);
              if ( !v17 )
                goto LABEL_9;
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              v15 = *(_BYTE *)(v1 + 6021);
              if ( (v15 & 1) == 0 || v21 )
                break;
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v17);
LABEL_31:
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                KeAbPostRelease(v1 + 6024);
                v16 = KeGetCurrentThread();
                v14 = v16->SpecialApcDisable++ == -1;
                if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
                  KiCheckForKernelApcDelivery();
              }
            }
            if ( (v15 & 2) == 0 || (*v17 & 7) != 0 )
            {
              v20 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v17);
              if ( v20 == 259 )
                goto LABEL_31;
            }
            else
            {
              v20 = -1073741058;
            }
            if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
              KeAbPostRelease(v1 + 6024);
              v18 = KeGetCurrentThread();
              v14 = v18->SpecialApcDisable++ == -1;
              if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(v1 + 6728), v1, v17, &v20);
          }
        }
        if ( v10 == 1 )
          break;
      }
    }
  }
  if ( v3 )
    MmSetHardFaultBehavior(KeGetCurrentThread(), 0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6740);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
