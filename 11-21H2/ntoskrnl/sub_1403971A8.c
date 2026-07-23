/*
 * XREFs of sub_1403971A8 @ 0x1403971A8
 * Callers:
 *     sub_140806788 @ 0x140806788 (sub_140806788.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403971A8(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  unsigned __int64 OldIrql; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C23760, &LockHandle);
  v3 = dword_140C23768;
  if ( dword_140C23768 )
  {
    Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)dword_140C23768, 544040269LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v5 = qword_140C23750;
      for ( i = 0LL; (__int64 *)v5 != &qword_140C23750 && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)(Pool2 + 8 * i) = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
      }
    }
    else
    {
      v3 = 0;
    }
  }
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
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = v3;
  *a1 = v2;
  return result;
}
