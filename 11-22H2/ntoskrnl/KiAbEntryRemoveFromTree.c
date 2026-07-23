/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14024B530
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14022F8B0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x1402BD6D0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     KiAbCrossThreadRelease @ 0x1403CA6DC (KiAbCrossThreadRelease.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x14033F5F8 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140348720 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 a1)
{
  __int64 v2; // rax
  volatile LONG *v3; // rsi
  _RTL_RB_TREE *v4; // r12
  unsigned __int8 CurrentIrql; // r15
  int v6; // edi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *v13; // rbp
  _RTL_RB_TREE *v14; // rcx
  _BYTE *v15; // rbx
  __int64 v16; // r14
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  _RTL_RB_TREE *v21; // r9
  _RTL_BALANCED_NODE *v22; // r13
  _RTL_BALANCED_NODE *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // [rsp+20h] [rbp-78h]
  unsigned int v32; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+48h] [rbp-50h] BYREF

  v32 = *(_DWORD *)(a1 + 8);
  v31 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v31 >> 4) & 0x3FF) << 6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  memset(&v34, 0, sizeof(v34));
  v4 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v19;
  }
  v6 = *(_BYTE *)(a1 + 19) & 1;
  if ( (*(_BYTE *)(a1 + 19) & 1) == 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel(v3);
    goto LABEL_4;
  }
  while ( 1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
LABEL_4:
    Min = v4->Min;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( !Root )
        goto LABEL_13;
      Root ^= (unsigned __int64)v4;
    }
    v9 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v10 = *(_QWORD *)(Root - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v31 )
        goto LABEL_26;
      if ( v10 > v31 )
        goto LABEL_10;
      v11 = *(_DWORD *)(Root - 16);
      if ( v11 == v32 )
        break;
      if ( v11 < v32 )
      {
LABEL_26:
        v12 = *(_QWORD *)(Root + 8);
        if ( v9 && v12 )
        {
LABEL_30:
          Root ^= v12;
          continue;
        }
      }
      else
      {
LABEL_10:
        v12 = *(_QWORD *)Root;
        if ( v9 && v12 )
          goto LABEL_30;
      }
      Root = v12;
    }
LABEL_13:
    v13 = (_RTL_BALANCED_NODE *)(Root - 24);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Root - 24 + 80), &LockHandle);
    if ( Root - 24 != a1 )
      break;
    if ( v6 )
    {
      if ( v13[2].ParentValue )
      {
        v14 = (_RTL_RB_TREE *)&v13[2].16;
        v22 = v13 + 2;
      }
      else
      {
        v14 = (_RTL_RB_TREE *)&v13[2];
        if ( !v13[2].Children[0] )
          goto LABEL_17;
        v22 = v13 + 2;
      }
      if ( v14 )
      {
        v23 = v14->Root;
        RtlRbRemoveNode(v14, v14->Root);
        RtlRbReplaceNode(v4, Root, v23);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v23[2].Children[1], &v34);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v23[1].0 = v22->0;
        *(_OWORD *)&v23[1].0 = *(_OWORD *)&v13[2].0;
        BYTE4(v23[2].ParentValue) = BYTE4(v13[3].ParentValue);
        HIDWORD(v23[2].ParentValue) ^= (HIDWORD(v23[2].ParentValue) ^ HIDWORD(v13[3].ParentValue)) & 0x7F00;
        KiAbTryDecrementIoWaiterCounts(Root - 24, &v23[-1], v24, v25);
        BYTE3(v23[-1].ParentValue) |= 1u;
        KxReleaseQueuedSpinLock(&v34);
      }
      else
      {
LABEL_17:
        RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        if ( (v13->ParentValue & 0x2000000) != 0 )
        {
          --BYTE4(v13[3].ParentValue);
          BYTE3(v13->ParentValue) &= ~2u;
        }
        if ( (v13->ParentValue & 0x4000000) != 0 )
        {
          HIDWORD(v13[3].ParentValue) ^= ((unsigned __int16)HIDWORD(v13[3].ParentValue) ^ (unsigned __int16)(((unsigned __int16)(HIDWORD(v13[3].ParentValue) >> 8) - 1) << 8)) & 0x7F00;
          BYTE3(v13->ParentValue) &= ~4u;
        }
      }
      v15 = (_BYTE *)(a1 + 17);
      HIBYTE(v13->Left) &= ~0x80u;
      BYTE3(v13->ParentValue) &= ~1u;
      goto LABEL_22;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KxReleaseQueuedSpinLock(&LockHandle);
    v6 = 1;
  }
  if ( v6 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  v15 = (_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 7) &= ~0x80u;
  if ( *(_BYTE *)(a1 + 17) )
    KiAbTryDecrementIoWaiterCounts(a1, v13, v20, &v13[2].16);
  else
    v21 = (_RTL_RB_TREE *)&v13[2];
  RtlRbRemoveNode(v21, (PRTL_BALANCED_NODE)(a1 + 24));
LABEL_22:
  KxReleaseQueuedSpinLock(&LockHandle);
  v16 = a1 - 96LL * *(unsigned __int8 *)(a1 + 16);
  if ( *v15 )
    --*(_BYTE *)(v16 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 - 825), 0xFFu);
  if ( (_DWORD)KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
