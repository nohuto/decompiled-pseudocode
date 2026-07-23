/*
 * XREFs of VmpMergeMemoryRanges @ 0x1405FA054
 * Callers:
 *     VmMergeMemoryRanges @ 0x1409DC870 (VmMergeMemoryRanges.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x1404666BE (VmpProcessContextLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpVaMemoryRangeGetNext @ 0x1405FB7B4 (VmpVaMemoryRangeGetNext.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x1405FB858 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1409DD25C (VmpFreeMemoryRanges.c)
 *     VmpLockMemoryForPin @ 0x1409DD2B8 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DD890 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  __int64 Next; // rsi
  PEX_SPIN_LOCK v6; // rbp
  __int64 v7; // r12
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *v13; // r8
  __int64 *v14; // r14
  __int64 *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // r14
  _RTL_BALANCED_NODE *v28; // rdi
  _RTL_RB_TREE *v29; // rbp
  _RTL_BALANCED_NODE *v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  Next = 0LL;
  v33 = 0LL;
  v6 = SpinLock;
  v7 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)v6 + 9) != a3 )
  {
    v8 = -1073740007;
LABEL_32:
    if ( v7 != -1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v7 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v7);
    }
    if ( Next )
      VmpFreeMemoryRanges((PVOID)Next);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)v6 + 3);
  if ( (v6[8] & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)(v6 + 6);
  while ( v9 )
  {
    if ( a2 <= *(_QWORD *)(v9 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v9 + 24) )
        break;
      v10 = *(_QWORD *)v9;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 8);
    }
    if ( (v6[8] & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  if ( !v9 )
  {
    v8 = -1073741172;
    goto LABEL_32;
  }
  if ( *(_QWORD *)(v9 + 32) != a2 )
  {
    v8 = -1073741503;
    goto LABEL_32;
  }
  Next = VmpVaMemoryRangeGetNext(v6, v9);
  if ( !Next || *(_QWORD *)(Next + 24) != a2 + 1 )
  {
    v8 = -1073741503;
LABEL_31:
    Next = 0LL;
    goto LABEL_32;
  }
  VmpVaRangeNumberOfGpaRanges(v9);
  v11 = VmpVaRangeNumberOfGpaRanges(Next);
  if ( v12 != v11 || ((*(_BYTE *)(v9 + 64) ^ *(_BYTE *)(Next + 64)) & 1) != 0 )
  {
LABEL_30:
    v8 = -1073741182;
    goto LABEL_31;
  }
  v13 = *(__int64 **)(Next + 40);
  v14 = (__int64 *)(v9 + 40);
  v15 = *(__int64 **)(v9 + 40);
  do
  {
    if ( v15[7] + 1 < (unsigned __int64)v15[7]
      || v15[7] + 1 != v13[6]
      || ((*((_BYTE *)v15 + 64) ^ *((_BYTE *)v13 + 64)) & 1) != 0 )
    {
      goto LABEL_30;
    }
    v15 = (__int64 *)*v15;
    v13 = (__int64 *)*v13;
  }
  while ( v15 != v14 );
  if ( !*(_QWORD *)(v9 + 56) )
  {
LABEL_54:
    v27 = (_QWORD *)*v14;
    v28 = *(_RTL_BALANCED_NODE **)(Next + 40);
    v29 = (_RTL_RB_TREE *)(v6 + 2);
    do
    {
      RtlRbRemoveNode(v29, v28 + 1);
      v30 = v28[2].Children[1];
      v28[1].ParentValue = -1LL;
      v27[7] = v30;
      *(_DWORD *)&v28[2].0 &= ~1u;
      v27 = (_QWORD *)*v27;
      v28 = v28->Children[0];
    }
    while ( v27 != (_QWORD *)(v9 + 40) );
    v6 = SpinLock;
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)Next);
    v31 = *(_QWORD *)(Next + 32);
    *(_QWORD *)(Next + 16) = -1LL;
    *(_QWORD *)(v9 + 32) = v31;
    ++*((_QWORD *)SpinLock + 5);
    v8 = 0;
    goto LABEL_32;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  if ( (_DWORD)KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v20 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8((unsigned __int8)v7);
  v8 = VmpLockMemoryForPin(
         (_DWORD)v6,
         *(_QWORD *)(v9 + 24),
         (unsigned int)*(_QWORD *)(Next + 32) - (unsigned int)*(_QWORD *)(v9 + 24) + 1,
         *(_DWORD *)(v9 + 64) & 1,
         (__int64)&v33);
  if ( v8 >= 0 )
  {
    VmpUnlockMemoryForPin(v6, *(_QWORD *)(Next + 56));
    VmpUnlockMemoryForPin(v6, *(_QWORD *)(v9 + 56));
    v7 = VmpProcessContextLockExclusive(v6);
    v26 = v33;
    v33 = 0LL;
    *(_QWORD *)(v9 + 56) = v26;
    *(_QWORD *)(Next + 56) = 0LL;
    goto LABEL_54;
  }
  return (unsigned int)v8;
}
