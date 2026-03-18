/*
 * XREFs of MiProcessLoaderEntry @ 0x1402D8C20
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075F4A4 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x140259480 (RtlRemoveInvertedFunctionTable.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402D8ABC (RtlInsertInvertedFunctionTable.c)
 *     MiReleaseResourceLite @ 0x1402D8E00 (MiReleaseResourceLite.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiProcessLoaderEntry(unsigned __int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v5; // r8
  unsigned __int64 **v6; // rax
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r10
  _QWORD *v9; // rax
  unsigned __int8 v10; // bl
  unsigned __int64 v12; // rcx
  unsigned __int64 **v13; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  unsigned __int8 v24; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 != 1 )
  {
    if ( (MiFlags & 0x40000) == 0 )
      RtlRemoveInvertedFunctionTable(a1[6]);
    MmLockLoadedModuleListExclusive(&v24);
    v12 = *a1;
    v13 = (unsigned __int64 **)a1[1];
    if ( *(unsigned __int64 **)(*a1 + 8) == a1 && *v13 == a1 )
    {
      *v13 = (unsigned __int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlAvlRemoveNode(&BugCheckParameter3, a1 + 29);
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v14 = v24;
        if ( v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = v24;
          v23 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v19 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v14 = v24;
      }
      __writecr8(v14);
      return MiReleaseResourceLite(CurrentThread, &PsLoadedModuleResource, 64LL);
    }
LABEL_24:
    __fastfail(3u);
  }
  MmLockLoadedModuleListExclusive(&v24);
  v6 = (unsigned __int64 **)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_24;
  *a1 = (unsigned __int64)&PsLoadedModuleList;
  LOBYTE(v5) = 0;
  a1[1] = (unsigned __int64)v6;
  *v6 = a1;
  v7 = (_QWORD *)BugCheckParameter3;
  *(&PsLoadedModuleList + 1) = a1;
  v8 = a1[6];
  if ( BugCheckParameter3 )
  {
    while ( 1 )
    {
      v5 = *(v7 - 23);
      if ( v8 <= v5 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        if ( v8 >= v5 )
          KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
        v9 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          LOBYTE(v5) = 0;
          break;
        }
      }
      else
      {
        v9 = (_QWORD *)v7[1];
        if ( !v9 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
      v7 = v9;
    }
  }
  RtlAvlInsertNodeEx(&BugCheckParameter3, v7, v5, a1 + 29);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v15 = KeGetCurrentIrql(), v15 <= 0xFu) )
  {
    v10 = v24;
    if ( v24 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v10 = v24;
      v18 = ~(unsigned __int16)(-1LL << (v24 + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  else
  {
    v10 = v24;
  }
  __writecr8(v10);
  if ( (MiFlags & 0x40000) == 0 )
    RtlInsertInvertedFunctionTable(a1[6], *((_DWORD *)a1 + 16));
  return MiReleaseResourceLite(CurrentThread, &PsLoadedModuleResource, 64LL);
}
