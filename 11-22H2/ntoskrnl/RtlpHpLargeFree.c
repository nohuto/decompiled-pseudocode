/*
 * XREFs of RtlpHpLargeFree @ 0x140323C8C
 * Callers:
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140212178 (RtlpHpFreeVA.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpMetadataFree @ 0x140323E7C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x140324520 (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLogHeapFailure @ 0x1405B4B5C (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  struct _KTHREAD *v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // edx
  __int128 v25; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+38h] BYREF

  v27 = a2;
  v3 = 0LL;
  v26 = 0LL;
  v4 = a3;
  v6 = (unsigned __int8)RtlpHpLargeLockAcquire(a1, a3);
  v7 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v7 )
    v7 ^= (unsigned __int64)a1 + 72;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v27 >= v8 )
    {
      if ( v27 <= v8 )
        break;
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v7;
    }
    if ( (a1[5] & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  if ( v7 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)((char *)a1 + 72), (PRTL_BALANCED_NODE)v7);
    if ( (v4 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v6 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v15 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v6);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a1 + 8);
        KeAbPostRelease((ULONG_PTR)(a1 + 4));
        CurrentThread = KeGetCurrentThread();
        v15 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v15
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
    v10 = *(_QWORD *)(v7 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v25 = *a1;
    v12 = (((v10 >> 12) + ((v10 >> 1) & 1)) << 12) - 1;
    v26 = (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12)) + v12;
    RtlpHpFreeVA(&v27, &v26, 0x8000LL, &v25);
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, -(*(_QWORD *)(v7 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v26 >> 12));
    v25 = *a1;
    RtlpHpMetadataFree(v7, &v25);
    return v26;
  }
  else
  {
    if ( (v4 & 1) == 0 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( (_DWORD)KiIrqlFlags )
        {
          v21 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v15 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        __writecr8(v6);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a1 + 8);
        KeAbPostRelease((ULONG_PTR)(a1 + 4));
        v20 = KeGetCurrentThread();
        v15 = v20->SpecialApcDisable++ == -1;
        if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, v27, 0, 0LL, 0LL);
  }
  return v3;
}
