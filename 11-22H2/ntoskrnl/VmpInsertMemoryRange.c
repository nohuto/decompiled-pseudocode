/*
 * XREFs of VmpInsertMemoryRange @ 0x1405F941C
 * Callers:
 *     VmCreateMemoryRange @ 0x1409DC590 (VmCreateMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x1404666BE (VmpProcessContextLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFreeMemoryRanges @ 0x1409DD25C (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  _RTL_BALANCED_NODE *ParentValue; // rdi
  PRTL_BALANCED_NODE v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  _RTL_BALANCED_NODE **v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  _RTL_BALANCED_NODE **v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *v19; // rdx
  _RTL_BALANCED_NODE *v20; // rax
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *i; // rcx
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  _RTL_BALANCED_NODE *v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  _RTL_BALANCED_NODE *v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf

  ParentValue = (_RTL_BALANCED_NODE *)Node[1].ParentValue;
  v7 = 0LL;
  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v15 = -1073740007;
    goto LABEL_82;
  }
  v12 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  if ( v13 )
  {
    do
    {
      if ( ParentValue[2].Children[1] >= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 24) )
      {
        if ( ParentValue[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 32) )
          break;
        v14 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v13;
      }
      if ( (SpinLock[4] & 1) != 0 && v14 )
        v13 ^= v14;
      else
        v13 = v14;
    }
    while ( v13 );
    if ( v13 )
      goto LABEL_19;
  }
  v16 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v17 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v17 )
    v17 ^= (unsigned __int64)v16;
  if ( v17 )
  {
    do
    {
      if ( Node[1].Children[1] >= (_RTL_BALANCED_NODE *)*(_QWORD *)(v17 + 24) )
      {
        if ( Node[1].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v17 + 32) )
          break;
        v18 = *(_QWORD *)(v17 + 8);
      }
      else
      {
        v18 = *(_QWORD *)v17;
      }
      if ( (SpinLock[8] & 1) != 0 && v18 )
        v17 ^= v18;
      else
        v17 = v18;
    }
    while ( v17 );
    if ( v17 )
    {
      v8 = v17;
      if ( *(_RTL_BALANCED_NODE **)(v17 + 24) != Node[1].Children[0]
        || *(_RTL_BALANCED_NODE **)(v17 + 32) != Node[1].Children[1] )
      {
LABEL_19:
        v15 = -1073741800;
        goto LABEL_82;
      }
      v19 = ParentValue->Children[0];
      v20 = ParentValue->Children[1];
      if ( ParentValue->Children[0]->Children[1] != ParentValue || v20->Children[0] != ParentValue )
        __fastfail(3u);
      v20->Children[0] = v19;
      v19->Children[1] = v20;
      v21 = (_RTL_BALANCED_NODE *)(v17 + 40);
      ParentValue->ParentValue = v17;
      for ( i = *(_RTL_BALANCED_NODE **)(v17 + 40); i != v21; i = i->Children[0] )
      {
        if ( i[2].Children[0] > ParentValue[2].Children[0] )
          break;
      }
      v7 = Node;
      i->Children[1]->Children[0] = ParentValue;
      ParentValue->Children[1] = i->Children[1];
      i->Children[1] = ParentValue;
      ParentValue->Children[0] = i;
    }
  }
  v23 = (unsigned __int64)*v12;
  if ( (SpinLock[4] & 1) != 0 && v23 )
    v23 ^= (unsigned __int64)v12;
  v24 = 0;
  if ( v23 )
  {
    v25 = ParentValue[2].Children[0];
    while ( 1 )
    {
      if ( (unsigned __int64)v25 > *(_QWORD *)(v23 + 32) || (unsigned __int64)v25 >= *(_QWORD *)(v23 + 24) )
      {
        v26 = *(_QWORD *)(v23 + 8);
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_60;
          v26 ^= v23;
        }
        if ( !v26 )
        {
LABEL_60:
          v24 = 1;
          break;
        }
      }
      else
      {
        v26 = *(_QWORD *)v23;
        if ( (SpinLock[4] & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_53;
          v26 ^= v23;
        }
        if ( !v26 )
        {
LABEL_53:
          v24 = 0;
          break;
        }
      }
      v23 = v26;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v23, v24, ParentValue + 1);
  if ( !v8 )
  {
    v27 = (unsigned __int64)*v16;
    if ( (SpinLock[8] & 1) != 0 && v27 )
      v27 ^= (unsigned __int64)v16;
    v28 = 0;
    if ( v27 )
    {
      v29 = Node[1].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v29 > *(_QWORD *)(v27 + 32) || (unsigned __int64)v29 >= *(_QWORD *)(v27 + 24) )
        {
          v30 = *(_QWORD *)(v27 + 8);
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_79;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_79:
            v28 = 1;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)v27;
          if ( (SpinLock[8] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_73;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_73:
            v28 = 0;
            break;
          }
        }
        v27 = v30;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)v27, v28, Node);
  }
  v15 = 0;
LABEL_82:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v11 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v35 = (v34 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    VmpFreeMemoryRanges(v7);
  return v15;
}
