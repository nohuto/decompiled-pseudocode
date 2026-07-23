/*
 * XREFs of RtlRbRemoveNode @ 0x14034D8D0
 * Callers:
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14023A9D0 @ 0x14023A9D0 (sub_14023A9D0.c)
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     sub_14023DB74 @ 0x14023DB74 (sub_14023DB74.c)
 *     sub_14024F74C @ 0x14024F74C (sub_14024F74C.c)
 *     sub_14025EDC8 @ 0x14025EDC8 (sub_14025EDC8.c)
 *     sub_14025FB48 @ 0x14025FB48 (sub_14025FB48.c)
 *     sub_1402E22B0 @ 0x1402E22B0 (sub_1402E22B0.c)
 *     sub_1402E2738 @ 0x1402E2738 (sub_1402E2738.c)
 *     sub_1402F2AD0 @ 0x1402F2AD0 (sub_1402F2AD0.c)
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034D5C0 @ 0x14034D5C0 (sub_14034D5C0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_1403513D8 @ 0x1403513D8 (sub_1403513D8.c)
 *     sub_14035A364 @ 0x14035A364 (sub_14035A364.c)
 *     sub_14035A718 @ 0x14035A718 (sub_14035A718.c)
 *     sub_14036E090 @ 0x14036E090 (sub_14036E090.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 *     sub_14051253C @ 0x14051253C (sub_14051253C.c)
 *     sub_1405B1910 @ 0x1405B1910 (sub_1405B1910.c)
 *     sub_1405E10BC @ 0x1405E10BC (sub_1405E10BC.c)
 *     RtlRemovePointerMapping @ 0x1405E7870 (RtlRemovePointerMapping.c)
 *     sub_1406297E0 @ 0x1406297E0 (sub_1406297E0.c)
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_1407973D0 @ 0x1407973D0 (sub_1407973D0.c)
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 *     sub_14091A000 @ 0x14091A000 (sub_14091A000.c)
 *     sub_1409EB970 @ 0x1409EB970 (sub_1409EB970.c)
 *     sub_1409EBDD0 @ 0x1409EBDD0 (sub_1409EBDD0.c)
 *     sub_140B1B784 @ 0x140B1B784 (sub_140B1B784.c)
 *     sub_140B1B910 @ 0x140B1B910 (sub_140B1B910.c)
 *     sub_140B2920C @ 0x140B2920C (sub_140B2920C.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  _RTL_BALANCED_NODE *v7; // rdi
  char v8; // r10
  unsigned __int64 v9; // rcx
  _RTL_BALANCED_NODE *v10; // r11
  PRTL_BALANCED_NODE v11; // rsi
  unsigned __int64 v12; // rax
  _BOOL8 v13; // rbp
  ULONG_PTR ParentValue; // r9
  char v15; // r9
  unsigned __int64 Min; // rax
  char v17; // cl
  _RTL_BALANCED_NODE *v18; // r14
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 *p_ParentValue; // r10
  _RTL_BALANCED_NODE *v23; // rax
  char v24; // cl
  _RTL_BALANCED_NODE *v25; // rax
  char v26; // al
  unsigned __int64 Root; // rcx
  char v28; // cl
  _RTL_BALANCED_NODE *v29; // rcx
  _RTL_BALANCED_NODE *v30; // rcx
  ULONG_PTR v31; // r10
  unsigned __int64 v32; // rcx
  char v33; // r14
  unsigned __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  unsigned __int64 v36; // rax
  char v37; // dl
  bool v38; // zf
  unsigned __int64 v39; // rdx
  _RTL_BALANCED_NODE *v40; // rax
  char v41; // cl
  unsigned __int64 v42; // rax
  char v43; // cl
  unsigned __int64 v44; // r10
  ULONG_PTR v45; // rax
  ULONG_PTR v46; // rcx
  ULONG_PTR v47; // rcx
  char v48; // r10
  PRTL_BALANCED_NODE v49; // r15
  __int64 v50; // r14
  _RTL_BALANCED_NODE **v51; // r14
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _RTL_BALANCED_NODE *v54; // rax
  unsigned __int64 v55; // rax
  PRTL_BALANCED_NODE v56; // rcx
  _RTL_BALANCED_NODE *v57; // rax
  char v58; // cl
  char v59; // cl
  _RTL_BALANCED_NODE *v60; // r9
  ULONG_PTR *v61; // r10
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  int v64; // ecx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  _RTL_BALANCED_NODE **v69; // r9
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rax
  int v75; // ecx
  unsigned __int64 v76; // r9
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  _RTL_BALANCED_NODE **v79; // r15
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r9
  ULONG_PTR v82; // rsi
  unsigned __int64 v83; // rbp
  _RTL_BALANCED_NODE *v84; // r10
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  int v87; // ecx
  _RTL_BALANCED_NODE **v88; // r15
  _RTL_BALANCED_NODE *v89; // rax
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rsi
  _RTL_BALANCED_NODE **v93; // rsi
  _RTL_BALANCED_NODE *v94; // rax
  unsigned __int64 v95; // r9
  ULONG_PTR v96; // rax
  unsigned __int64 v97; // rax
  ULONG_PTR v98; // rsi
  unsigned __int64 v99; // r9
  unsigned __int64 v100; // rax
  ULONG_PTR v101; // r14
  unsigned __int64 v102; // r9
  PRTL_BALANCED_NODE v103; // r10
  unsigned __int64 v104; // rax
  _RTL_BALANCED_NODE *v105; // rax
  __int64 v106; // r14
  unsigned __int64 v107; // rcx
  ULONG_PTR v108; // rax

  v4 = (unsigned __int64)Node->Children[0];
  if ( ((__int64)Tree->Min & 1) != 0 && v4 )
  {
    v5 = (unsigned __int64)Node->Children[1];
    v4 ^= (unsigned __int64)Node;
  }
  else
  {
    v5 = (unsigned __int64)Node->Children[1];
    if ( ((__int64)Tree->Min & 1) == 0 )
      goto LABEL_3;
  }
  if ( v5 )
    v5 ^= (unsigned __int64)Node;
LABEL_3:
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = (__int64)Tree->Min & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v8 && v10 )
      v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v10);
    v11 = Node;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      Min = (unsigned __int64)Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( (Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root == Node )
      {
        if ( (Min & 1) != 0 )
        {
          v107 = 0LL;
          LOBYTE(Min) = (unsigned __int8)Tree ^ v6;
          if ( v6 )
            v107 = (unsigned __int64)Tree ^ v6;
          Tree->Min = (PRTL_BALANCED_NODE)v107;
          v28 = v107 | 1;
          LOBYTE(Tree->Min) = v28;
        }
        else
        {
          Tree->Min = (PRTL_BALANCED_NODE)v6;
          v28 = v6;
        }
        if ( (v28 & 1) != 0 )
        {
          LOBYTE(Min) = (unsigned __int8)Tree ^ v6;
          if ( v6 )
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v6);
        }
        else
        {
          v7 = (_RTL_BALANCED_NODE *)v6;
        }
        goto LABEL_33;
      }
      goto LABEL_323;
    }
    v12 = (unsigned __int64)v10->Children[1];
    if ( v8 && v12 )
      v12 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v12 == Node )
    {
      LODWORD(v13) = 1;
    }
    else
    {
      v55 = (unsigned __int64)v10->Children[0];
      if ( v8 && v55 )
        v55 ^= (unsigned __int64)v10;
      if ( (PRTL_BALANCED_NODE)v55 != Node )
        goto LABEL_323;
      v56 = Tree->Min;
      LODWORD(v13) = 0;
      if ( ((unsigned __int8)v56 & 1) != 0 )
      {
        if ( v56 == (PRTL_BALANCED_NODE)1 )
        {
          v57 = 0LL;
          LOBYTE(v56) = 1;
        }
        else
        {
          v57 = (_RTL_BALANCED_NODE *)((unsigned __int64)v56 ^ ((unsigned __int64)Tree | 1));
        }
      }
      else
      {
        v57 = Tree->Min;
      }
      if ( v57 == Node )
      {
        v58 = (unsigned __int8)v56 & 1;
        if ( v6 )
        {
          if ( v58 )
          {
            Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ v6);
            LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ v6 | 1;
          }
          else
          {
            Tree->Min = (PRTL_BALANCED_NODE)v6;
          }
        }
        else if ( v58 )
        {
          Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ (unsigned __int64)v10);
          LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ (unsigned __int8)v10 | 1;
        }
        else
        {
          Tree->Min = v10;
        }
      }
    }
    LOBYTE(ParentValue) = Node->16;
    goto LABEL_14;
  }
  v29 = *(_RTL_BALANCED_NODE **)v5;
  v11 = (PRTL_BALANCED_NODE)v5;
  v10 = (_RTL_BALANCED_NODE *)v5;
  LODWORD(v13) = 1;
  if ( *(_QWORD *)v5 )
  {
    LODWORD(v13) = 0;
    do
    {
      v10 = v11;
      if ( v8 && v29 )
        v11 = (PRTL_BALANCED_NODE)((unsigned __int64)v29 ^ (unsigned __int64)v11);
      else
        v11 = v29;
      v29 = v11->Children[0];
    }
    while ( v11->Children[0] );
  }
  if ( v8 && v4 )
    v30 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v11);
  else
    v30 = (_RTL_BALANCED_NODE *)v4;
  v11->Children[0] = v30;
  v31 = *(_QWORD *)(v4 + 16);
  v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
  v33 = (__int64)Tree->Min & 1;
  if ( v33 && v32 )
    v32 ^= v4;
  if ( (PRTL_BALANCED_NODE)v32 != Node )
    goto LABEL_323;
  v34 = (unsigned __int64)v11;
  if ( v33 )
    v34 = v4 ^ (unsigned __int64)v11;
  *(_QWORD *)(v4 + 16) = v34 | v31 & 3;
  v35 = *(_QWORD *)(v5 + 16);
  v36 = v35 & 0xFFFFFFFFFFFFFFFCuLL;
  v37 = (__int64)Tree->Min & 1;
  if ( v37 && v36 )
    v36 ^= v5;
  if ( (PRTL_BALANCED_NODE)v36 != Node )
    goto LABEL_323;
  v38 = v37 == 0;
  v39 = (unsigned __int64)v11;
  if ( !v38 )
    v39 = v5 ^ (unsigned __int64)v11;
  v40 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ v5);
  *(_QWORD *)(v5 + 16) = v39 | v35 & 3;
  v6 = (unsigned __int64)v11->Children[1];
  v41 = (__int64)Tree->Min & 1;
  if ( v41 && v6 )
  {
    v6 ^= (unsigned __int64)v11;
  }
  else if ( !v41 )
  {
    v40 = (_RTL_BALANCED_NODE *)v5;
  }
  ParentValue = v11->ParentValue;
  v11->Children[1] = v40;
  v42 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v43 = (__int64)Tree->Min & 1;
  if ( v43 && v42 )
    v44 = (unsigned __int64)v11 ^ v42;
  else
    v44 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v44 != v10 )
  {
    if ( v43 )
    {
      if ( !v42 )
        goto LABEL_233;
      v42 ^= (unsigned __int64)v11;
    }
    if ( v42 )
      goto LABEL_323;
LABEL_233:
    if ( v11 != v10 )
      goto LABEL_323;
  }
  v45 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v43 )
  {
    if ( v45 )
      v45 ^= (unsigned __int64)Node;
    if ( v45 )
      v45 ^= (unsigned __int64)v11;
  }
  v46 = v45 | ParentValue & 3;
  v11->ParentValue = v46;
  *(_BYTE *)&v11->16 = v46 ^ (v46 ^ *(_BYTE *)&Node->16) & 1;
  v47 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v47 )
  {
    v103 = Tree->Min;
    v104 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v103 & 1) != 0 )
    {
      if ( v104 )
        v104 ^= (unsigned __int64)Tree;
      else
        v104 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v104 != Node )
      goto LABEL_323;
    v105 = v11;
    if ( ((unsigned __int8)v103 & 1) != 0 )
      v105 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
    Tree->Root = v105;
    goto LABEL_14;
  }
  v48 = (__int64)Tree->Min & 1;
  if ( !v48 )
  {
    v49 = *(PRTL_BALANCED_NODE *)(v47 + 8);
    goto LABEL_64;
  }
  v47 ^= (unsigned __int64)Node;
  v49 = *(PRTL_BALANCED_NODE *)(v47 + 8);
  if ( !v49 )
  {
LABEL_64:
    v50 = 0LL;
    if ( v49 == Node )
      v50 = 8LL;
    v51 = (_RTL_BALANCED_NODE **)(v47 + v50);
    v52 = (unsigned __int64)*v51;
    if ( !v48 )
      goto LABEL_67;
    goto LABEL_196;
  }
  v106 = 0LL;
  if ( (PRTL_BALANCED_NODE)(v47 ^ (unsigned __int64)v49) == Node )
    v106 = 8LL;
  v51 = (_RTL_BALANCED_NODE **)(v47 + v106);
  v52 = (unsigned __int64)*v51;
LABEL_196:
  if ( v52 )
    v52 ^= v47;
LABEL_67:
  if ( (PRTL_BALANCED_NODE)v52 != Node )
    goto LABEL_323;
  v53 = (unsigned __int64)v11 ^ v47;
  v54 = v11;
  if ( v48 )
    v54 = (_RTL_BALANCED_NODE *)v53;
  *v51 = v54;
LABEL_14:
  v15 = ParentValue & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v6 )
  {
    v10->Children[v13] = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
    goto LABEL_79;
  }
  LOBYTE(Min) = v13;
  v10->Children[v13] = (_RTL_BALANCED_NODE *)v6;
  if ( v6 )
  {
LABEL_79:
    Min = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v59 = (__int64)Tree->Min & 1;
    if ( v59 && Min )
      Min ^= v6;
    if ( (PRTL_BALANCED_NODE)Min == v11 )
    {
      if ( v59 && v10 )
        v10 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
      *(_QWORD *)(v6 + 16) = v10;
      return Min;
    }
LABEL_323:
    __fastfail(0x1Du);
  }
  if ( v15 )
    return Min;
  v17 = (char)Tree->Min;
  while ( 1 )
  {
    v18 = v10;
    v19 = !v13;
    v20 = (unsigned __int64)v10->Children[v19];
    if ( (v17 & 1) != 0 && v20 )
      v21 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v20);
    else
      v21 = v10->Children[v19];
    p_ParentValue = &v21->ParentValue;
    if ( (*(_BYTE *)&v21->16 & 1) == 0 )
      goto LABEL_21;
    v73 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v73 )
        v73 ^= (unsigned __int64)Tree;
      else
        v73 = 0LL;
    }
    v74 = *p_ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v75 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v74 )
      v74 ^= (unsigned __int64)v21;
    if ( (_RTL_BALANCED_NODE *)v74 != v10 )
      goto LABEL_323;
    if ( ((__int64)Tree->Min & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)v10;
    if ( (_RTL_BALANCED_NODE *)v20 != v21 )
      goto LABEL_323;
    v76 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v76 )
      {
LABEL_202:
        if ( (_RTL_BALANCED_NODE *)v73 != v10 )
          goto LABEL_323;
        v73 = (unsigned __int64)v21;
        goto LABEL_130;
      }
      v76 ^= (unsigned __int64)v10;
    }
    if ( !v76 )
      goto LABEL_202;
    v77 = *(_QWORD *)(v76 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v77 )
      v77 ^= v76;
    if ( (_RTL_BALANCED_NODE *)v77 == v10 )
    {
      v78 = ((__int64)Tree->Min & 1) != 0 ? (unsigned __int64)v21 ^ v76 : (unsigned __int64)v21;
      *(_QWORD *)(v76 + 8) = v78;
    }
    else
    {
      v100 = *(_QWORD *)v76;
      if ( ((__int64)Tree->Min & 1) != 0 && v100 )
        v100 ^= v76;
      if ( (_RTL_BALANCED_NODE *)v100 != v10 )
        goto LABEL_323;
      *(_QWORD *)v76 = ((__int64)Tree->Min & 1) != 0 ? (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ v76) : v21;
    }
LABEL_130:
    if ( v75 && v76 )
    {
      v79 = &v21->Children[v13];
      *p_ParentValue = *(_DWORD *)p_ParentValue & 3 | (unsigned __int64)v21 ^ v76;
      v80 = (unsigned __int64)*v79;
    }
    else
    {
      v79 = &v21->Children[v13];
      *p_ParentValue = v76 | *(_DWORD *)p_ParentValue & 3;
      v80 = (unsigned __int64)*v79;
      if ( !v75 )
        goto LABEL_132;
    }
    if ( !v80 )
      goto LABEL_133;
    v80 ^= (unsigned __int64)v21;
LABEL_132:
    if ( v80 )
    {
      v98 = *(_QWORD *)(v80 + 16);
      v99 = v98 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v75 && v99 )
        v99 ^= v80;
      if ( (_RTL_BALANCED_NODE *)v99 != v21 )
        goto LABEL_323;
      if ( v75 )
        *(_QWORD *)(v80 + 16) = (unsigned __int64)v10 ^ v80 | v98 & 3;
      else
        *(_QWORD *)(v80 + 16) = (unsigned __int64)v10 | v98 & 3;
    }
LABEL_133:
    if ( v75 && v80 )
    {
      v10->Children[v19] = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v80);
      v81 = (unsigned __int64)v10 ^ (unsigned __int64)v21;
LABEL_266:
      *v79 = (_RTL_BALANCED_NODE *)v81;
      goto LABEL_136;
    }
    v10->Children[v19] = (_RTL_BALANCED_NODE *)v80;
    v81 = (unsigned __int64)v10 ^ (unsigned __int64)v21;
    if ( v75 )
      goto LABEL_266;
    *v79 = v10;
    v81 = (unsigned __int64)v21;
LABEL_136:
    v10->ParentValue = v81 | *(_DWORD *)&v10->16 & 3;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v73 )
        v73 ^= (unsigned __int64)Tree;
      else
        v73 = 0LL;
    }
    Tree->Root = (PRTL_BALANCED_NODE)v73;
    *(_BYTE *)p_ParentValue &= ~1u;
    *(_BYTE *)&v10->16 |= 1u;
    v17 = (char)Tree->Min;
    v21 = v10->Children[v19];
    if ( (v17 & 1) != 0 && v21 )
      v21 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ (unsigned __int64)v21);
LABEL_21:
    v23 = v21->Children[0];
    v24 = v17 & 1;
    if ( v21->Children[0] )
    {
      if ( v24 )
        v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v23);
      if ( (*(_BYTE *)&v23->16 & 1) != 0 )
        break;
    }
    v25 = v21->Children[1];
    if ( v25 )
    {
      if ( v24 )
        v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v25);
      if ( (*(_BYTE *)&v25->16 & 1) != 0 )
        break;
    }
    v26 = (char)v10->16;
    if ( (v26 & 1) != 0 )
    {
      LOBYTE(Min) = v26 & 0xFE;
      *(_BYTE *)&v10->16 = Min;
      *(_BYTE *)&v21->16 |= 1u;
      return Min;
    }
    *(_BYTE *)&v21->16 |= 1u;
    v17 = (char)Tree->Min;
    Min = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 1) != 0 && Min )
      v10 = (_RTL_BALANCED_NODE *)(Min ^ (unsigned __int64)v10);
    else
      v10 = (_RTL_BALANCED_NODE *)(v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v10 )
      return Min;
    v72 = (unsigned __int64)v10->Children[1];
    if ( (v17 & 1) != 0 && v72 )
      v72 ^= (unsigned __int64)v10;
    v13 = v72 == (_QWORD)v18;
  }
  v60 = v21->Children[v19];
  if ( v24 )
  {
    if ( v60 )
    {
      v60 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v60);
      goto LABEL_91;
    }
LABEL_146:
    v84 = v21->Children[v13];
    if ( v24 && v84 )
      v84 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v84);
    *(_BYTE *)&v84->16 &= ~1u;
    v85 = (unsigned int)v13 ^ 1;
    v86 = v84->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v87 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v86 )
      v86 ^= (unsigned __int64)v84;
    if ( (_RTL_BALANCED_NODE *)v86 != v21 )
      goto LABEL_323;
    v88 = &v21->Children[v13];
    v89 = *v88;
    if ( ((__int64)Tree->Min & 1) != 0 && v89 )
      v89 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v89);
    if ( v89 != v84 )
      goto LABEL_323;
    v90 = (unsigned __int64)v10->Children[v85];
    if ( ((__int64)Tree->Min & 1) != 0 && v90 )
      v90 ^= (unsigned __int64)v10;
    if ( (_RTL_BALANCED_NODE *)v90 != v21 )
      goto LABEL_323;
    v91 = v21->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 && v91 )
      v91 ^= (unsigned __int64)v21;
    if ( (_RTL_BALANCED_NODE *)v91 != v10 )
      goto LABEL_323;
    v92 = (unsigned __int64)v10 ^ (unsigned __int64)v84;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      v10->Children[v85] = (_RTL_BALANCED_NODE *)v92;
      if ( v10 )
      {
        v108 = v92 | *(_DWORD *)&v84->16 & 3;
        v93 = &v84->Children[v85];
        v84->ParentValue = v108;
        v94 = *v93;
LABEL_287:
        if ( !v94 )
          goto LABEL_159;
        v94 = (_RTL_BALANCED_NODE *)((unsigned __int64)v84 ^ (unsigned __int64)v94);
LABEL_158:
        if ( v94 )
        {
          v101 = v94->ParentValue;
          v102 = v101 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v87 && v102 )
            v102 ^= (unsigned __int64)v94;
          if ( (_RTL_BALANCED_NODE *)v102 != v84 )
            goto LABEL_323;
          if ( v87 )
            v94->ParentValue = (unsigned __int64)v21 ^ (unsigned __int64)v94 | v101 & 3;
          else
            v94->ParentValue = (unsigned __int64)v21 | v101 & 3;
        }
LABEL_159:
        if ( v87 && v94 )
        {
          *v88 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v94);
          v95 = (unsigned __int64)v84 ^ (unsigned __int64)v21;
        }
        else
        {
          *v88 = v94;
          v95 = (unsigned __int64)v84 ^ (unsigned __int64)v21;
          if ( !v87 )
          {
            *v93 = v21;
            v95 = (unsigned __int64)v84;
LABEL_162:
            v96 = v95 | *(_DWORD *)&v21->16 & 3;
            v60 = v21;
            v21->ParentValue = v96;
            v21 = v84;
            goto LABEL_93;
          }
        }
        *v93 = (_RTL_BALANCED_NODE *)v95;
        goto LABEL_162;
      }
    }
    else
    {
      v10->Children[v85] = v84;
    }
    v93 = &v84->Children[v85];
    v84->ParentValue = (unsigned __int64)v10 | *(_DWORD *)&v84->16 & 3;
    v94 = *v93;
    if ( !v87 )
      goto LABEL_158;
    goto LABEL_287;
  }
LABEL_91:
  if ( !v60 || (*(_BYTE *)&v60->16 & 1) == 0 )
    goto LABEL_146;
LABEL_93:
  v61 = &v10->ParentValue;
  *(_BYTE *)&v21->16 ^= (*(_BYTE *)&v21->16 ^ *(_BYTE *)&v10->16) & 1;
  *(_BYTE *)&v10->16 &= ~1u;
  *(_BYTE *)&v60->16 &= ~1u;
  v62 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v62 )
      v62 ^= (unsigned __int64)Tree;
    else
      v62 = 0LL;
  }
  v63 = v21->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v64 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v63 )
    v63 ^= (unsigned __int64)v21;
  if ( (_RTL_BALANCED_NODE *)v63 != v10 )
    goto LABEL_323;
  v65 = (unsigned __int64)v10->Children[v19];
  if ( ((__int64)Tree->Min & 1) != 0 && v65 )
    v65 ^= (unsigned __int64)v10;
  if ( (_RTL_BALANCED_NODE *)v65 != v21 )
    goto LABEL_323;
  v66 = *v61 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_99;
  if ( !v66 )
    goto LABEL_190;
  v66 ^= (unsigned __int64)v10;
LABEL_99:
  if ( !v66 )
  {
LABEL_190:
    if ( (_RTL_BALANCED_NODE *)v62 == v10 )
    {
      v62 = (unsigned __int64)v21;
      goto LABEL_105;
    }
    goto LABEL_323;
  }
  v67 = *(_QWORD *)(v66 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v67 )
    v67 ^= v66;
  if ( (_RTL_BALANCED_NODE *)v67 != v10 )
  {
    v97 = *(_QWORD *)v66;
    if ( ((__int64)Tree->Min & 1) != 0 && v97 )
      v97 ^= v66;
    if ( (_RTL_BALANCED_NODE *)v97 == v10 )
    {
      if ( ((__int64)Tree->Min & 1) != 0 )
        *(_QWORD *)v66 = (unsigned __int64)v21 ^ v66;
      else
        *(_QWORD *)v66 = v21;
      goto LABEL_105;
    }
    goto LABEL_323;
  }
  if ( ((__int64)Tree->Min & 1) != 0 )
    v68 = (unsigned __int64)v21 ^ v66;
  else
    v68 = (unsigned __int64)v21;
  *(_QWORD *)(v66 + 8) = v68;
LABEL_105:
  if ( v64 && v66 )
  {
    v21->ParentValue = *(_DWORD *)&v21->16 & 3 | (unsigned __int64)v21 ^ v66;
    v69 = &v21->Children[v13];
    v70 = (unsigned __int64)*v69;
LABEL_241:
    if ( v70 )
    {
      v70 ^= (unsigned __int64)v21;
      goto LABEL_107;
    }
    goto LABEL_108;
  }
  v21->ParentValue = v66 | *(_DWORD *)&v21->16 & 3;
  v69 = &v21->Children[v13];
  v70 = (unsigned __int64)*v69;
  if ( v64 )
    goto LABEL_241;
LABEL_107:
  if ( v70 )
  {
    v82 = *(_QWORD *)(v70 + 16);
    v83 = v82 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v64 && v83 )
      v83 ^= v70;
    if ( (_RTL_BALANCED_NODE *)v83 == v21 )
    {
      if ( v64 )
        *(_QWORD *)(v70 + 16) = (unsigned __int64)v10 ^ v70 | v82 & 3;
      else
        *(_QWORD *)(v70 + 16) = (unsigned __int64)v10 | v82 & 3;
      goto LABEL_108;
    }
    goto LABEL_323;
  }
LABEL_108:
  if ( v64 && v70 )
  {
    v10->Children[v19] = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v70);
    v71 = (unsigned __int64)v21 ^ (unsigned __int64)v10;
LABEL_255:
    *v69 = (_RTL_BALANCED_NODE *)v71;
  }
  else
  {
    v10->Children[v19] = (_RTL_BALANCED_NODE *)v70;
    v71 = (unsigned __int64)v21 ^ (unsigned __int64)v10;
    if ( v64 )
      goto LABEL_255;
    *v69 = v10;
    v71 = (unsigned __int64)v21;
  }
  Min = v71 | *(_DWORD *)v61 & 3;
  *v61 = Min;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v62 )
      v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v62);
  }
  else
  {
    v7 = (_RTL_BALANCED_NODE *)v62;
  }
LABEL_33:
  Tree->Root = v7;
  return Min;
}
