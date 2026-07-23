/*
 * XREFs of sub_1402D5484 @ 0x1402D5484
 * Callers:
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     sub_14041C1A0 @ 0x14041C1A0 (sub_14041C1A0.c)
 *     sub_14074F4F0 @ 0x14074F4F0 (sub_14074F4F0.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_1402D5484(__int64 a1)
{
  int v1; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  struct _EX_RUNDOWN_REF *v6; // r13
  int v7; // r12d
  unsigned __int64 OldIrql; // r14
  int v9; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v3 = 128;
  v4 = (v1 & 0x800 | 0x80u) >> 7;
  --*((_WORD *)CurrentThread + 242);
  v6 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  if ( (unsigned __int8)sub_140347810(a1 + 104) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 392);
      v7 = *(_DWORD *)(a1 + 408);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      v9 = sub_14074F4F0(*(_QWORD *)(a1 + 40), 0, v4, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 416) = v9;
      v3 = v9;
      if ( v9 >= 0 )
      {
        if ( (v7 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 408) |= 0x8000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v11 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v18 = KeGetCurrentIrql();
              if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
              {
                v19 = KeGetCurrentPrcb();
                v20 = *((_QWORD *)v19 + 4375);
                v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
                *(_DWORD *)(v20 + 20) &= v21;
                if ( v17 )
                  sub_140418E4C(v19);
              }
            }
          }
          __writecr8(v11);
        }
        if ( *(_DWORD *)(a1 + 412) )
          ZwSetInformationThread(0LL, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
        if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
          ZwSetInformationThread(0LL, ThreadSelectedCpuSets, (PVOID)(a1 + 120), 8 * (unsigned __int16)word_140D05014);
        v3 = sub_14041C1A0(0LL, 0LL);
        ObCloseHandle(0LL, 0);
LABEL_11:
        sub_1402AD030(v6);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 392);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v17 )
            sub_140418E4C(v23);
        }
      }
    }
    __writecr8(v12);
    goto LABEL_11;
  }
LABEL_12:
  sub_1402F9540(KeGetCurrentThread());
  return v3;
}
