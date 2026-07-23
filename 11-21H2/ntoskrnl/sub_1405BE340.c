/*
 * XREFs of sub_1405BE340 @ 0x1405BE340
 * Callers:
 *     sub_14058DDC0 @ 0x14058DDC0 (sub_14058DDC0.c)
 * Callees:
 *     sub_140270204 @ 0x140270204 (sub_140270204.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 *     sub_14058B540 @ 0x14058B540 (sub_14058B540.c)
 *     sub_1405BA5F0 @ 0x1405BA5F0 (sub_1405BA5F0.c)
 */

void __fastcall sub_1405BE340(__int64 a1)
{
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  int v13; // eax
  __int64 v14; // r8
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  Object.Header.LockNV = 393216;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2352) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
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
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  sub_140270204(a1, (volatile signed __int64 *)(a1 + 1360));
  sub_140270204(a1, (volatile signed __int64 *)(a1 + 1352));
  sub_14058B540(a1);
  sub_14053E098(*(_QWORD **)(a1 + 176), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v9 = (_QWORD *)(a1 + 2280);
  v10 = 7LL;
  while ( !*v9 )
  {
    ++v10;
    v9 += 4;
    if ( v10 >= 9 )
      goto LABEL_13;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2344) = &Object;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = *((_QWORD *)v12 + 4375);
        v7 = (v13 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v13;
        if ( v7 )
          sub_140418E4C((__int64)v12);
      }
    }
  }
  __writecr8(v8);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2360) = &Object;
  sub_1405BA5F0(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v15 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2368);
  if ( v15 )
    ExWaitForRundownProtectionReleaseCacheAware(v15);
}
