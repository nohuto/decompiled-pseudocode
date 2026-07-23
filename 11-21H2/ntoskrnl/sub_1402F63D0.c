/*
 * XREFs of sub_1402F63D0 @ 0x1402F63D0
 * Callers:
 *     sub_1407A69D4 @ 0x1407A69D4 (sub_1407A69D4.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140967C2C @ 0x140967C2C (sub_140967C2C.c)
 */

__int64 __fastcall sub_1402F63D0(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  __int64 v7; // rbp
  BOOLEAN v9; // si
  __int64 v10; // rdi
  char v11; // r14
  __int64 v12; // r15
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v19; // edi
  void *v20; // rcx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 OldIrql; // r12
  int v31; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v34; // r9
  int v35; // eax
  unsigned __int64 v36; // rdi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  int v43; // [rsp+90h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 32);
  v9 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v10 = *(_QWORD *)(v7 + 48);
      v11 = *(_BYTE *)(a1 + 59);
      v12 = *(_QWORD *)(v7 + 32);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v43 = v12;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10, &LockHandle);
      v13 = *(_DWORD *)(v10 + 12);
      if ( v13 >= *(_DWORD *)(v10 + 8) )
      {
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
              v34 = *((_QWORD *)CurrentPrcb + 4375);
              v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v26 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
              *(_DWORD *)(v34 + 20) &= v35;
              if ( v26 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v31 = 0;
        if ( v11 )
          v31 = -1;
        if ( !(unsigned int)sub_1402F6750(v12, *(_QWORD *)(v7 + 40), v31, 0, 0) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10, &LockHandle);
          if ( v11 )
            ++*(_DWORD *)(v10 + 20);
          else
            ++*(_DWORD *)(v10 + 16);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v36 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v37 = KeGetCurrentIrql();
              if ( v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
              {
                v38 = KeGetCurrentPrcb();
                v39 = *((_QWORD *)v38 + 4375);
                v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v26 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
                *(_DWORD *)(v39 + 20) &= v40;
                if ( v26 )
                  sub_140418E4C(v38);
              }
            }
          }
          __writecr8(v36);
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7 + 352);
        sub_1402AFC00(v7 + 352);
      }
      else
      {
        v14 = *(_QWORD **)(v10 + 32);
        if ( v14 )
          *(_QWORD *)(v10 + 32) = *v14;
        v15 = v14[1];
        *(_DWORD *)(v10 + 12) = v13 + 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v16 = LockHandle.OldIrql;
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
              v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
              *(_DWORD *)(v24 + 20) &= v25;
              if ( v26 )
                sub_140418E4C(v23);
            }
          }
        }
        __writecr8(v16);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7 + 352);
        sub_1402AFC00(v7 + 352);
        sub_1402F6750(v43, *(_QWORD *)(v7 + 40), -(v11 != 0), v15, 1);
      }
    }
    else
    {
      sub_14035AD70(*(PVOID *)(v7 + 248), 1);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 24);
    if ( v27 )
    {
      v28 = 5;
      if ( a6 )
        v28 = 1;
      sub_14035AD70((PVOID)(v27 + 1240), v28);
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 40);
      if ( (v29 & 1) != 0 )
      {
        if ( v29 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v29 & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
          v41 = *(_QWORD *)(a1 + 40);
          if ( (v41 & 2) != 0 )
            ObfDereferenceObject((PVOID)(v41 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v17 = KeWaitForSingleObject(a2, a3, a4, v9, Timeout);
  CurrentThread = KeGetCurrentThread();
  v19 = v17;
  --*((_WORD *)CurrentThread + 242);
  if ( byte_140D01161 )
    sub_140967C2C(v17);
  v20 = *(void **)(a1 + 32);
  if ( v20 )
    ObfDereferenceObject(v20);
  return v19;
}
