/*
 * XREFs of sub_14021CE94 @ 0x14021CE94
 * Callers:
 *     sub_14021CA10 @ 0x14021CA10 (sub_14021CA10.c)
 *     sub_14021CD50 @ 0x14021CD50 (sub_14021CD50.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_14021CE94(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned __int64 OldIrql; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  __int64 v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  __int64 v25; // r8

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v7;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  OldIrql = a2->OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x61546552u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(&PoolWithTag[4 * v5], 0, 16LL * (v7 - v5));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(v10, v2, 16LL * v5);
      v10[2] = v7;
      *(_QWORD *)(a1 + 16) = v10;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      v11 = a2->OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = *((_QWORD *)v19 + 4375);
            v17 = (v20 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v20;
            if ( v17 )
              sub_140418E4C(v19);
          }
        }
      }
      __writecr8(v11);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
      v12 = a2->OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v25 = *((_QWORD *)v23 + 4375);
            v17 = (v24 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v24;
            if ( v17 )
              sub_140418E4C(v23);
          }
        }
      }
      __writecr8(v12);
      ExFreePoolWithTag(v10, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &stru_140C0DA58);
  }
  *((_BYTE *)KeGetCurrentThread() + 1120) = v5;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
}
