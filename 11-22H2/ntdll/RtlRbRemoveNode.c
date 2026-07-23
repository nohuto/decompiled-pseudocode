/*
 * XREFs of RtlRbRemoveNode @ 0x180038A70
 * Callers:
 *     EtwpRemoveRegistrationFromTable @ 0x1800300B8 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180034AB4 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180035030 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkCoalesce @ 0x180037270 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x1800380B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVaMgrAlloc @ 0x18004A920 (RtlpHpVaMgrAlloc.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FBF8 (RtlpDecRefWnfNameSubscription.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180061D10 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x180064C64 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180069FDC (RtlpHpVsFreeChunkRemove.c)
 *     LdrpUnloadNode @ 0x18006B540 (LdrpUnloadNode.c)
 *     RtlRemovePointerMapping @ 0x180101190 (RtlRemovePointerMapping.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  char v2; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned __int64 v8; // rdx
  _RTL_BALANCED_NODE *v9; // rbp
  unsigned __int64 v10; // rcx
  _RTL_BALANCED_NODE *v11; // r10
  char v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  _BOOL8 v15; // rdi
  unsigned __int64 v16; // r9
  char v17; // al
  char v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // rcx
  char v23; // al
  $7D93978C745EB1C2D28075BAF55422B4 v24; // al
  unsigned __int64 v25; // rcx
  char v26; // r11
  _RTL_BALANCED_NODE *v27; // rcx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rcx
  char v30; // r14
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  char v34; // dl
  unsigned __int64 v35; // rdx
  _RTL_BALANCED_NODE *v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rax
  char v39; // cl
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  char v44; // r11
  PRTL_BALANCED_NODE v45; // r14
  _RTL_BALANCED_NODE **v46; // r14
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  _RTL_BALANCED_NODE *v49; // rax
  _RTL_BALANCED_NODE *v50; // r12
  _BOOL8 v51; // rsi
  __int64 v52; // r8
  $7D93978C745EB1C2D28075BAF55422B4 v53; // al
  unsigned __int64 v54; // rdx
  unsigned __int64 *v55; // r15
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  char v58; // al
  __int64 v59; // rdx
  $424C8BBEF8F6C852886B4C6E806B5DB0 v60; // al
  char v61; // cl
  unsigned __int64 v62; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v63; // cl
  unsigned __int64 v64; // r8
  $A0DBB4DCD70C1F3F482FA43DF3F92F9A *v65; // rdx
  unsigned __int64 v66; // r11
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r9
  unsigned __int64 *v72; // r9
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rdx
  BOOL v77; // edi
  unsigned __int64 v78; // rax
  int v79; // r8d
  _BOOL8 v80; // r9
  unsigned __int64 *v81; // rdi
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 *v86; // r11
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // r11
  _RTL_BALANCED_NODE *v92; // rcx
  char v93; // cl
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r13
  unsigned __int64 v98; // rax
  int v99; // r9d
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  unsigned __int64 *v103; // r11
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rax
  PRTL_RB_TREE v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rsi
  unsigned __int64 v110; // rdi
  unsigned __int64 v111; // r14
  __int64 v112; // rsi
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // r14
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rdx
  __int64 v117; // rsi
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // r14
  _RTL_BALANCED_NODE *v120; // rax
  __int64 v121; // r14
  unsigned __int64 v122; // rcx
  bool v123; // zf
  _BOOL8 v125; // [rsp+30h] [rbp+8h]

  v2 = (char)Tree->0;
  v5 = (unsigned __int64)Node->Children[0];
  if ( (v2 & 1) != 0 && v5 )
  {
    v6 = (unsigned __int64)Node->Children[1];
    v5 ^= (unsigned __int64)Node;
    v7 = (_RTL_BALANCED_NODE *)v5;
  }
  else
  {
    v6 = (unsigned __int64)Node->Children[1];
    v7 = Node->Children[0];
    if ( (v2 & 1) == 0 )
      goto LABEL_3;
  }
  if ( v6 )
    v6 ^= (unsigned __int64)Node;
LABEL_3:
  v8 = v6;
  if ( v5 )
    v8 = (unsigned __int64)v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 )
    v10 = v6;
  if ( v10 )
  {
    v25 = *(_QWORD *)v6;
    LODWORD(v15) = 1;
    v26 = v2 & 1;
    v13 = v6;
    v11 = (_RTL_BALANCED_NODE *)v6;
    if ( *(_QWORD *)v6 )
    {
      LODWORD(v15) = 0;
      do
      {
        v11 = (_RTL_BALANCED_NODE *)v13;
        if ( v26 && v25 )
          v13 ^= v25;
        else
          v13 = v25;
        v25 = *(_QWORD *)v13;
      }
      while ( *(_QWORD *)v13 );
    }
    if ( v26 && v5 )
      v27 = (_RTL_BALANCED_NODE *)(v5 ^ v13);
    else
      v27 = (_RTL_BALANCED_NODE *)v5;
    *(_QWORD *)v13 = v27;
    v28 = *(_QWORD *)(v5 + 16);
    v29 = v28 & 0xFFFFFFFFFFFFFFFCuLL;
    v30 = *(_BYTE *)&Tree->0 & 1;
    if ( v30 && v29 )
      v29 ^= v5;
    if ( (PRTL_BALANCED_NODE)v29 != Node )
      goto LABEL_195;
    v31 = v13;
    if ( v30 )
      v31 = v5 ^ v13;
    *(_QWORD *)(v5 + 16) = v31 | v28 & 3;
    v32 = *(_QWORD *)(v6 + 16);
    v33 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
    v34 = *(_BYTE *)&Tree->0 & 1;
    if ( v34 && v33 )
      v33 ^= v6;
    if ( (PRTL_BALANCED_NODE)v33 != Node )
      goto LABEL_195;
    v123 = v34 == 0;
    v35 = v13;
    if ( !v123 )
      v35 = v6 ^ v13;
    v36 = (_RTL_BALANCED_NODE *)(v13 ^ v6);
    *(_QWORD *)(v6 + 16) = v35 | v32 & 3;
    v8 = *(_QWORD *)(v13 + 8);
    v37 = *(_BYTE *)&Tree->0 & 1;
    if ( v37 && v8 )
    {
      v8 ^= v13;
    }
    else if ( !v37 )
    {
      v36 = (_RTL_BALANCED_NODE *)v6;
    }
    v16 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)(v13 + 8) = v36;
    v38 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    v39 = *(_BYTE *)&Tree->0 & 1;
    if ( v39 && v38 )
      v40 = v13 ^ v38;
    else
      v40 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v40 == v11 )
    {
LABEL_48:
      v41 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v39 )
      {
        if ( v41 )
          v41 ^= (unsigned __int64)Node;
        if ( v41 )
          v41 ^= v13;
      }
      v42 = v41 | v16 & 3;
      *(_QWORD *)(v13 + 16) = v42;
      *(_BYTE *)(v13 + 16) = v42 ^ (*(_BYTE *)&Node->0 ^ v42) & 1;
      v43 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v43 )
      {
        Min = Tree->Min;
        Root = (unsigned __int64)Tree->Root;
        v17 = (char)Min;
        if ( ((unsigned __int8)Min & 1) != 0 && Root )
          Root ^= (unsigned __int64)Tree;
        if ( (PRTL_BALANCED_NODE)Root != Node )
          goto LABEL_195;
        if ( ((unsigned __int8)Min & 1) != 0 )
        {
          v92 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v13);
        }
        else
        {
          v17 = (char)Tree->Min;
          v92 = (_RTL_BALANCED_NODE *)v13;
        }
        Tree->Root = v92;
        goto LABEL_14;
      }
      v44 = *(_BYTE *)&Tree->0 & 1;
      if ( v44 )
      {
        v43 ^= (unsigned __int64)Node;
        v45 = *(PRTL_BALANCED_NODE *)(v43 + 8);
        if ( v45 )
        {
          v120 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ v43);
          v121 = 0LL;
          if ( v120 == Node )
            v121 = 8LL;
          v46 = (_RTL_BALANCED_NODE **)(v43 + v121);
          v47 = (unsigned __int64)*v46;
          goto LABEL_227;
        }
      }
      else
      {
        v45 = *(PRTL_BALANCED_NODE *)(v43 + 8);
      }
      v46 = (_RTL_BALANCED_NODE **)(v43 + 8LL * (v45 == Node));
      v47 = (unsigned __int64)*v46;
      if ( !v44 )
      {
LABEL_53:
        if ( (PRTL_BALANCED_NODE)v47 != Node )
          goto LABEL_195;
        v48 = v13 ^ v43;
        v49 = (_RTL_BALANCED_NODE *)v13;
        if ( v44 )
          v49 = (_RTL_BALANCED_NODE *)v48;
        *v46 = v49;
        v17 = (char)Tree->0;
        goto LABEL_14;
      }
LABEL_227:
      if ( v47 )
        v47 ^= v43;
      goto LABEL_53;
    }
    if ( v39 )
    {
      if ( !v38 )
        goto LABEL_214;
      v38 ^= v13;
    }
    if ( v38 )
      goto LABEL_195;
LABEL_214:
    if ( (_RTL_BALANCED_NODE *)v13 != v11 )
      goto LABEL_195;
    goto LABEL_48;
  }
  v11 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v12 = v2 & 1;
  if ( (v2 & 1) != 0 && v11 )
    v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v11);
  v13 = (unsigned __int64)Node;
  if ( v11 )
  {
    v14 = (unsigned __int64)v11->Children[1];
    if ( v12 && v14 )
      v14 ^= (unsigned __int64)v11;
    if ( (PRTL_BALANCED_NODE)v14 == Node )
    {
      LODWORD(v15) = 1;
LABEL_13:
      LOBYTE(v16) = Node->0;
      v17 = v2;
LABEL_14:
      v18 = v16 & 1;
      if ( (v17 & 1) != 0 && v8 )
      {
        v11->Children[v15] = (_RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v11);
LABEL_64:
        v19 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v61 = *(_BYTE *)&Tree->0 & 1;
        if ( v61 && v19 )
          v19 ^= v8;
        if ( v19 != v13 )
          goto LABEL_195;
        if ( v61 && v11 )
          v11 = (_RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v11);
        *(_QWORD *)(v8 + 16) = v11;
        return v19;
      }
      LOBYTE(v19) = v15;
      v11->Children[v15] = (_RTL_BALANCED_NODE *)v8;
      if ( v8 )
        goto LABEL_64;
      if ( v18 )
        return v19;
      while ( 1 )
      {
        v50 = v11;
        v51 = v15;
        v125 = v15;
        v52 = !v15;
        v53 = Tree->0;
        v54 = (unsigned __int64)v11->Children[v52];
        v55 = (unsigned __int64 *)((char *)v11 + v52 * 8);
        if ( (*(_BYTE *)&v53 & 1) != 0 && v54 )
          v56 = (unsigned __int64)v11 ^ v54;
        else
          v56 = (unsigned __int64)v11->Children[v52];
        if ( (*(_BYTE *)(v56 + 16) & 1) == 0 )
          goto LABEL_60;
        v97 = (unsigned __int64)Tree->Root;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v97 )
          v97 ^= (unsigned __int64)Tree;
        v98 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v99 = *(_BYTE *)&Tree->0 & 1;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v98 )
          v98 ^= v56;
        if ( (_RTL_BALANCED_NODE *)v98 != v11 )
          goto LABEL_195;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v54 )
          v54 ^= (unsigned __int64)v11;
        if ( v54 != v56 )
          goto LABEL_195;
        v100 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          if ( !v100 )
          {
LABEL_193:
            if ( (_RTL_BALANCED_NODE *)v97 != v11 )
              goto LABEL_195;
            v97 = v56;
            goto LABEL_158;
          }
          v100 ^= (unsigned __int64)v11;
        }
        if ( !v100 )
          goto LABEL_193;
        v101 = *(_QWORD *)(v100 + 8);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v101 )
          v101 ^= v100;
        if ( (_RTL_BALANCED_NODE *)v101 == v11 )
        {
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v102 = v56 ^ v100;
          else
            v102 = v56;
          *(_QWORD *)(v100 + 8) = v102;
        }
        else
        {
          v115 = *(_QWORD *)v100;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v115 )
            v115 ^= v100;
          if ( (_RTL_BALANCED_NODE *)v115 != v11 )
            goto LABEL_195;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
            v116 = v56 ^ v100;
          else
            v116 = v56;
          *(_QWORD *)v100 = v116;
        }
LABEL_158:
        if ( v99 && v100 )
        {
          *(_QWORD *)(v56 + 16) &= 3uLL;
          v103 = (unsigned __int64 *)(v56 + 8 * v15);
          *(_QWORD *)(v56 + 16) |= v56 ^ v100;
          v104 = *v103;
        }
        else
        {
          *(_QWORD *)(v56 + 16) &= 3uLL;
          v103 = (unsigned __int64 *)(v56 + 8 * v15);
          *(_QWORD *)(v56 + 16) |= v100;
          v104 = *v103;
          if ( !v99 )
            goto LABEL_160;
        }
        if ( !v104 )
        {
LABEL_161:
          v105 = (unsigned __int64)v11 ^ v104;
          goto LABEL_162;
        }
        v104 ^= v56;
LABEL_160:
        if ( !v104 )
          goto LABEL_161;
        v117 = *(_QWORD *)(v104 + 16);
        v118 = v117 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v99 && v118 )
          v118 ^= v104;
        if ( v118 != v56 )
          goto LABEL_195;
        v105 = v104 ^ (unsigned __int64)v11;
        if ( v99 )
          v119 = v104 ^ (unsigned __int64)v11;
        else
          v119 = (unsigned __int64)v11;
        *(_QWORD *)(v104 + 16) = v119 | v117 & 3;
        v51 = v15;
LABEL_162:
        if ( v99 && v104 )
        {
          *v55 = v105;
          v106 = v56 ^ (unsigned __int64)v11;
LABEL_275:
          *v103 = v106;
          goto LABEL_165;
        }
        *v55 = v104;
        v106 = v56 ^ (unsigned __int64)v11;
        if ( v99 )
          goto LABEL_275;
        *v103 = (unsigned __int64)v11;
        v106 = v56;
LABEL_165:
        v11->ParentValue &= 3uLL;
        v11->ParentValue |= v106;
        v107 = Tree;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
        {
          v108 = 0LL;
          if ( v97 )
            v108 = v97 ^ (unsigned __int64)Tree;
          v107 = Tree;
        }
        else
        {
          v108 = v97;
        }
        v107->Root = (_RTL_BALANCED_NODE *)v108;
        *(_BYTE *)(v56 + 16) &= ~1u;
        *(_BYTE *)&v11->0 |= 1u;
        v53 = Tree->0;
        v56 = *v55;
        if ( (*(_BYTE *)&v53 & 1) != 0 && v56 )
          v56 ^= (unsigned __int64)v11;
LABEL_60:
        v57 = *(_QWORD *)v56;
        v58 = *(_BYTE *)&v53 & 1;
        if ( *(_QWORD *)v56 )
        {
          if ( v58 )
            v57 ^= v56;
          if ( (*(_BYTE *)(v57 + 16) & 1) != 0 )
            goto LABEL_85;
        }
        v59 = *(_QWORD *)(v56 + 8);
        if ( v59 )
        {
          if ( v58 )
            v59 ^= v56;
          if ( (*(_BYTE *)(v59 + 16) & 1) != 0 )
          {
LABEL_85:
            v64 = *(_QWORD *)(v52 * 8 + v56);
            if ( v58 )
            {
              if ( v64 )
              {
                v64 ^= v56;
                goto LABEL_86;
              }
            }
            else
            {
LABEL_86:
              if ( v64 && (*(_BYTE *)(v64 + 16) & 1) != 0 )
              {
LABEL_88:
                v65 = &v11->16;
                *(_BYTE *)(v56 + 16) ^= (*(_BYTE *)&v11->0 ^ *(_BYTE *)(v56 + 16)) & 1;
                *(_BYTE *)&v11->0 &= ~1u;
                *(_BYTE *)(v64 + 16) &= ~1u;
                v19 = (unsigned __int64)Tree->Min;
                v66 = (unsigned __int64)Tree->Root;
                if ( (v19 & 1) != 0 && v66 )
                  v66 ^= (unsigned __int64)Tree;
                v67 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                LODWORD(v19) = v19 & 1;
                if ( (_DWORD)v19 && v67 )
                  v67 ^= v56;
                if ( (_RTL_BALANCED_NODE *)v67 == v11 )
                {
                  v68 = *v55;
                  if ( (_DWORD)v19 && v68 )
                    v68 ^= (unsigned __int64)v11;
                  if ( v68 == v56 )
                  {
                    v69 = v65->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !(_DWORD)v19 )
                      goto LABEL_94;
                    if ( !v69 )
                      goto LABEL_176;
                    v69 ^= (unsigned __int64)v11;
LABEL_94:
                    if ( v69 )
                    {
                      v70 = *(_QWORD *)(v69 + 8);
                      if ( (_DWORD)v19 && v70 )
                        v70 ^= v69;
                      if ( (_RTL_BALANCED_NODE *)v70 == v11 )
                      {
                        if ( (_DWORD)v19 )
                          v71 = v56 ^ v69;
                        else
                          v71 = v56;
                        *(_QWORD *)(v69 + 8) = v71;
                        goto LABEL_100;
                      }
                      v95 = *(_QWORD *)v69;
                      if ( (_DWORD)v19 && v95 )
                        v95 ^= v69;
                      if ( (_RTL_BALANCED_NODE *)v95 == v11 )
                      {
                        if ( (_DWORD)v19 )
                          v96 = v56 ^ v69;
                        else
                          v96 = v56;
                        *(_QWORD *)v69 = v96;
LABEL_100:
                        if ( (_DWORD)v19 && v69 )
                        {
                          *(_QWORD *)(v56 + 16) &= 3uLL;
                          v72 = (unsigned __int64 *)(v56 + 8 * v51);
                          *(_QWORD *)(v56 + 16) |= v56 ^ v69;
                          v73 = *v72;
LABEL_323:
                          if ( v73 )
                          {
                            v73 ^= v56;
                            goto LABEL_102;
                          }
                          goto LABEL_103;
                        }
                        *(_QWORD *)(v56 + 16) &= 3uLL;
                        v72 = (unsigned __int64 *)(v56 + 8 * v51);
                        *(_QWORD *)(v56 + 16) |= v69;
                        v73 = *v72;
                        if ( (_DWORD)v19 )
                          goto LABEL_323;
LABEL_102:
                        if ( !v73 )
                        {
LABEL_103:
                          v74 = (unsigned __int64)v11 ^ v73;
                          goto LABEL_104;
                        }
                        v109 = *(_QWORD *)(v73 + 16);
                        v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
                        if ( (_DWORD)v19 && v110 )
                          v110 ^= v73;
                        if ( v110 == v56 )
                        {
                          v74 = v73 ^ (unsigned __int64)v11;
                          if ( (_DWORD)v19 )
                            v111 = v73 ^ (unsigned __int64)v11;
                          else
                            v111 = (unsigned __int64)v11;
                          *(_QWORD *)(v73 + 16) = v111 | v109 & 3;
LABEL_104:
                          if ( (_DWORD)v19 && v73 )
                          {
                            *v55 = v74;
                            v75 = v56 ^ (unsigned __int64)v11;
LABEL_330:
                            *v72 = v75;
                          }
                          else
                          {
                            *v55 = v73;
                            v75 = v56 ^ (unsigned __int64)v11;
                            if ( (_DWORD)v19 )
                              goto LABEL_330;
                            *v72 = (unsigned __int64)v11;
                            v75 = v56;
                          }
                          v65->ParentValue &= 3uLL;
                          v65->ParentValue |= v75;
                          if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
                          {
                            Tree->Root = (_RTL_BALANCED_NODE *)v66;
                            return v19;
                          }
                          v19 = v66 ^ (unsigned __int64)Tree;
                          v123 = v66 == 0;
LABEL_332:
                          if ( !v123 )
                            v9 = (_RTL_BALANCED_NODE *)v19;
                          goto LABEL_76;
                        }
                      }
                    }
                    else
                    {
LABEL_176:
                      if ( (_RTL_BALANCED_NODE *)v66 == v11 )
                      {
                        v66 = v56;
                        goto LABEL_100;
                      }
                    }
                  }
                }
LABEL_195:
                __fastfail(0x1Du);
              }
            }
            v76 = *(_QWORD *)(v56 + 8 * v51);
            if ( v58 && v76 )
              v76 ^= v56;
            *(_BYTE *)(v76 + 16) &= ~1u;
            v77 = !v15;
            v78 = *(_QWORD *)(v76 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v79 = *(_BYTE *)&Tree->0 & 1;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v78 )
              v78 ^= v76;
            if ( v78 != v56 )
              goto LABEL_195;
            v80 = v77;
            v81 = (unsigned __int64 *)(v56 + 8 * !v77);
            v82 = *v81;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v82 )
              v82 ^= v56;
            if ( v82 != v76 )
              goto LABEL_195;
            v83 = (unsigned __int64)v11->Children[v80];
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v83 )
              v83 ^= (unsigned __int64)v11;
            if ( v83 != v56 )
              goto LABEL_195;
            v84 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v84 )
              v84 ^= v56;
            if ( (_RTL_BALANCED_NODE *)v84 != v11 )
              goto LABEL_195;
            v85 = v76 ^ (unsigned __int64)v11;
            if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
            {
              v11->Children[v80] = (_RTL_BALANCED_NODE *)v76;
              goto LABEL_124;
            }
            v11->Children[v80] = (_RTL_BALANCED_NODE *)v85;
            if ( v11 )
            {
              *(_QWORD *)(v76 + 16) &= 3uLL;
              v86 = (unsigned __int64 *)(v76 + 8 * v80);
              *(_QWORD *)(v76 + 16) |= v85;
              v87 = *v86;
LABEL_299:
              if ( v87 )
              {
                v87 ^= v76;
                goto LABEL_125;
              }
              goto LABEL_126;
            }
LABEL_124:
            *(_QWORD *)(v76 + 16) &= 3uLL;
            v86 = (unsigned __int64 *)(v76 + 8 * v80);
            *(_QWORD *)(v76 + 16) |= (unsigned __int64)v11;
            v87 = *v86;
            if ( v79 )
              goto LABEL_299;
LABEL_125:
            if ( v87 )
            {
              v112 = *(_QWORD *)(v87 + 16);
              v113 = v112 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v79 && v113 )
                v113 ^= v87;
              if ( v113 != v76 )
                goto LABEL_195;
              v88 = v87 ^ v56;
              if ( v79 )
                v114 = v87 ^ v56;
              else
                v114 = v56;
              *(_QWORD *)(v87 + 16) = v114 | v112 & 3;
              v51 = v125;
            }
            else
            {
LABEL_126:
              v88 = v56 ^ v87;
            }
            if ( v79 && v87 )
            {
              *v81 = v88;
              v89 = v76 ^ v56;
LABEL_306:
              *v86 = v89;
            }
            else
            {
              *v81 = v87;
              v89 = v76 ^ v56;
              if ( v79 )
                goto LABEL_306;
              *v86 = v56;
              v89 = v76;
            }
            *(_QWORD *)(v56 + 16) &= 3uLL;
            v64 = v56;
            *(_QWORD *)(v56 + 16) |= v89;
            v56 = v76;
            goto LABEL_88;
          }
        }
        v60 = v11->0;
        if ( (*(_BYTE *)&v60 & 1) != 0 )
        {
          LOBYTE(v19) = *(_BYTE *)&v60 & 0xFE;
          v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v19;
          *(_BYTE *)(v56 + 16) |= 1u;
          return v19;
        }
        *(_BYTE *)(v56 + 16) |= 1u;
        v19 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
        v93 = *(_BYTE *)&Tree->0 & 1;
        if ( v93 && v19 )
          v11 = (_RTL_BALANCED_NODE *)(v19 ^ (unsigned __int64)v11);
        else
          v11 = (_RTL_BALANCED_NODE *)(v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 )
          return v19;
        v94 = (unsigned __int64)v11->Children[1];
        if ( v93 && v94 )
          v94 ^= (unsigned __int64)v11;
        v15 = v94 == (_QWORD)v50;
      }
    }
    v20 = (unsigned __int64)v11->Children[0];
    if ( v12 && v20 )
      v20 ^= (unsigned __int64)v11;
    if ( (PRTL_BALANCED_NODE)v20 != Node )
      goto LABEL_195;
    v21 = Tree->Min;
    LODWORD(v15) = 0;
    if ( ((unsigned __int8)v21 & 1) != 0 )
    {
      if ( v21 == (_RTL_BALANCED_NODE *)1 )
      {
        v2 = 1;
        goto LABEL_13;
      }
      v22 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ ((unsigned __int64)Tree | 1));
    }
    else
    {
      v22 = Tree->Min;
    }
    v2 = (char)Tree->Min;
    if ( v22 == Node )
    {
      v23 = (unsigned __int8)v21 & 1;
      if ( v8 )
      {
        if ( v23 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v8);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v8 | 1);
          v2 = (unsigned __int8)Tree ^ v8 | 1;
        }
        else
        {
          Tree->Min = (_RTL_BALANCED_NODE *)v8;
          v2 = v8;
        }
      }
      else
      {
        if ( v23 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
          v24 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v11 | 1);
          Tree->0 = v24;
        }
        else
        {
          Tree->Min = v11;
          v24 = ($7D93978C745EB1C2D28075BAF55422B4)v11;
        }
        v2 = (char)v24;
      }
    }
    goto LABEL_13;
  }
  if ( v8 )
    *(_QWORD *)(v8 + 16) = 0LL;
  v19 = (unsigned __int64)Tree->Min;
  v62 = (unsigned __int64)Tree->Root;
  if ( (v19 & 1) != 0 && v62 )
    v62 ^= (unsigned __int64)Tree;
  if ( (PRTL_BALANCED_NODE)v62 != Node )
    goto LABEL_195;
  if ( (v19 & 1) != 0 )
  {
    v122 = 0LL;
    LOBYTE(v19) = (unsigned __int8)Tree ^ v8;
    if ( v8 )
      v122 = (unsigned __int64)Tree ^ v8;
    Tree->Min = (_RTL_BALANCED_NODE *)v122;
    v63 = ($7D93978C745EB1C2D28075BAF55422B4)(v122 | 1);
    Tree->0 = v63;
  }
  else
  {
    Tree->Min = (_RTL_BALANCED_NODE *)v8;
    v63 = ($7D93978C745EB1C2D28075BAF55422B4)v8;
  }
  if ( (*(_BYTE *)&v63 & 1) != 0 )
  {
    v19 = (unsigned __int64)Tree ^ v8;
    v123 = v8 == 0;
    goto LABEL_332;
  }
  v9 = (_RTL_BALANCED_NODE *)v8;
LABEL_76:
  Tree->Root = v9;
  return v19;
}
