/*
 * XREFs of CcDeferWrite @ 0x140539E20
 * Callers:
 *     sub_140605B10 @ 0x140605B10 (sub_140605B10.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExInterlockedInsertHeadList @ 0x1402430F0 (ExInterlockedInsertHeadList.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140284848 @ 0x140284848 (sub_140284848.c)
 *     sub_14029C124 @ 0x14029C124 (sub_14029C124.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  unsigned __int64 OldIrql; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  KSPIN_LOCK *v19; // r8
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v30, 0, sizeof(v30));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v10 = sub_14029C124((__int64)FileObject);
    v12 = sub_140284848(v11, v10);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 1232)) <= 1 )
      __fastfail(0xEu);
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
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 1232)) <= 1 )
      __fastfail(0xEu);
    if ( v12 && _InterlockedIncrement64(v12 + 1) <= 1 )
      __fastfail(0xEu);
    v19 = (KSPIN_LOCK *)(v10 + 1152);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v20 = (_LIST_ENTRY *)(PoolWithTag + 24);
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    v21 = (_LIST_ENTRY *)v12;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    if ( !v12 )
      v21 = (_LIST_ENTRY *)v10;
    v22 = v21 + 69;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 9) = v10;
    *((_QWORD *)PoolWithTag + 10) = v12;
    *(_DWORD *)PoolWithTag = 6816508;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    *((_QWORD *)PoolWithTag + 12) = MEMORY[0xFFFFF78000000320];
    PoolWithTag[88] = 0;
    if ( Retrying )
      ExInterlockedInsertHeadList(v22, v20, v19);
    else
      ExInterlockedInsertTailList(v22, v20, v19);
    sub_14053A100(v10, v12);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 704), &v30);
    LOBYTE(v23) = 1;
    sub_140276758((_BYTE *)v10, (__int64)v12, v23, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v30);
    v24 = v30.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v30.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v30.OldIrql + 1));
          v18 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v18 )
            sub_140418E4C((__int64)v26);
        }
      }
    }
    __writecr8(v24);
    sub_140276728(v10);
  }
  else
  {
    sub_14042A5E0(Context1, Context2);
  }
}
