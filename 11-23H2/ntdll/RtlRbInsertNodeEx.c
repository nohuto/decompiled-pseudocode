/*
 * XREFs of RtlRbInsertNodeEx @ 0x180039210
 * Callers:
 *     LdrpCheckForRetryLoading @ 0x180010C40 (LdrpCheckForRetryLoading.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18002D030 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertRegistration @ 0x18003241C (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x180034458 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180034A84 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180037F50 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     EtwpInsertGuidEntry @ 0x18005EF9C (EtwpInsertGuidEntry.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800617BC (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x180064A98 (RtlpHpVaMgrFree.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069E80 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 *     RtlCompareExchangePointerMapping @ 0x1801020D0 (RtlCompareExchangePointerMapping.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r11
  char v5; // bl
  $7D93978C745EB1C2D28075BAF55422B4 v7; // al
  _RTL_BALANCED_NODE *v8; // rcx
  unsigned __int64 Min; // rax
  bool v10; // zf
  unsigned __int64 v11; // rax
  _RTL_BALANCED_NODE *v12; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v13; // r14
  char v14; // cl
  unsigned __int64 v15; // rsi
  PRTL_BALANCED_NODE v16; // rbp
  _RTL_BALANCED_NODE *v17; // r8
  unsigned __int64 v18; // rdi
  _BOOL8 v19; // r15
  BOOL v20; // ebp
  _BOOL8 v21; // r13
  __int64 v22; // r12
  unsigned __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _RTL_BALANCED_NODE **v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  _RTL_BALANCED_NODE *v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 Root; // r15
  _BOOL8 v33; // rbp
  unsigned __int64 v34; // rax
  int v35; // r9d
  unsigned __int64 *v36; // r14
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rbx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  _BOOL8 v50; // r12

  v4 = 0LL;
  v5 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = Tree->0;
  v8 = Node;
  LOBYTE(Min) = *(_BYTE *)&v7 & 1;
  if ( !Parent )
  {
    v43 = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    if ( (_BYTE)Min )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v43;
      Tree->Min = (_RTL_BALANCED_NODE *)v43;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v43 | 1);
    }
    else
    {
      Tree->Root = Node;
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v10 = (_BYTE)Min == 0;
  v11 = (unsigned __int64)Parent;
  if ( !v10 )
    v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  Parent->Children[Right] = v8;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v11 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Min = v11 | 1;
  Node->ParentValue = Min;
  if ( Right )
    goto LABEL_7;
  Min = (unsigned __int64)Tree->Min;
  if ( (Min & 1) == 0 )
  {
    v12 = Tree->Min;
    goto LABEL_11;
  }
  if ( Min != 1 )
  {
    v12 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
LABEL_11:
    if ( Parent == v12 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
LABEL_7:
  if ( (*(_BYTE *)&Parent->0 & 1) == 0 )
    return Min;
  v13 = Tree->0;
  v14 = *(_BYTE *)&v13 & 1;
  while ( 1 )
  {
    v15 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v14 && v15 )
    {
      v17 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v15);
      v18 = (unsigned __int64)Parent ^ v15;
      v16 = *(PRTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v15);
    }
    else
    {
      v16 = *(PRTL_BALANCED_NODE *)v15;
      v17 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v18 = (unsigned __int64)v17;
      if ( !v14 )
        goto LABEL_17;
    }
    if ( !v16 )
    {
LABEL_17:
      v19 = v16 != Parent;
      v20 = v16 != Parent;
      v21 = v19;
      v22 = !v19;
      Min = (unsigned __int64)v17->Children[v22];
      if ( !v14 )
        goto LABEL_18;
      goto LABEL_94;
    }
    v19 = ((unsigned __int64)v17 ^ (unsigned __int64)v16) != (_QWORD)Parent;
    v50 = ((unsigned __int64)v17 ^ (unsigned __int64)v16) == (_QWORD)Parent;
    v20 = ((unsigned __int64)v17 ^ (unsigned __int64)v16) != (_QWORD)Parent;
    v22 = v50;
    v21 = v19;
    Min = *(_QWORD *)(v18 + v22 * 8);
LABEL_94:
    if ( !Min )
      break;
    Min ^= (unsigned __int64)v17;
LABEL_18:
    if ( !Min || (*(_BYTE *)(Min + 16) & 1) == 0 )
      break;
    *(_BYTE *)&Parent->0 &= ~1u;
    Node = v17;
    *(_BYTE *)(Min + 16) &= ~1u;
    LOBYTE(Min) = v17->ParentValue;
    Parent = (PRTL_BALANCED_NODE)(v17->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !Parent )
        return Min;
      Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v17 ^ (unsigned __int64)Parent);
    }
    if ( Parent )
    {
      v17->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(Min | 1);
      v13 = Tree->0;
      Min = (unsigned __int64)Parent->Children[0];
      v14 = *(_BYTE *)&v13 & 1;
      if ( (*(_BYTE *)&v13 & 1) != 0 && Min )
        Min ^= (unsigned __int64)Parent;
      v5 = v17 != (_RTL_BALANCED_NODE *)Min;
      if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
        continue;
    }
    return Min;
  }
  if ( v5 == v19 )
    goto LABEL_36;
  v23 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v24 = *(_BYTE *)&v13 & 1;
  if ( (*(_BYTE *)&v13 & 1) != 0 && v23 )
    v23 ^= (unsigned __int64)Node;
  if ( (PRTL_BALANCED_NODE)v23 != Parent )
    goto LABEL_85;
  v25 = (unsigned __int64)Parent->Children[v22];
  if ( (*(_BYTE *)&v13 & 1) != 0 && v25 )
    v25 ^= (unsigned __int64)Parent;
  if ( (PRTL_BALANCED_NODE)v25 != Node )
    goto LABEL_85;
  v26 = (unsigned __int64)v17->Children[v21];
  if ( (*(_BYTE *)&v13 & 1) != 0 && v26 )
    v26 ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)v26 != Parent )
    goto LABEL_85;
  if ( (*(_BYTE *)&v13 & 1) != 0 && v15 )
    v15 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v15 != v17 )
    goto LABEL_85;
  v27 = &Node->Children[v21];
  v28 = v18 ^ (unsigned __int64)Node;
  if ( !v24 )
  {
    v17->Children[v21] = Node;
    Node->ParentValue &= 3uLL;
    Node->ParentValue |= (unsigned __int64)v17;
    v29 = (unsigned __int64)*v27;
    goto LABEL_30;
  }
  v17->Children[v21] = (_RTL_BALANCED_NODE *)v28;
  Node->ParentValue &= 3uLL;
  Node->ParentValue |= v28;
  v29 = (unsigned __int64)*v27;
  if ( !*v27 )
    goto LABEL_31;
  v29 ^= (unsigned __int64)Node;
LABEL_30:
  if ( !v29 )
  {
LABEL_31:
    v30 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v29);
    goto LABEL_32;
  }
  v47 = *(_QWORD *)(v29 + 16);
  v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v24 && v48 )
    v48 ^= v29;
  if ( (PRTL_BALANCED_NODE)v48 != Node )
    goto LABEL_85;
  v49 = (unsigned __int64)Parent;
  v30 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v29);
  if ( v24 )
    v49 = (unsigned __int64)Parent ^ v29;
  *(_QWORD *)(v29 + 16) = v49 | v47 & 3;
LABEL_32:
  if ( v24 && v29 )
  {
    Parent->Children[v22] = v30;
    v31 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
LABEL_114:
    *v27 = (_RTL_BALANCED_NODE *)v31;
  }
  else
  {
    Parent->Children[v22] = (_RTL_BALANCED_NODE *)v29;
    v31 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
    if ( v24 )
      goto LABEL_114;
    *v27 = Parent;
    v31 = (unsigned __int64)Node;
  }
  Parent->ParentValue &= 3uLL;
  Parent->ParentValue |= v31;
  Parent = Node;
LABEL_36:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v33 = !v20;
  v34 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v35 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v34 )
    v34 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v34 != v17 )
    goto LABEL_85;
  v36 = (unsigned __int64 *)&v17->Children[!v33];
  Min = *v36;
  if ( ((__int64)Tree->Min & 1) != 0 && Min )
    Min ^= (unsigned __int64)v17;
  if ( (PRTL_BALANCED_NODE)Min != Parent )
    goto LABEL_85;
  v37 = v17->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_42;
  if ( !v37 )
    goto LABEL_83;
  v37 ^= (unsigned __int64)v17;
LABEL_42:
  if ( !v37 )
  {
LABEL_83:
    if ( (_RTL_BALANCED_NODE *)Root == v17 )
    {
      Root = (unsigned __int64)Parent;
      goto LABEL_48;
    }
    goto LABEL_85;
  }
  v38 = *(_QWORD *)(v37 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v38 )
    v38 ^= v37;
  if ( (_RTL_BALANCED_NODE *)v38 == v17 )
  {
    Min = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      Min = (unsigned __int64)Parent ^ v37;
    *(_QWORD *)(v37 + 8) = Min;
    goto LABEL_48;
  }
  v44 = *(_QWORD *)v37;
  if ( ((__int64)Tree->Min & 1) != 0 && v44 )
    v44 ^= v37;
  if ( (_RTL_BALANCED_NODE *)v44 != v17 )
    goto LABEL_85;
  Min = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    Min = (unsigned __int64)Parent ^ v37;
  *(_QWORD *)v37 = Min;
LABEL_48:
  if ( v35 && v37 )
  {
    Parent->ParentValue &= 3uLL;
    Parent->ParentValue |= (unsigned __int64)Parent ^ v37;
    v39 = (unsigned __int64 *)&Parent->Children[v33];
    v40 = *v39;
LABEL_129:
    if ( v40 )
    {
      v40 ^= (unsigned __int64)Parent;
      goto LABEL_50;
    }
    goto LABEL_51;
  }
  Parent->ParentValue &= 3uLL;
  Parent->ParentValue |= v37;
  v39 = (unsigned __int64 *)&Parent->Children[v33];
  v40 = *v39;
  if ( v35 )
    goto LABEL_129;
LABEL_50:
  if ( !v40 )
  {
LABEL_51:
    v41 = (unsigned __int64)v17 ^ v40;
    goto LABEL_52;
  }
  v45 = *(_QWORD *)(v40 + 16);
  v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 && v46 )
    v46 ^= v40;
  if ( (PRTL_BALANCED_NODE)v46 != Parent )
LABEL_85:
    __fastfail(0x1Du);
  Min = (unsigned __int64)v17;
  v41 = v18 ^ v40;
  if ( v35 )
    Min = v18 ^ v40;
  *(_QWORD *)(v40 + 16) = Min | v45 & 3;
LABEL_52:
  if ( v35 && v40 )
  {
    *v36 = v41;
    v42 = (unsigned __int64)Parent ^ v18;
LABEL_135:
    *v39 = v42;
  }
  else
  {
    v42 = (unsigned __int64)Parent ^ v18;
    *v36 = v40;
    if ( v35 )
      goto LABEL_135;
    *v39 = (unsigned __int64)v17;
    v42 = (unsigned __int64)Parent;
  }
  v17->ParentValue &= 3uLL;
  v17->ParentValue |= v42;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    LOBYTE(Min) = (unsigned __int8)Tree ^ Root;
    if ( Root )
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
  }
  else
  {
    v4 = (_RTL_BALANCED_NODE *)Root;
  }
  Tree->Root = v4;
  *(_BYTE *)&v17->0 |= 1u;
  *(_BYTE *)&Parent->0 &= ~1u;
  return Min;
}
