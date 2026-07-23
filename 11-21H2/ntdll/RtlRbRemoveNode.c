/*
 * XREFs of RtlRbRemoveNode @ 0x18001A490
 * Callers:
 *     EtwpRemoveRegistrationFromTable @ 0x180006748 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180007B1C (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180016948 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsContextFree @ 0x180018CE0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18001C9FC (RtlpHpVsFreeChunkRemove.c)
 *     LdrpUnloadNode @ 0x1800526F0 (LdrpUnloadNode.c)
 *     RtlpHpVaMgrAlloc @ 0x180055CE8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x180056008 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005AF70 (RtlpDecRefWnfNameSubscription.c)
 *     RtlRemovePointerMapping @ 0x1801014B0 (RtlRemovePointerMapping.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  _RTL_BALANCED_NODE *v7; // rbp
  char v8; // r10
  unsigned __int64 v9; // rcx
  _RTL_BALANCED_NODE *v10; // r11
  PRTL_BALANCED_NODE v11; // rdi
  unsigned __int64 v12; // rax
  _BOOL8 v13; // rsi
  unsigned __int64 ParentValue; // r9
  char v15; // r9
  unsigned __int64 Min; // rax
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE *v18; // rax
  _RTL_BALANCED_NODE *v19; // rcx
  char v20; // al
  _RTL_BALANCED_NODE *v21; // rcx
  _RTL_BALANCED_NODE *v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  char v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rdx
  _RTL_BALANCED_NODE *v31; // rax
  char v32; // cl
  unsigned __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  char v39; // r10
  PRTL_BALANCED_NODE v40; // r15
  __int64 v41; // r14
  _RTL_BALANCED_NODE **v42; // r14
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  _RTL_BALANCED_NODE *v45; // rax
  $7D93978C745EB1C2D28075BAF55422B4 v46; // dl
  _RTL_BALANCED_NODE *v47; // r12
  __int64 v48; // r14
  unsigned __int64 v49; // rax
  _RTL_BALANCED_NODE *v50; // rcx
  $8168548DF821DDB6878269E7E8351651 *v51; // r8
  _RTL_BALANCED_NODE *v52; // rax
  char v53; // dl
  _RTL_BALANCED_NODE *v54; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v55; // al
  char v56; // cl
  _RTL_BALANCED_NODE *v57; // r9
  $8168548DF821DDB6878269E7E8351651 *v58; // r8
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // rax
  int v61; // edx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r9
  unsigned __int64 *v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 Root; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v69; // cl
  unsigned __int64 v70; // rax
  _RTL_BALANCED_NODE *v71; // r10
  unsigned __int64 v72; // rax
  _RTL_BALANCED_NODE *v73; // rax
  _RTL_BALANCED_NODE *v74; // rdx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r9
  int v77; // edx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // r9
  _RTL_BALANCED_NODE **v81; // r9
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  _RTL_BALANCED_NODE *v84; // rcx
  _RTL_BALANCED_NODE *v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  int v88; // edx
  unsigned __int64 *v89; // r15
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 *v94; // r9
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // r10
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // r9
  unsigned __int64 v101; // r9
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // r10
  unsigned __int64 v105; // r9
  unsigned __int64 v106; // r9
  __int64 v107; // rdi
  unsigned __int64 v108; // r10
  unsigned __int64 v109; // r10
  __int64 v110; // r14
  unsigned __int64 v111; // rcx
  bool v112; // zf

  v4 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v4 )
  {
    v5 = (unsigned __int64)Node->Children[1];
    v4 ^= (unsigned __int64)Node;
  }
  else
  {
    v5 = (unsigned __int64)Node->Children[1];
    if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
      goto LABEL_3;
  }
  if ( v5 )
    v5 ^= (unsigned __int64)Node;
LABEL_3:
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = *(_BYTE *)&Tree->0 & 1;
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
        if ( !Root )
          goto LABEL_195;
        Root ^= (unsigned __int64)Tree;
      }
      if ( (PRTL_BALANCED_NODE)Root == Node )
      {
        if ( (Min & 1) != 0 )
        {
          v111 = 0LL;
          LOBYTE(Min) = (unsigned __int8)Tree ^ v6;
          if ( v6 )
            v111 = (unsigned __int64)Tree ^ v6;
          Tree->Min = (_RTL_BALANCED_NODE *)v111;
          v69 = ($7D93978C745EB1C2D28075BAF55422B4)(v111 | 1);
          Tree->0 = v69;
        }
        else
        {
          Tree->Min = (_RTL_BALANCED_NODE *)v6;
          v69 = ($7D93978C745EB1C2D28075BAF55422B4)v6;
        }
        if ( (*(_BYTE *)&v69 & 1) != 0 )
        {
          Min = (unsigned __int64)Tree ^ v6;
          v112 = v6 == 0;
          goto LABEL_331;
        }
        v7 = (_RTL_BALANCED_NODE *)v6;
LABEL_113:
        Tree->Root = v7;
        return Min;
      }
LABEL_195:
      __fastfail(0x1Du);
    }
    v12 = (unsigned __int64)v10->Children[1];
    if ( v8 && v12 )
      v12 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v12 == Node )
    {
      LODWORD(v13) = 1;
LABEL_13:
      LOBYTE(ParentValue) = Node->0;
      goto LABEL_14;
    }
    v17 = (unsigned __int64)v10->Children[0];
    if ( v8 && v17 )
      v17 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v17 != Node )
      goto LABEL_195;
    v18 = Tree->Min;
    LODWORD(v13) = 0;
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      if ( v18 == (_RTL_BALANCED_NODE *)1 )
        goto LABEL_13;
      v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v19 = Tree->Min;
    }
    if ( v19 == Node )
    {
      v20 = (unsigned __int8)v18 & 1;
      if ( v6 )
      {
        if ( v20 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v6);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v6 | 1);
        }
        else
        {
          Tree->Min = (_RTL_BALANCED_NODE *)v6;
        }
      }
      else if ( v20 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v10);
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v10 | 1);
      }
      else
      {
        Tree->Min = v10;
      }
    }
    goto LABEL_13;
  }
  v21 = *(_RTL_BALANCED_NODE **)v5;
  v11 = (PRTL_BALANCED_NODE)v5;
  v10 = (_RTL_BALANCED_NODE *)v5;
  LODWORD(v13) = 1;
  if ( *(_QWORD *)v5 )
  {
    LODWORD(v13) = 0;
    do
    {
      v10 = v11;
      if ( v8 && v21 )
        v11 = (PRTL_BALANCED_NODE)((unsigned __int64)v21 ^ (unsigned __int64)v11);
      else
        v11 = v21;
      v21 = v11->Children[0];
    }
    while ( v11->Children[0] );
  }
  if ( v8 && v4 )
    v22 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v11);
  else
    v22 = (_RTL_BALANCED_NODE *)v4;
  v11->Children[0] = v22;
  v23 = *(_QWORD *)(v4 + 16);
  v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = *(_BYTE *)&Tree->0 & 1;
  if ( v25 && v24 )
    v24 ^= v4;
  if ( (PRTL_BALANCED_NODE)v24 != Node )
    goto LABEL_195;
  v26 = (unsigned __int64)v11;
  if ( v25 )
    v26 = v4 ^ (unsigned __int64)v11;
  *(_QWORD *)(v4 + 16) = v26 | v23 & 3;
  v27 = *(_QWORD *)(v5 + 16);
  v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = *(_BYTE *)&Tree->0 & 1;
  if ( v29 && v28 )
    v28 ^= v5;
  if ( (PRTL_BALANCED_NODE)v28 != Node )
    goto LABEL_195;
  v112 = v29 == 0;
  v30 = (unsigned __int64)v11;
  if ( !v112 )
    v30 = v5 ^ (unsigned __int64)v11;
  v31 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v11);
  *(_QWORD *)(v5 + 16) = v30 | v27 & 3;
  v6 = (unsigned __int64)v11->Children[1];
  v32 = *(_BYTE *)&Tree->0 & 1;
  if ( v32 && v6 )
  {
    v6 ^= (unsigned __int64)v11;
  }
  else if ( !v32 )
  {
    v31 = (_RTL_BALANCED_NODE *)v5;
  }
  ParentValue = v11->ParentValue;
  v11->Children[1] = v31;
  v33 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v34 = *(_BYTE *)&Tree->0 & 1;
  if ( v34 && v33 )
    v35 = (unsigned __int64)v11 ^ v33;
  else
    v35 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v35 != v10 )
  {
    if ( v34 )
    {
      if ( !v33 )
        goto LABEL_212;
      v33 ^= (unsigned __int64)v11;
    }
    if ( v33 )
      goto LABEL_195;
LABEL_212:
    if ( v11 != v10 )
      goto LABEL_195;
  }
  v36 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 )
  {
    if ( v36 )
      v36 ^= (unsigned __int64)Node;
    if ( v36 )
      v36 ^= (unsigned __int64)v11;
  }
  v37 = v36 | ParentValue & 3;
  v11->ParentValue = v37;
  v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v37 ^ (v37 ^ *(_BYTE *)&Node->0) & 1);
  v38 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v38 )
  {
    v39 = *(_BYTE *)&Tree->0 & 1;
    if ( v39 )
    {
      v38 ^= (unsigned __int64)Node;
      v40 = *(PRTL_BALANCED_NODE *)(v38 + 8);
      if ( v40 )
      {
        v110 = 0LL;
        if ( (PRTL_BALANCED_NODE)(v38 ^ (unsigned __int64)v40) == Node )
          v110 = 8LL;
        v42 = (_RTL_BALANCED_NODE **)(v38 + v110);
        v43 = (unsigned __int64)*v42;
LABEL_224:
        if ( v43 )
          v43 ^= v38;
LABEL_54:
        if ( (PRTL_BALANCED_NODE)v43 != Node )
          goto LABEL_195;
        v44 = (unsigned __int64)v11 ^ v38;
        v45 = v11;
        if ( v39 )
          v45 = (_RTL_BALANCED_NODE *)v44;
        *v42 = v45;
        goto LABEL_14;
      }
    }
    else
    {
      v40 = *(PRTL_BALANCED_NODE *)(v38 + 8);
    }
    v41 = 0LL;
    if ( v40 == Node )
      v41 = 8LL;
    v42 = (_RTL_BALANCED_NODE **)(v38 + v41);
    v43 = (unsigned __int64)*v42;
    if ( !v39 )
      goto LABEL_54;
    goto LABEL_224;
  }
  v71 = Tree->Min;
  v72 = (unsigned __int64)Tree->Root;
  if ( ((unsigned __int8)v71 & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_195;
    v72 ^= (unsigned __int64)Tree;
  }
  if ( (PRTL_BALANCED_NODE)v72 != Node )
    goto LABEL_195;
  v73 = v11;
  if ( ((unsigned __int8)v71 & 1) != 0 )
    v73 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
  Tree->Root = v73;
LABEL_14:
  v15 = ParentValue & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) == 0 || !v6 )
  {
    LOBYTE(Min) = v13;
    v10->Children[v13] = (_RTL_BALANCED_NODE *)v6;
    if ( v6 )
      goto LABEL_66;
    if ( v15 )
      return Min;
    v46 = Tree->0;
    while ( 1 )
    {
      v47 = v10;
      v48 = !v13;
      v49 = (unsigned __int64)v10->Children[v48];
      if ( (*(_BYTE *)&v46 & 1) != 0 && v49 )
        v50 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v49);
      else
        v50 = v10->Children[v48];
      v51 = &v50->16;
      if ( (*(_BYTE *)&v50->0 & 1) == 0 )
        goto LABEL_62;
      v74 = Tree->Min;
      v75 = (unsigned __int64)Tree->Root;
      if ( ((unsigned __int8)v74 & 1) != 0 )
      {
        if ( v75 )
          v75 ^= (unsigned __int64)Tree;
        else
          v75 = 0LL;
      }
      v76 = v51->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v77 = (unsigned __int8)v74 & 1;
      if ( v77 && v76 )
        v76 ^= (unsigned __int64)v50;
      if ( (_RTL_BALANCED_NODE *)v76 != v10 )
        goto LABEL_195;
      if ( v77 && v49 )
        v49 ^= (unsigned __int64)v10;
      if ( (_RTL_BALANCED_NODE *)v49 != v50 )
        goto LABEL_195;
      v78 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v77 )
      {
        if ( !v78 )
        {
LABEL_192:
          if ( (_RTL_BALANCED_NODE *)v75 != v10 )
            goto LABEL_195;
          v75 = (unsigned __int64)v50;
          goto LABEL_136;
        }
        v78 ^= (unsigned __int64)v10;
      }
      if ( !v78 )
        goto LABEL_192;
      v79 = *(_QWORD *)(v78 + 8);
      if ( v77 && v79 )
        v79 ^= v78;
      if ( (_RTL_BALANCED_NODE *)v79 == v10 )
      {
        if ( v77 )
          v80 = (unsigned __int64)v50 ^ v78;
        else
          v80 = (unsigned __int64)v50;
        *(_QWORD *)(v78 + 8) = v80;
      }
      else
      {
        v105 = *(_QWORD *)v78;
        if ( v77 && v105 )
          v105 ^= v78;
        if ( (_RTL_BALANCED_NODE *)v105 != v10 )
          goto LABEL_195;
        if ( v77 )
          v106 = (unsigned __int64)v50 ^ v78;
        else
          v106 = (unsigned __int64)v50;
        *(_QWORD *)v78 = v106;
      }
LABEL_136:
      if ( v77 && v78 )
      {
        v51->ParentValue &= 3uLL;
        v81 = &v50->Children[v13];
        v51->ParentValue |= (unsigned __int64)v50 ^ v78;
        v82 = (unsigned __int64)*v81;
      }
      else
      {
        v51->ParentValue &= 3uLL;
        v81 = &v50->Children[v13];
        v51->ParentValue |= v78;
        v82 = (unsigned __int64)*v81;
        if ( !v77 )
          goto LABEL_138;
      }
      if ( !v82 )
        goto LABEL_139;
      v82 ^= (unsigned __int64)v50;
LABEL_138:
      if ( v82 )
      {
        v102 = *(_QWORD *)(v82 + 16);
        v103 = v102 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v77 && v103 )
          v103 ^= v82;
        if ( (_RTL_BALANCED_NODE *)v103 != v50 )
          goto LABEL_195;
        if ( v77 )
          v104 = (unsigned __int64)v10 ^ v82;
        else
          v104 = (unsigned __int64)v10;
        *(_QWORD *)(v82 + 16) = v104 | v102 & 3;
      }
LABEL_139:
      if ( v77 && v82 )
      {
        v10->Children[v48] = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v82);
        v83 = (unsigned __int64)v10 ^ (unsigned __int64)v50;
LABEL_274:
        *v81 = (_RTL_BALANCED_NODE *)v83;
        goto LABEL_142;
      }
      v10->Children[v48] = (_RTL_BALANCED_NODE *)v82;
      v83 = (unsigned __int64)v10 ^ (unsigned __int64)v50;
      if ( v77 )
        goto LABEL_274;
      *v81 = v10;
      v83 = (unsigned __int64)v50;
LABEL_142:
      v10->ParentValue &= 3uLL;
      v10->ParentValue |= v83;
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        v84 = 0LL;
        if ( v75 )
          v84 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v75);
      }
      else
      {
        v84 = (_RTL_BALANCED_NODE *)v75;
      }
      Tree->Root = v84;
      *(_BYTE *)&v51->0 &= ~1u;
      *(_BYTE *)&v10->0 |= 1u;
      v46 = Tree->0;
      v50 = v10->Children[v48];
      if ( (*(_BYTE *)&v46 & 1) != 0 && v50 )
        v50 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ (unsigned __int64)v50);
LABEL_62:
      v52 = v50->Children[0];
      v53 = *(_BYTE *)&v46 & 1;
      if ( v50->Children[0] )
      {
        if ( v53 )
          v52 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ (unsigned __int64)v52);
        if ( (*(_BYTE *)&v52->0 & 1) != 0 )
          goto LABEL_82;
      }
      v54 = v50->Children[1];
      if ( v54 )
      {
        if ( v53 )
          v54 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ (unsigned __int64)v54);
        if ( (*(_BYTE *)&v54->0 & 1) != 0 )
        {
LABEL_82:
          v57 = v50->Children[v48];
          if ( v53 )
          {
            if ( v57 )
            {
              v57 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ (unsigned __int64)v57);
              goto LABEL_83;
            }
          }
          else
          {
LABEL_83:
            if ( v57 && (*(_BYTE *)&v57->0 & 1) != 0 )
            {
LABEL_85:
              v58 = &v10->16;
              *(_BYTE *)&v50->0 ^= (*(_BYTE *)&v50->0 ^ *(_BYTE *)&v10->0) & 1;
              *(_BYTE *)&v10->0 &= ~1u;
              *(_BYTE *)&v57->0 &= ~1u;
              v59 = (unsigned __int64)Tree->Root;
              if ( ((__int64)Tree->Min & 1) != 0 )
              {
                if ( v59 )
                  v59 ^= (unsigned __int64)Tree;
                else
                  v59 = 0LL;
              }
              v60 = v50->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
              v61 = (__int64)Tree->Min & 1;
              if ( ((__int64)Tree->Min & 1) != 0 && v60 )
                v60 ^= (unsigned __int64)v50;
              if ( (_RTL_BALANCED_NODE *)v60 == v10 )
              {
                v62 = (unsigned __int64)v10->Children[v48];
                if ( ((__int64)Tree->Min & 1) != 0 && v62 )
                  v62 ^= (unsigned __int64)v10;
                if ( (_RTL_BALANCED_NODE *)v62 == v50 )
                {
                  v63 = v58->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( ((__int64)Tree->Min & 1) == 0 )
                    goto LABEL_91;
                  if ( !v63 )
                    goto LABEL_190;
                  v63 ^= (unsigned __int64)v10;
LABEL_91:
                  if ( v63 )
                  {
                    v64 = *(_QWORD *)(v63 + 8);
                    if ( ((__int64)Tree->Min & 1) != 0 && v64 )
                      v64 ^= v63;
                    if ( (_RTL_BALANCED_NODE *)v64 == v10 )
                    {
                      if ( ((__int64)Tree->Min & 1) != 0 )
                        v65 = (unsigned __int64)v50 ^ v63;
                      else
                        v65 = (unsigned __int64)v50;
                      *(_QWORD *)(v63 + 8) = v65;
                      goto LABEL_97;
                    }
                    v100 = *(_QWORD *)v63;
                    if ( ((__int64)Tree->Min & 1) != 0 && v100 )
                      v100 ^= v63;
                    if ( (_RTL_BALANCED_NODE *)v100 == v10 )
                    {
                      if ( ((__int64)Tree->Min & 1) != 0 )
                        v101 = (unsigned __int64)v50 ^ v63;
                      else
                        v101 = (unsigned __int64)v50;
                      *(_QWORD *)v63 = v101;
LABEL_97:
                      if ( v61 && v63 )
                      {
                        v50->ParentValue &= 3uLL;
                        v50->ParentValue |= (unsigned __int64)v50 ^ v63;
                        v66 = (unsigned __int64 *)&v50->Children[v13];
                        v67 = *v66;
LABEL_322:
                        if ( v67 )
                        {
                          v67 ^= (unsigned __int64)v50;
                          goto LABEL_99;
                        }
                        goto LABEL_100;
                      }
                      v50->ParentValue &= 3uLL;
                      v50->ParentValue |= v63;
                      v66 = (unsigned __int64 *)&v50->Children[v13];
                      v67 = *v66;
                      if ( v61 )
                        goto LABEL_322;
LABEL_99:
                      if ( !v67 )
                      {
LABEL_100:
                        if ( v61 && v67 )
                        {
                          v10->Children[v48] = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v67);
                          Min = (unsigned __int64)v50 ^ (unsigned __int64)v10;
LABEL_329:
                          *v66 = Min;
                        }
                        else
                        {
                          v10->Children[v48] = (_RTL_BALANCED_NODE *)v67;
                          Min = (unsigned __int64)v50 ^ (unsigned __int64)v10;
                          if ( v61 )
                            goto LABEL_329;
                          *v66 = (unsigned __int64)v10;
                          Min = (unsigned __int64)v50;
                        }
                        v58->ParentValue &= 3uLL;
                        v58->ParentValue |= Min;
                        if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
                        {
                          Tree->Root = (_RTL_BALANCED_NODE *)v59;
                          return Min;
                        }
                        Min = (unsigned __int64)Tree ^ v59;
                        v112 = v59 == 0;
LABEL_331:
                        if ( !v112 )
                          v7 = (_RTL_BALANCED_NODE *)Min;
                        goto LABEL_113;
                      }
                      v97 = *(_QWORD *)(v67 + 16);
                      v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
                      if ( v61 && v98 )
                        v98 ^= v67;
                      if ( (_RTL_BALANCED_NODE *)v98 == v50 )
                      {
                        if ( v61 )
                          v99 = (unsigned __int64)v10 ^ v67;
                        else
                          v99 = (unsigned __int64)v10;
                        *(_QWORD *)(v67 + 16) = v99 | v97 & 3;
                        goto LABEL_100;
                      }
                    }
                  }
                  else
                  {
LABEL_190:
                    if ( (_RTL_BALANCED_NODE *)v59 == v10 )
                    {
                      v59 = (unsigned __int64)v50;
                      goto LABEL_97;
                    }
                  }
                }
              }
              goto LABEL_195;
            }
          }
          v85 = v50->Children[v13];
          if ( v53 && v85 )
            v85 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ (unsigned __int64)v85);
          *(_BYTE *)&v85->0 &= ~1u;
          v86 = (unsigned int)v13 ^ 1;
          v87 = v85->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          v88 = *(_BYTE *)&Tree->0 & 1;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v87 )
            v87 ^= (unsigned __int64)v85;
          if ( (_RTL_BALANCED_NODE *)v87 != v50 )
            goto LABEL_195;
          v89 = (unsigned __int64 *)&v50->Children[v13];
          v90 = *v89;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v90 )
            v90 ^= (unsigned __int64)v50;
          if ( (_RTL_BALANCED_NODE *)v90 != v85 )
            goto LABEL_195;
          v91 = (unsigned __int64)v10->Children[v86];
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v91 )
            v91 ^= (unsigned __int64)v10;
          if ( (_RTL_BALANCED_NODE *)v91 != v50 )
            goto LABEL_195;
          v92 = v50->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v92 )
            v92 ^= (unsigned __int64)v50;
          if ( (_RTL_BALANCED_NODE *)v92 != v10 )
            goto LABEL_195;
          v93 = (unsigned __int64)v10 ^ (unsigned __int64)v85;
          if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
          {
            v10->Children[v86] = v85;
            goto LABEL_157;
          }
          v10->Children[v86] = (_RTL_BALANCED_NODE *)v93;
          if ( v10 )
          {
            v85->ParentValue &= 3uLL;
            v94 = (unsigned __int64 *)&v85->Children[v86];
            v85->ParentValue |= v93;
            v95 = *v94;
LABEL_298:
            if ( v95 )
            {
              v95 ^= (unsigned __int64)v85;
              goto LABEL_158;
            }
          }
          else
          {
LABEL_157:
            v85->ParentValue &= 3uLL;
            v94 = (unsigned __int64 *)&v85->Children[v86];
            v85->ParentValue |= (unsigned __int64)v10;
            v95 = *v94;
            if ( v88 )
              goto LABEL_298;
LABEL_158:
            if ( v95 )
            {
              v107 = *(_QWORD *)(v95 + 16);
              v108 = v107 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v88 && v108 )
                v108 ^= v95;
              if ( (_RTL_BALANCED_NODE *)v108 != v85 )
                goto LABEL_195;
              if ( v88 )
                v109 = (unsigned __int64)v50 ^ v95;
              else
                v109 = (unsigned __int64)v50;
              *(_QWORD *)(v95 + 16) = v109 | v107 & 3;
            }
          }
          if ( v88 && v95 )
          {
            *v89 = (unsigned __int64)v50 ^ v95;
            v96 = (unsigned __int64)v50 ^ (unsigned __int64)v85;
LABEL_304:
            *v94 = v96;
          }
          else
          {
            *v89 = v95;
            v96 = (unsigned __int64)v50 ^ (unsigned __int64)v85;
            if ( v88 )
              goto LABEL_304;
            *v94 = (unsigned __int64)v50;
            v96 = (unsigned __int64)v85;
          }
          v50->ParentValue &= 3uLL;
          v57 = v50;
          v50->ParentValue |= v96;
          v50 = v85;
          goto LABEL_85;
        }
      }
      v55 = v10->0;
      if ( (*(_BYTE *)&v55 & 1) != 0 )
      {
        LOBYTE(Min) = *(_BYTE *)&v55 & 0xFE;
        v10->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Min;
        *(_BYTE *)&v50->0 |= 1u;
        return Min;
      }
      *(_BYTE *)&v50->0 |= 1u;
      v46 = Tree->0;
      Min = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (*(_BYTE *)&v46 & 1) != 0 && Min )
        v10 = (_RTL_BALANCED_NODE *)(Min ^ (unsigned __int64)v10);
      else
        v10 = (_RTL_BALANCED_NODE *)(v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v10 )
        return Min;
      v70 = (unsigned __int64)v10->Children[1];
      if ( (*(_BYTE *)&v46 & 1) != 0 && v70 )
        v70 ^= (unsigned __int64)v10;
      v13 = v70 == (_QWORD)v47;
    }
  }
  v10->Children[v13] = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
LABEL_66:
  Min = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v56 = *(_BYTE *)&Tree->0 & 1;
  if ( v56 && Min )
    Min ^= v6;
  if ( (PRTL_BALANCED_NODE)Min != v11 )
    goto LABEL_195;
  if ( v56 && v10 )
    v10 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
  *(_QWORD *)(v6 + 16) = v10;
  return Min;
}
