/*
 * XREFs of sub_140629E84 @ 0x140629E84
 * Callers:
 *     sub_1409D9340 @ 0x1409D9340 (sub_1409D9340.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_1409DA014 @ 0x1409DA014 (sub_1409DA014.c)
 */

__int64 __fastcall sub_140629E84(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  _RTL_BALANCED_NODE *ParentValue; // rdi
  PRTL_BALANCED_NODE v7; // r15
  ULONG_PTR v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  _RTL_BALANCED_NODE **v12; // r11
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  _RTL_BALANCED_NODE **v16; // rbx
  ULONG_PTR v17; // rax
  _RTL_BALANCED_NODE *v18; // r10
  _RTL_BALANCED_NODE *v19; // rcx
  ULONG_PTR v20; // rcx
  _RTL_BALANCED_NODE *v21; // r8
  _RTL_BALANCED_NODE *v22; // r9
  unsigned __int64 v23; // rdx
  _RTL_BALANCED_NODE *v24; // rdx
  _RTL_BALANCED_NODE *v25; // rcx
  _RTL_BALANCED_NODE **v26; // rax
  _RTL_BALANCED_NODE *i; // rcx
  BOOLEAN v28; // r8
  _RTL_BALANCED_NODE *v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  BOOLEAN v32; // r8
  _RTL_BALANCED_NODE *v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v37; // r8
  int v38; // eax
  bool v39; // zf

  ParentValue = (_RTL_BALANCED_NODE *)Node[1].ParentValue;
  v7 = 0LL;
  v8 = 0LL;
  v9 = sub_14045F78C(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v14 = -1073740007;
    goto LABEL_81;
  }
  v12 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v13 )
    v13 ^= (unsigned __int64)v12;
  while ( v13 )
  {
    if ( ParentValue[2].Children[1] >= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 24) )
    {
      if ( ParentValue[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v13 + 32) )
        goto LABEL_21;
      v15 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v13;
    }
    if ( (SpinLock[4] & 1) != 0 && v15 )
      v13 ^= v15;
    else
      v13 = v15;
  }
  v16 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v17 = *((_QWORD *)SpinLock + 3);
  if ( (SpinLock[8] & 1) != 0 && v17 )
    v17 ^= (unsigned __int64)v16;
  if ( !v17 )
  {
LABEL_33:
    v23 = (unsigned __int64)*v12;
    if ( (SpinLock[4] & 1) != 0 && v23 )
      v23 ^= (unsigned __int64)v12;
    v28 = 0;
    if ( v23 )
    {
      v29 = ParentValue[2].Children[0];
      while ( 1 )
      {
        if ( (unsigned __int64)v29 > *(_QWORD *)(v23 + 32) || (unsigned __int64)v29 >= *(_QWORD *)(v23 + 24) )
        {
          v30 = *(_QWORD *)(v23 + 8);
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_59;
            v30 ^= v23;
          }
          if ( !v30 )
          {
LABEL_59:
            v28 = 1;
            break;
          }
        }
        else
        {
          v30 = *(_QWORD *)v23;
          if ( (SpinLock[4] & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_53;
            v30 ^= v23;
          }
          if ( !v30 )
          {
LABEL_53:
            v28 = 0;
            break;
          }
        }
        v23 = v30;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v23, v28, ParentValue + 1);
    if ( !v8 )
    {
      v31 = (unsigned __int64)*v16;
      if ( (SpinLock[8] & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)v16;
      v32 = 0;
      if ( v31 )
      {
        v33 = Node[1].Children[0];
        while ( 1 )
        {
          if ( (unsigned __int64)v33 > *(_QWORD *)(v31 + 32) || (unsigned __int64)v33 >= *(_QWORD *)(v31 + 24) )
          {
            v34 = *(_QWORD *)(v31 + 8);
            if ( (SpinLock[8] & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_78;
              v34 ^= v31;
            }
            if ( !v34 )
            {
LABEL_78:
              v32 = 1;
              break;
            }
          }
          else
          {
            v34 = *(_QWORD *)v31;
            if ( (SpinLock[8] & 1) != 0 )
            {
              if ( !v34 )
                goto LABEL_72;
              v34 ^= v31;
            }
            if ( !v34 )
            {
LABEL_72:
              v32 = 0;
              break;
            }
          }
          v31 = v34;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)v31, v32, Node);
    }
    v14 = 0;
    goto LABEL_81;
  }
  v18 = Node[1].Children[1];
  while ( 1 )
  {
    v19 = *(_RTL_BALANCED_NODE **)(v17 + 24);
    if ( v18 < v19 )
    {
      v20 = *(_QWORD *)v17;
      goto LABEL_28;
    }
    v21 = Node[1].Children[0];
    v22 = *(_RTL_BALANCED_NODE **)(v17 + 32);
    if ( v21 <= v22 )
      break;
    v20 = *(_QWORD *)(v17 + 8);
LABEL_28:
    if ( (SpinLock[8] & 1) != 0 && v20 )
      v17 ^= v20;
    else
      v17 = v20;
    if ( !v17 )
      goto LABEL_33;
  }
  v8 = v17;
  if ( v19 == v21 && v22 == v18 )
  {
    v24 = ParentValue->Children[0];
    v25 = ParentValue->Children[1];
    if ( ParentValue->Children[0]->Children[1] != ParentValue || v25->Children[0] != ParentValue )
      __fastfail(3u);
    v25->Children[0] = v24;
    v24->Children[1] = v25;
    ParentValue->ParentValue = v17;
    v26 = (_RTL_BALANCED_NODE **)(v17 + 40);
    for ( i = *v26; i != (_RTL_BALANCED_NODE *)v26; i = i->Children[0] )
    {
      if ( i[2].Children[0] > ParentValue[2].Children[0] )
        break;
    }
    v7 = Node;
    i->Children[1]->Children[0] = ParentValue;
    ParentValue->Children[1] = i->Children[1];
    i->Children[1] = ParentValue;
    ParentValue->Children[0] = i;
    goto LABEL_33;
  }
LABEL_21:
  v14 = -1073741800;
LABEL_81:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = *((_QWORD *)CurrentPrcb + 4375);
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v39 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= v38;
          if ( v39 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v11);
  }
  if ( v7 )
    sub_1409DA014(v7);
  return v14;
}
