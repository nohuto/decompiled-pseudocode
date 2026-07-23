/*
 * XREFs of sub_140239A98 @ 0x140239A98
 * Callers:
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140239A98(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _QWORD *v13; // rax
  unsigned int i; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v1 )
  {
    v5 = v1 & 0xF;
    v6 = 16LL * (unsigned int)v5;
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + v4 + 104));
    RtlAvlRemoveNode(v4 + 16 * (v5 + 6), a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + v4 + 104));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v8 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFE0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v8 )
  {
    v13 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v13 != (_QWORD *)a1 )
      {
        v15 = *v13;
        v16 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v16 != v13 )
          goto LABEL_17;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      v13 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = sub_14025D410;
      *(_QWORD *)(v4 + 56) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v9 = (_QWORD *)(v4 + 72);
    v10 = *(_QWORD *)(v4 + 72);
    if ( *(_QWORD *)(v10 + 8) != v4 + 72 )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a1;
    *v9 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = *((_QWORD *)v21 + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(v21);
      }
    }
  }
  __writecr8(OldIrql);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 388), 0xFFFFFFFF);
  return result;
}
