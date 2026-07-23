/*
 * XREFs of MiProcessLoaderEntry @ 0x1402908A8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140704A3C (MiConstructLoaderEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402907E0 (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x140290AF8 (MmLockLoadedModuleListExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140369610 (RtlRemoveInvertedFunctionTable.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiProcessLoaderEntry(unsigned __int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 **v5; // rax
  bool v6; // r8
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r10
  ULONG_PTR v9; // r8
  _QWORD *v10; // rax
  unsigned __int8 v11; // bl
  unsigned __int64 v13; // rcx
  unsigned __int64 **v14; // rax
  unsigned __int8 v15; // bl
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  unsigned __int8 v25; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 != 1 )
  {
    if ( (MiFlags & 0x40000) == 0 )
      RtlRemoveInvertedFunctionTable(a1[6]);
    MmLockLoadedModuleListExclusive(&v25);
    v13 = *a1;
    v14 = (unsigned __int64 **)a1[1];
    if ( *(unsigned __int64 **)(*a1 + 8) == a1 && *v14 == a1 )
    {
      *v14 = (unsigned __int64 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      RtlAvlRemoveNode(&BugCheckParameter3, a1 + 29);
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( (_DWORD)KiIrqlFlags
        && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
        && CurrentIrql <= 0xFu )
      {
        v15 = v25;
        if ( v25 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = v25;
          v24 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v20 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v15 = v25;
      }
      __writecr8(v15);
      goto LABEL_16;
    }
LABEL_24:
    __fastfail(3u);
  }
  MmLockLoadedModuleListExclusive(&v25);
  v5 = (unsigned __int64 **)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_24;
  *a1 = (unsigned __int64)&PsLoadedModuleList;
  v6 = 0;
  a1[1] = (unsigned __int64)v5;
  *v5 = a1;
  v7 = (_QWORD *)BugCheckParameter3;
  *(&PsLoadedModuleList + 1) = a1;
  v8 = a1[6];
  if ( BugCheckParameter3 )
  {
    while ( 1 )
    {
      v9 = *(v7 - 23);
      if ( v8 <= v9 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        if ( v8 >= v9 )
          KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
        v10 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v6 = 0;
          break;
        }
      }
      else
      {
        v10 = (_QWORD *)v7[1];
        if ( !v10 )
        {
          v6 = 1;
          break;
        }
      }
      v7 = v10;
    }
  }
  RtlAvlInsertNodeEx(&BugCheckParameter3, (unsigned __int64)v7, v6, (unsigned __int64)(a1 + 29));
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (_DWORD)KiIrqlFlags && (v16 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v16 <= 0xFu )
  {
    v11 = v25;
    if ( v25 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v11 = v25;
      v19 = ~(unsigned __int16)(-1LL << (v25 + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  else
  {
    v11 = v25;
  }
  __writecr8(v11);
  if ( (MiFlags & 0x40000) == 0 )
    RtlInsertInvertedFunctionTable(a1[6], *((_DWORD *)a1 + 16));
LABEL_16:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
