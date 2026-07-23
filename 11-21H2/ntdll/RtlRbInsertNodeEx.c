/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001AD20
 * Callers:
 *     EtwpInsertGuidEntry @ 0x180007C68 (EtwpInsertGuidEntry.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180015220 (RtlpHpSegFreeRangeInsert.c)
 *     EtwpInsertRegistration @ 0x1800162A8 (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8 (LdrpInsertModuleToIndexLockHeld.c)
 *     LdrpCheckForRetryLoading @ 0x18004FFEC (LdrpCheckForRetryLoading.c)
 *     RtlpHpVaMgrFree @ 0x180055F70 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 *     RtlCompareExchangePointerMapping @ 0x180100FE0 (RtlCompareExchangePointerMapping.c)
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
  $7D93978C745EB1C2D28075BAF55422B4 v12; // bp
  _RTL_BALANCED_NODE *v13; // r8
  char v14; // cl
  PRTL_BALANCED_NODE v15; // rdi
  unsigned __int64 v16; // r12
  BOOL v17; // esi
  _BOOL8 v18; // rdi
  _BOOL8 v19; // r14
  __int64 v20; // r13
  _RTL_BALANCED_NODE *v21; // rcx
  unsigned __int64 Root; // r15
  $8168548DF821DDB6878269E7E8351651 *v23; // rdi
  _BOOL8 v24; // rsi
  unsigned __int64 v25; // rax
  int v26; // r9d
  _RTL_BALANCED_NODE **v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  _RTL_BALANCED_NODE **v32; // rsi
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  int v35; // ebp
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  $8168548DF821DDB6878269E7E8351651 *v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  _RTL_BALANCED_NODE **v41; // r15
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v54; // [rsp+38h] [rbp+10h]

  v4 = 0LL;
  v5 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = Tree->0;
  v8 = Node;
  LOBYTE(Min) = *(_BYTE *)&v7 & 1;
  if ( !Parent )
  {
    v49 = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    if ( (_BYTE)Min )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v49;
      Tree->Min = (_RTL_BALANCED_NODE *)v49;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v49 | 1);
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
    v21 = Tree->Min;
    goto LABEL_21;
  }
  if ( Min != 1 )
  {
    v21 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
LABEL_21:
    if ( Parent == v21 )
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
  v12 = Tree->0;
  while ( 1 )
  {
    v13 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v14 = *(_BYTE *)&v12 & 1;
    if ( (*(_BYTE *)&v12 & 1) != 0 && v13 )
    {
      v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v13);
      v16 = (unsigned __int64)v13;
      v15 = v13->Children[0];
    }
    else
    {
      v15 = v13->Children[0];
      v16 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        goto LABEL_11;
    }
    if ( !v15 )
    {
LABEL_11:
      v17 = v15 != Parent;
      v18 = v15 == Parent;
      LODWORD(v19) = v17;
      v20 = v18;
      Min = (unsigned __int64)v13->Children[v18];
      if ( !v14 )
        goto LABEL_12;
      goto LABEL_91;
    }
    v19 = ((unsigned __int64)v13 ^ (unsigned __int64)v15) != (_QWORD)Parent;
    v18 = ((unsigned __int64)v13 ^ (unsigned __int64)v15) == (_QWORD)Parent;
    v17 = v19;
    v20 = !v19;
    Min = *(_QWORD *)(v16 + 8 * !v19);
LABEL_91:
    if ( !Min )
      break;
    Min ^= (unsigned __int64)v13;
LABEL_12:
    if ( !Min || (*(_BYTE *)(Min + 16) & 1) == 0 )
      break;
    *(_BYTE *)&Parent->0 &= ~1u;
    Node = v13;
    *(_BYTE *)(Min + 16) &= ~1u;
    LOBYTE(Min) = v13->ParentValue;
    Parent = (PRTL_BALANCED_NODE)(v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !Parent )
        return Min;
      Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v13 ^ (unsigned __int64)Parent);
    }
    if ( Parent )
    {
      v13->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(Min | 1);
      v12 = Tree->0;
      Min = (unsigned __int64)Parent->Children[0];
      if ( (*(_BYTE *)&v12 & 1) != 0 && Min )
        Min ^= (unsigned __int64)Parent;
      v5 = v13 != (_RTL_BALANCED_NODE *)Min;
      if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
        continue;
    }
    return Min;
  }
  if ( v5 == v19 )
    goto LABEL_25;
  v34 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v35 = *(_BYTE *)&v12 & 1;
  if ( v35 && v34 )
    v34 ^= (unsigned __int64)Node;
  if ( (PRTL_BALANCED_NODE)v34 != Parent )
    goto LABEL_82;
  v36 = (unsigned __int64)Parent->Children[v18];
  if ( v35 && v36 )
    v36 ^= (unsigned __int64)Parent;
  if ( (PRTL_BALANCED_NODE)v36 != Node )
    goto LABEL_82;
  v37 = (unsigned __int64)v13->Children[v19];
  if ( v35 && v37 )
    v37 ^= (unsigned __int64)v13;
  if ( (PRTL_BALANCED_NODE)v37 != Parent )
    goto LABEL_82;
  v38 = &Parent->16;
  v39 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 && v39 )
    v39 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v39 != v13 )
    goto LABEL_82;
  v54 = v16;
  v40 = (unsigned __int64)Node ^ v16;
  v41 = &Node->Children[v19];
  if ( !v35 )
  {
    v13->Children[v19] = Node;
    Node->ParentValue &= 3uLL;
    Node->ParentValue |= (unsigned __int64)v13;
    v42 = (unsigned __int64)*v41;
    goto LABEL_57;
  }
  v13->Children[v19] = (_RTL_BALANCED_NODE *)v40;
  Node->ParentValue &= 3uLL;
  Node->ParentValue |= v40;
  v42 = (unsigned __int64)*v41;
  if ( *v41 )
  {
    v42 ^= (unsigned __int64)Node;
    v54 = v16;
LABEL_57:
    if ( v42 )
    {
      v50 = *(_QWORD *)(v42 + 16);
      v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v35 && v51 )
        v51 ^= v42;
      if ( (PRTL_BALANCED_NODE)v51 == Node )
      {
        v52 = (unsigned __int64)Parent;
        if ( v35 )
          v52 = (unsigned __int64)Parent ^ v42;
        *(_QWORD *)(v42 + 16) = v52 | v50 & 3;
        v16 = v54;
        goto LABEL_58;
      }
      goto LABEL_82;
    }
  }
LABEL_58:
  if ( v35 && v42 )
  {
    Parent->Children[v20] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v42);
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
LABEL_111:
    *v41 = (_RTL_BALANCED_NODE *)v43;
  }
  else
  {
    Parent->Children[v18] = (_RTL_BALANCED_NODE *)v42;
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    if ( v35 )
      goto LABEL_111;
    *v41 = Parent;
    v43 = (unsigned __int64)Node;
  }
  v38->ParentValue &= 3uLL;
  Parent = Node;
  v38->ParentValue |= v43;
LABEL_25:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)Tree;
    else
      Root = 0LL;
  }
  v23 = &Parent->16;
  v24 = !v17;
  v25 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v26 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v25 )
    v25 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v25 != v13 )
    goto LABEL_82;
  v27 = &v13->Children[!v24];
  v28 = (unsigned __int64)*v27;
  if ( ((__int64)Tree->Min & 1) != 0 && v28 )
    v28 ^= (unsigned __int64)v13;
  if ( (PRTL_BALANCED_NODE)v28 != Parent )
    goto LABEL_82;
  v29 = v13->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_31;
  if ( !v29 )
    goto LABEL_80;
  v29 ^= (unsigned __int64)v13;
LABEL_31:
  if ( !v29 )
  {
LABEL_80:
    if ( (_RTL_BALANCED_NODE *)Root == v13 )
    {
      Root = (unsigned __int64)Parent;
      goto LABEL_37;
    }
    goto LABEL_82;
  }
  v30 = *(_QWORD *)(v29 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v30 )
    v30 ^= v29;
  if ( (_RTL_BALANCED_NODE *)v30 == v13 )
  {
    v31 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v31 = (unsigned __int64)Parent ^ v29;
    *(_QWORD *)(v29 + 8) = v31;
    goto LABEL_37;
  }
  v47 = *(_QWORD *)v29;
  if ( ((__int64)Tree->Min & 1) != 0 && v47 )
    v47 ^= v29;
  if ( (_RTL_BALANCED_NODE *)v47 != v13 )
LABEL_82:
    __fastfail(0x1Du);
  v48 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v48 = (unsigned __int64)Parent ^ v29;
  *(_QWORD *)v29 = v48;
LABEL_37:
  if ( v26 && v29 )
  {
    v23->ParentValue &= 3uLL;
    v32 = &Parent->Children[v24];
    v23->ParentValue |= (unsigned __int64)Parent ^ v29;
    v33 = (unsigned __int64)*v32;
LABEL_127:
    if ( v33 )
    {
      v33 ^= (unsigned __int64)Parent;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
  v23->ParentValue &= 3uLL;
  v32 = &Parent->Children[v24];
  v23->ParentValue |= v29;
  v33 = (unsigned __int64)*v32;
  if ( v26 )
    goto LABEL_127;
LABEL_39:
  if ( v33 )
  {
    v44 = *(_QWORD *)(v33 + 16);
    v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v26 && v45 )
      v45 ^= v33;
    if ( (PRTL_BALANCED_NODE)v45 == Parent )
    {
      v46 = (unsigned __int64)v13;
      if ( v26 )
        v46 = (unsigned __int64)v13 ^ v33;
      *(_QWORD *)(v33 + 16) = v46 | v44 & 3;
      goto LABEL_40;
    }
    goto LABEL_82;
  }
LABEL_40:
  if ( v26 && v33 )
  {
    *v27 = (_RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ v33);
    Min = v16 ^ (unsigned __int64)Parent;
LABEL_133:
    *v32 = (_RTL_BALANCED_NODE *)Min;
  }
  else
  {
    *v27 = (_RTL_BALANCED_NODE *)v33;
    Min = v16 ^ (unsigned __int64)Parent;
    if ( v26 )
      goto LABEL_133;
    *v32 = v13;
    Min = (unsigned __int64)Parent;
  }
  v13->ParentValue &= 3uLL;
  v13->ParentValue |= Min;
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
  *(_BYTE *)&v13->0 |= 1u;
  *(_BYTE *)&v23->0 &= ~1u;
  return Min;
}
