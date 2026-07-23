/*
 * XREFs of RtlRbInsertNodeEx @ 0x14034E6B0
 * Callers:
 *     sub_140210AD0 @ 0x140210AD0 (sub_140210AD0.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14023DADC @ 0x14023DADC (sub_14023DADC.c)
 *     sub_14024F7C8 @ 0x14024F7C8 (sub_14024F7C8.c)
 *     sub_14025EDC8 @ 0x14025EDC8 (sub_14025EDC8.c)
 *     sub_14025F1A4 @ 0x14025F1A4 (sub_14025F1A4.c)
 *     sub_14025FB48 @ 0x14025FB48 (sub_14025FB48.c)
 *     sub_1402E2738 @ 0x1402E2738 (sub_1402E2738.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_14034F9E0 @ 0x14034F9E0 (sub_14034F9E0.c)
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_140351500 @ 0x140351500 (sub_140351500.c)
 *     sub_140353A00 @ 0x140353A00 (sub_140353A00.c)
 *     sub_14035A364 @ 0x14035A364 (sub_14035A364.c)
 *     sub_14035A718 @ 0x14035A718 (sub_14035A718.c)
 *     sub_1403661D0 @ 0x1403661D0 (sub_1403661D0.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 *     sub_1403B27B8 @ 0x1403B27B8 (sub_1403B27B8.c)
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_14059A35C @ 0x14059A35C (sub_14059A35C.c)
 *     sub_1405E0E68 @ 0x1405E0E68 (sub_1405E0E68.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E7140 (RtlCompareExchangePointerMapping.c)
 *     sub_140629628 @ 0x140629628 (sub_140629628.c)
 *     sub_140629E84 @ 0x140629E84 (sub_140629E84.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_14068D778 @ 0x14068D778 (sub_14068D778.c)
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 *     sub_140962F40 @ 0x140962F40 (sub_140962F40.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_140B1D48C @ 0x140B1D48C (sub_140B1D48C.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B2920C @ 0x140B2920C (sub_140B2920C.c)
 *     sub_140B2B244 @ 0x140B2B244 (sub_140B2B244.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int8 v4; // r11
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  char v10; // r14
  _RTL_BALANCED_NODE *v11; // r8
  char v12; // cl
  PRTL_BALANCED_NODE v13; // rdi
  ULONG_PTR v14; // rbx
  BOOL v15; // ebp
  _BOOL8 v16; // rsi
  unsigned int v17; // r15d
  _BOOL8 v18; // r13
  unsigned __int64 v19; // rdi
  unsigned __int64 Root; // r14
  _BOOL8 v21; // rbp
  ULONG_PTR v22; // rax
  int v23; // r9d
  _RTL_BALANCED_NODE **v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  _RTL_BALANCED_NODE **v29; // rdi
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rbx
  _RTL_BALANCED_NODE *v32; // rcx
  ULONG_PTR v33; // rax
  int v34; // r11d
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  ULONG_PTR *p_ParentValue; // r14
  ULONG_PTR v39; // rax
  _RTL_BALANCED_NODE **v40; // r15
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  ULONG_PTR v49; // r12
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax

  v4 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  LOBYTE(Min) = (__int64)Tree->Min & 1;
  if ( !Parent )
  {
    v9 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)Min )
    {
      Tree->Root = (PRTL_BALANCED_NODE)v9;
      Tree->Min = (PRTL_BALANCED_NODE)v9;
      LOBYTE(Tree->Min) = v9 | 1;
    }
    else
    {
      Tree->Root = Node;
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  if ( !(_BYTE)Min )
    v7 = Node;
  Parent->Children[Right] = v7;
  v8 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v8 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  Node->ParentValue = v8 | 1;
  if ( Right )
    goto LABEL_7;
  Min = (unsigned __int64)Tree->Min;
  if ( (Min & 1) == 0 )
  {
    v32 = Tree->Min;
    goto LABEL_52;
  }
  if ( Min != 1 )
  {
    v32 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
LABEL_52:
    if ( Parent == v32 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        LOBYTE(Tree->Min) = Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
LABEL_7:
  if ( (*(_BYTE *)&Parent->16 & 1) == 0 )
    return Min;
  v10 = (char)Tree->Min;
  while ( 1 )
  {
    v11 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v12 = v10 & 1;
    if ( (v10 & 1) != 0 && v11 )
    {
      v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v11);
      v14 = (ULONG_PTR)v11;
      v13 = v11->Children[0];
    }
    else
    {
      v13 = v11->Children[0];
      v14 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        goto LABEL_15;
    }
    if ( !v13 )
    {
LABEL_15:
      Min = v13 != Parent;
      v15 = v13 != Parent;
      v16 = v13 == Parent;
      v17 = v15;
      v18 = v16;
      v19 = (unsigned __int64)v11->Children[v16];
      if ( !v12 )
        goto LABEL_16;
      goto LABEL_27;
    }
    Min = ((unsigned __int64)v11 ^ (unsigned __int64)v13) != (_QWORD)Parent;
    v17 = ((unsigned __int64)v11 ^ (unsigned __int64)v13) != (_QWORD)Parent;
    v16 = ((unsigned __int64)v11 ^ (unsigned __int64)v13) == (_QWORD)Parent;
    v15 = v17;
    v18 = v16;
    v19 = *(_QWORD *)(v14 + 8 * v16);
LABEL_27:
    if ( !v19 )
      break;
    v19 ^= (unsigned __int64)v11;
LABEL_16:
    if ( !v19 || (*(_BYTE *)(v19 + 16) & 1) == 0 )
      break;
    *(_BYTE *)&Parent->16 &= ~1u;
    Node = v11;
    *(_BYTE *)(v19 + 16) &= ~1u;
    Parent = (PRTL_BALANCED_NODE)(v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !Parent )
        return Min;
      Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v11 ^ (unsigned __int64)Parent);
    }
    if ( Parent )
    {
      *(_BYTE *)&v11->16 = v11->ParentValue | 1;
      v10 = (char)Tree->Min;
      Min = (unsigned __int64)Parent->Children[0];
      if ( (v10 & 1) != 0 && Min )
        Min ^= (unsigned __int64)Parent;
      v4 = v11 != (_RTL_BALANCED_NODE *)Min;
      if ( (*(_BYTE *)&Parent->16 & 1) != 0 )
        continue;
    }
    return Min;
  }
  if ( v4 == v17 )
    goto LABEL_29;
  v33 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v34 = v10 & 1;
  if ( (v10 & 1) != 0 && v33 )
    v33 ^= (unsigned __int64)Node;
  if ( (PRTL_BALANCED_NODE)v33 != Parent )
    goto LABEL_135;
  v35 = (unsigned __int64)Parent->Children[v16];
  if ( (v10 & 1) != 0 && v35 )
    v35 ^= (unsigned __int64)Parent;
  if ( (PRTL_BALANCED_NODE)v35 != Node )
    goto LABEL_135;
  v36 = v17;
  v37 = (unsigned __int64)v11->Children[v17];
  if ( (v10 & 1) != 0 && v37 )
    v37 ^= (unsigned __int64)v11;
  if ( (PRTL_BALANCED_NODE)v37 != Parent )
    goto LABEL_135;
  p_ParentValue = &Parent->ParentValue;
  v39 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 && v39 )
    v39 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v39 != v11 )
    goto LABEL_135;
  v40 = &Node->Children[v17];
  v41 = (unsigned __int64)Node ^ v14;
  if ( !v34 )
  {
    v11->Children[v36] = Node;
    Node->ParentValue = (unsigned __int64)v11 | *(_DWORD *)&Node->16 & 3;
    v42 = (unsigned __int64)*v40;
    goto LABEL_65;
  }
  v11->Children[v36] = (_RTL_BALANCED_NODE *)v41;
  Node->ParentValue = v41 | *(_DWORD *)&Node->16 & 3;
  v42 = (unsigned __int64)*v40;
  if ( *v40 )
  {
    v42 ^= (unsigned __int64)Node;
LABEL_65:
    if ( v42 )
    {
      v49 = *(_QWORD *)(v42 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v34 && v50 )
        v50 ^= v42;
      if ( (PRTL_BALANCED_NODE)v50 == Node )
      {
        v51 = (unsigned __int64)Parent;
        if ( v34 )
          v51 = (unsigned __int64)Parent ^ v42;
        *(_QWORD *)(v42 + 16) = v51 | v49 & 3;
        goto LABEL_66;
      }
      goto LABEL_135;
    }
  }
LABEL_66:
  if ( v34 && v42 )
  {
    Parent->Children[v18] = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v42);
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
LABEL_115:
    *v40 = (_RTL_BALANCED_NODE *)v43;
    Parent = Node;
    *p_ParentValue = v43 | *(_DWORD *)p_ParentValue & 3;
  }
  else
  {
    Parent->Children[v16] = (_RTL_BALANCED_NODE *)v42;
    v43 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    if ( v34 )
      goto LABEL_115;
    *v40 = Parent;
    Parent = Node;
    *p_ParentValue = (unsigned __int64)Node | *(_DWORD *)p_ParentValue & 3;
  }
LABEL_29:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)Tree;
    else
      Root = 0LL;
  }
  v21 = !v15;
  v22 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v23 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v22 )
    v22 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v22 != v11 )
    goto LABEL_135;
  v24 = &v11->Children[!v21];
  v25 = (unsigned __int64)*v24;
  if ( ((__int64)Tree->Min & 1) != 0 && v25 )
    v25 ^= (unsigned __int64)v11;
  if ( (PRTL_BALANCED_NODE)v25 != Parent )
    goto LABEL_135;
  v26 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_35;
  if ( !v26 )
    goto LABEL_84;
  v26 ^= (unsigned __int64)v11;
LABEL_35:
  if ( !v26 )
  {
LABEL_84:
    if ( (_RTL_BALANCED_NODE *)Root == v11 )
    {
      Root = (unsigned __int64)Parent;
      goto LABEL_41;
    }
    goto LABEL_135;
  }
  v27 = *(_QWORD *)(v26 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v27 )
    v27 ^= v26;
  if ( (_RTL_BALANCED_NODE *)v27 == v11 )
  {
    v28 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v28 = (unsigned __int64)Parent ^ v26;
    *(_QWORD *)(v26 + 8) = v28;
    goto LABEL_41;
  }
  v47 = *(_QWORD *)v26;
  if ( ((__int64)Tree->Min & 1) != 0 && v47 )
    v47 ^= v26;
  if ( (_RTL_BALANCED_NODE *)v47 != v11 )
LABEL_135:
    __fastfail(0x1Du);
  v48 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v48 = (unsigned __int64)Parent ^ v26;
  *(_QWORD *)v26 = v48;
LABEL_41:
  if ( v23 && v26 )
  {
    v29 = &Parent->Children[v21];
    Parent->ParentValue = *(_DWORD *)&Parent->16 & 3 | (unsigned __int64)Parent ^ v26;
    v30 = (unsigned __int64)*v29;
LABEL_88:
    if ( v30 )
    {
      v30 ^= (unsigned __int64)Parent;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v29 = &Parent->Children[v21];
  Parent->ParentValue = v26 | *(_DWORD *)&Parent->16 & 3;
  v30 = (unsigned __int64)*v29;
  if ( v23 )
    goto LABEL_88;
LABEL_43:
  if ( v30 )
  {
    v44 = *(_QWORD *)(v30 + 16);
    v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v23 && v45 )
      v45 ^= v30;
    if ( (PRTL_BALANCED_NODE)v45 == Parent )
    {
      v46 = (unsigned __int64)v11;
      if ( v23 )
        v46 = (unsigned __int64)v11 ^ v30;
      *(_QWORD *)(v30 + 16) = v46 | v44 & 3;
      goto LABEL_44;
    }
    goto LABEL_135;
  }
LABEL_44:
  if ( v23 && v30 )
  {
    *v24 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ v30);
    v31 = (unsigned __int64)Parent ^ v14;
LABEL_97:
    *v29 = (_RTL_BALANCED_NODE *)v31;
  }
  else
  {
    v31 = (unsigned __int64)Parent ^ v14;
    *v24 = (_RTL_BALANCED_NODE *)v30;
    if ( v23 )
      goto LABEL_97;
    *v29 = v11;
    v31 = (unsigned __int64)Parent;
  }
  v11->ParentValue = v31 | *(_DWORD *)&v11->16 & 3;
  Min = Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    Min = (unsigned __int64)Tree ^ Root;
    if ( !Root )
      Min = 0LL;
  }
  Tree->Root = (PRTL_BALANCED_NODE)Min;
  *(_BYTE *)&v11->16 |= 1u;
  *(_BYTE *)&Parent->16 &= ~1u;
  return Min;
}
