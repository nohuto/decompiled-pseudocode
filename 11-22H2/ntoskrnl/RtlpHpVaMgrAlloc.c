/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x14030FCEC
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x14030FC7C (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x140212200 (RtlpHpEnvFreeVA.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1403100E4 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1403101B4 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpAcquireLockExclusive @ 0x140316AE4 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpVaMgrFree @ 0x14035D40C (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x14036004C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1403646DC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403649D8 (RtlpHpVaMgrRegionAllocate.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  char v9; // dl
  unsigned __int64 v10; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  _RTL_BALANCED_NODE *v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-38h] BYREF
  __int128 v32; // [rsp+40h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h]
  unsigned __int64 v34; // [rsp+58h] [rbp-18h]

  v31 = 0LL;
  v3 = *a2;
  LODWORD(v32) = 0x100000;
  v5 = a3;
  *(_QWORD *)((char *)&v32 + 4) = 0x20000000100000LL;
  HIDWORD(v32) = 0x200000;
  v33 = 0x10000040000000LL;
  if ( !v3 )
    __int2c();
  v7 = *(unsigned __int8 *)(BugCheckParameter2 + 46);
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1 )
  {
    v12 = v3 >> 20;
    v13 = a3 >> 20;
    v14 = (unsigned __int8)RtlpHpAcquireLockExclusive(BugCheckParameter2, v7 & 1);
    v15 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  BugCheckParameter2,
                                  (unsigned __int16)v12,
                                  (unsigned __int16)v13,
                                  &v31);
    v16 = (__int64)v15;
    if ( v15 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v15);
      v17 = v31;
      if ( v31 != v16 )
      {
        *(_OWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *(_BYTE *)v16 = 1;
        *(_BYTE *)(v16 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v16, (__int64)(v17 - v16) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2, v16);
        v16 = v17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v14 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v19 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v14);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        v19 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v19
          && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v16 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v16 )
        return 0LL;
      LOBYTE(v14) = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
       + ((unsigned __int64)(v16 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_BYTE *)v16 = 1;
    *(_BYTE *)(v16 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v16 + 24) > (unsigned __int16)v12 )
    {
      v20 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v16, (unsigned __int16)v12);
      RtlpHpVaMgrFree(BugCheckParameter2, v20);
    }
    v30 = v8;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( (_DWORD)KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v22);
          v8 = v30;
        }
      }
      __writecr8((unsigned __int8)v14);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v18 = KeGetCurrentThread();
      v19 = v18->SpecialApcDisable++ == -1;
      if ( v19 && ($C71981A45BEB2B45F82C232A7085991E *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
      return v30;
    }
  }
  else
  {
    if ( a3 <= *((unsigned int *)&v32 + (((unsigned int)v7 >> 1) & 7)) )
      v5 = *((unsigned int *)&v32 + ((v7 >> 1) & 7));
    v31 = v3 - ((v5 - 1) & (v5 + v3 - 1)) + v5 - 1;
    v30 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v31, v5);
    v8 = v30;
    if ( v30 )
    {
      v9 = *(_BYTE *)(BugCheckParameter2 + 44);
      v10 = v31;
      v33 = 0LL;
      v32 = 0LL;
      BYTE1(v32) = v9;
      v34 = v31 >> 20;
      LOBYTE(v32) = 5;
      if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, v30, &v32) )
      {
        *a2 = v10;
        return v8;
      }
      RtlpHpEnvFreeVA((unsigned __int64 *)&v30, &v31, 0x8000LL);
      return 0LL;
    }
  }
  return v8;
}
