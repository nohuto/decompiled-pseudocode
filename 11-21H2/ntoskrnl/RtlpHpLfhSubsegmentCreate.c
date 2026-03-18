/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x140362C48
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x140362B90 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x140362EC4 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x140362EF4 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x140362FA0 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpAcquireLockShared @ 0x140364760 (RtlpHpAcquireLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  int v7; // esi
  BOOL v8; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // bp
  __int64 v19; // r15
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  __int64 v22; // r14
  struct _KTHREAD *CurrentThread; // rcx
  bool v24; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // edx
  int v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+90h] [rbp+18h] BYREF
  int v33; // [rsp+98h] [rbp+20h]

  v31 = 0;
  v32 = 0;
  v6 = *(unsigned __int8 *)(a2 + 1);
  v7 = (unsigned __int16)RtlpBucketBlockSizes[v6];
  v30 = v7;
  v8 = (RtlpHpLfhPerfFlags & 1) != 0 && RtlpHpLfhBucketSubsegmentStatsUpdate((volatile signed __int64 *)(a1 + 64), v6);
  v9 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, v8);
  v10 = (8 * (((unsigned __int64)(unsigned int)(2 * v9) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v11 = RtlpCalculateSubsegmentSizeIndex(v10 + 2 * ((unsigned int)(v7 * v9 + v10 + 4095) >> 12) + v7 * v9);
  v14 = 12LL;
  if ( v11 <= 0xC )
    LOBYTE(v11) = 12;
  v15 = 1 << v11;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && (unsigned int)v13 <= v12 >> 6 )
  {
    v16 = RtlpCalculateSubsegmentSizeIndex(v12);
    if ( v16 <= (unsigned int)v14 )
      LOBYTE(v16) = v14;
    v17 = 1 << v16;
    if ( v15 > v17 )
      v15 = v17;
  }
  if ( (a3 & 1) != 0 )
    v18 = -1;
  else
    v18 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57), v13, v14);
  v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v15,
          a3,
          &v32,
          &v31);
  if ( v19 )
  {
    if ( v8 && (RtlpHpLfhPerfFlags & 2) != 0 || (v32 & 1) != 0 )
    {
      v20 = v15;
    }
    else
    {
      v20 = 2 * v30;
      v33 = 0;
      if ( ((v20 - 1) & v20) != 0 )
      {
        _BitScanReverse(&v21, v20);
        v33 = v21 + 1;
        v20 = 1 << (v21 + 1);
      }
      if ( v20 <= 0x1000 )
        v20 = 4096;
      if ( v20 >= v15 )
        v20 = v15;
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v19,
           v20) < 0 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v19,
        v15,
        a3);
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v19, v15, v20, v30, a1);
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 64), 1uLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v19 + 34));
      v22 = v19;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v18 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v18 + 1));
            v24 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v22;
}
