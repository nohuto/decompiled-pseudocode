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

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  char v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  BOOL v13; // esi
  __int64 v14; // r9
  char v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // al
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  char v25; // r14
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // cl
  unsigned __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  char v39; // r10
  unsigned __int64 v40; // r15
  __int64 v41; // r14
  unsigned __int64 *v42; // r14
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  char v46; // dl
  unsigned __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  _QWORD *v51; // r8
  __int64 v52; // rax
  char v53; // dl
  __int64 v54; // rax
  char v55; // al
  char v56; // cl
  unsigned __int64 v57; // r9
  _QWORD *v58; // r8
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // rax
  int v61; // edx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // r9
  unsigned __int64 v65; // r9
  unsigned __int64 *v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  char v69; // cl
  __int64 v70; // rax
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r9
  int v77; // edx
  unsigned __int64 v78; // rax
  __int64 v79; // r9
  unsigned __int64 v80; // r9
  unsigned __int64 *v81; // r9
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // r8
  _BOOL8 v86; // r9
  unsigned __int64 v87; // rax
  int v88; // edx
  unsigned __int64 *v89; // r15
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 *v94; // r9
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // r10
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rdi
  __int64 v100; // r9
  unsigned __int64 v101; // r9
  __int64 v102; // rdi
  unsigned __int64 v103; // r10
  unsigned __int64 v104; // r10
  __int64 v105; // r9
  unsigned __int64 v106; // r9
  __int64 v107; // rdi
  unsigned __int64 v108; // r10
  unsigned __int64 v109; // r10
  __int64 v110; // r14
  unsigned __int64 v111; // rcx
  bool v112; // zf

  v4 = *(_QWORD *)a2;
  if ( (a1[1] & 1) != 0 && v4 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v4 ^= a2;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( (a1[1] & 1) == 0 )
      goto LABEL_3;
  }
  if ( v5 )
    v5 ^= a2;
LABEL_3:
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = a1[1] & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v8 && v10 )
      v10 ^= a2;
    v11 = a2;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      v16 = a1[1];
      v68 = *a1;
      if ( (v16 & 1) != 0 )
      {
        if ( !v68 )
          goto LABEL_195;
        v68 ^= (unsigned __int64)a1;
      }
      if ( v68 == a2 )
      {
        if ( (v16 & 1) != 0 )
        {
          v111 = 0LL;
          LOBYTE(v16) = (unsigned __int8)a1 ^ v6;
          if ( v6 )
            v111 = (unsigned __int64)a1 ^ v6;
          a1[1] = v111;
          v69 = v111 | 1;
          *((_BYTE *)a1 + 8) = v69;
        }
        else
        {
          a1[1] = v6;
          v69 = v6;
        }
        if ( (v69 & 1) != 0 )
        {
          v16 = (unsigned __int64)a1 ^ v6;
          v112 = v6 == 0;
          goto LABEL_331;
        }
        v7 = v6;
LABEL_113:
        *a1 = v7;
        return v16;
      }
LABEL_195:
      __fastfail(0x1Du);
    }
    v12 = *(_QWORD *)(v10 + 8);
    if ( v8 && v12 )
      v12 ^= v10;
    if ( v12 == a2 )
    {
      v13 = 1;
LABEL_13:
      LOBYTE(v14) = *(_BYTE *)(a2 + 16);
      goto LABEL_14;
    }
    v17 = *(_QWORD *)v10;
    if ( v8 && v17 )
      v17 ^= v10;
    if ( v17 != a2 )
      goto LABEL_195;
    v18 = a1[1];
    v13 = 0;
    if ( (v18 & 1) != 0 )
    {
      if ( v18 == 1 )
        goto LABEL_13;
      v19 = v18 ^ ((unsigned __int64)a1 | 1);
    }
    else
    {
      v19 = a1[1];
    }
    if ( v19 == a2 )
    {
      v20 = v18 & 1;
      if ( v6 )
      {
        if ( v20 )
        {
          a1[1] = (unsigned __int64)a1 ^ v6;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v6 | 1;
        }
        else
        {
          a1[1] = v6;
        }
      }
      else if ( v20 )
      {
        a1[1] = (unsigned __int64)a1 ^ v10;
        *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v10 | 1;
      }
      else
      {
        a1[1] = v10;
      }
    }
    goto LABEL_13;
  }
  v21 = *(_QWORD *)v5;
  v11 = v5;
  v10 = v5;
  v13 = 1;
  if ( *(_QWORD *)v5 )
  {
    v13 = 0;
    do
    {
      v10 = v11;
      if ( v8 && v21 )
        v11 ^= v21;
      else
        v11 = v21;
      v21 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 );
  }
  if ( v8 && v4 )
    v22 = v4 ^ v11;
  else
    v22 = v4;
  *(_QWORD *)v11 = v22;
  v23 = *(_QWORD *)(v4 + 16);
  v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = a1[1] & 1;
  if ( v25 && v24 )
    v24 ^= v4;
  if ( v24 != a2 )
    goto LABEL_195;
  v26 = v11;
  if ( v25 )
    v26 = v4 ^ v11;
  *(_QWORD *)(v4 + 16) = v26 | v23 & 3;
  v27 = *(_QWORD *)(v5 + 16);
  v28 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
  v29 = a1[1] & 1;
  if ( v29 && v28 )
    v28 ^= v5;
  if ( v28 != a2 )
    goto LABEL_195;
  v112 = v29 == 0;
  v30 = v11;
  if ( !v112 )
    v30 = v5 ^ v11;
  v31 = v5 ^ v11;
  *(_QWORD *)(v5 + 16) = v30 | v27 & 3;
  v6 = *(_QWORD *)(v11 + 8);
  v32 = a1[1] & 1;
  if ( v32 && v6 )
  {
    v6 ^= v11;
  }
  else if ( !v32 )
  {
    v31 = v5;
  }
  v14 = *(_QWORD *)(v11 + 16);
  *(_QWORD *)(v11 + 8) = v31;
  v33 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
  v34 = a1[1] & 1;
  if ( v34 && v33 )
    v35 = v11 ^ v33;
  else
    v35 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v35 != v10 )
  {
    if ( v34 )
    {
      if ( !v33 )
        goto LABEL_212;
      v33 ^= v11;
    }
    if ( v33 )
      goto LABEL_195;
LABEL_212:
    if ( v11 != v10 )
      goto LABEL_195;
  }
  v36 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 )
  {
    if ( v36 )
      v36 ^= a2;
    if ( v36 )
      v36 ^= v11;
  }
  v37 = v36 | v14 & 3;
  *(_QWORD *)(v11 + 16) = v37;
  *(_BYTE *)(v11 + 16) = v37 ^ (v37 ^ *(_BYTE *)(a2 + 16)) & 1;
  v38 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v38 )
  {
    v39 = a1[1] & 1;
    if ( v39 )
    {
      v38 ^= a2;
      v40 = *(_QWORD *)(v38 + 8);
      if ( v40 )
      {
        v110 = 0LL;
        if ( (v38 ^ v40) == a2 )
          v110 = 8LL;
        v42 = (unsigned __int64 *)(v38 + v110);
        v43 = *v42;
LABEL_224:
        if ( v43 )
          v43 ^= v38;
LABEL_54:
        if ( v43 != a2 )
          goto LABEL_195;
        v44 = v11 ^ v38;
        v45 = v11;
        if ( v39 )
          v45 = v44;
        *v42 = v45;
        goto LABEL_14;
      }
    }
    else
    {
      v40 = *(_QWORD *)(v38 + 8);
    }
    v41 = 0LL;
    if ( v40 == a2 )
      v41 = 8LL;
    v42 = (unsigned __int64 *)(v38 + v41);
    v43 = *v42;
    if ( !v39 )
      goto LABEL_54;
    goto LABEL_224;
  }
  v71 = a1[1];
  v72 = *a1;
  if ( (v71 & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_195;
    v72 ^= (unsigned __int64)a1;
  }
  if ( v72 != a2 )
    goto LABEL_195;
  v73 = v11;
  if ( (v71 & 1) != 0 )
    v73 = (unsigned __int64)a1 ^ v11;
  *a1 = v73;
LABEL_14:
  v15 = v14 & 1;
  if ( (a1[1] & 1) == 0 || !v6 )
  {
    LOBYTE(v16) = v13;
    *(_QWORD *)(v10 + 8LL * v13) = v6;
    if ( v6 )
      goto LABEL_66;
    if ( v15 )
      return v16;
    v46 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v47 = v10;
      v48 = !v13;
      v49 = *(_QWORD *)(v10 + 8 * v48);
      if ( (v46 & 1) != 0 && v49 )
        v50 = v10 ^ v49;
      else
        v50 = *(_QWORD *)(v10 + 8 * v48);
      v51 = (_QWORD *)(v50 + 16);
      if ( (*(_BYTE *)(v50 + 16) & 1) == 0 )
        goto LABEL_62;
      v74 = a1[1];
      v75 = *a1;
      if ( (v74 & 1) != 0 )
      {
        if ( v75 )
          v75 ^= (unsigned __int64)a1;
        else
          v75 = 0LL;
      }
      v76 = *v51 & 0xFFFFFFFFFFFFFFFCuLL;
      v77 = v74 & 1;
      if ( v77 && v76 )
        v76 ^= v50;
      if ( v76 != v10 )
        goto LABEL_195;
      if ( v77 && v49 )
        v49 ^= v10;
      if ( v49 != v50 )
        goto LABEL_195;
      v78 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v77 )
      {
        if ( !v78 )
        {
LABEL_192:
          if ( v75 != v10 )
            goto LABEL_195;
          v75 = v50;
          goto LABEL_136;
        }
        v78 ^= v10;
      }
      if ( !v78 )
        goto LABEL_192;
      v79 = *(_QWORD *)(v78 + 8);
      if ( v77 && v79 )
        v79 ^= v78;
      if ( v79 == v10 )
      {
        if ( v77 )
          v80 = v50 ^ v78;
        else
          v80 = v50;
        *(_QWORD *)(v78 + 8) = v80;
      }
      else
      {
        v105 = *(_QWORD *)v78;
        if ( v77 && v105 )
          v105 ^= v78;
        if ( v105 != v10 )
          goto LABEL_195;
        if ( v77 )
          v106 = v50 ^ v78;
        else
          v106 = v50;
        *(_QWORD *)v78 = v106;
      }
LABEL_136:
      if ( v77 && v78 )
      {
        *v51 &= 3uLL;
        v81 = (unsigned __int64 *)(v50 + 8LL * v13);
        *v51 |= v50 ^ v78;
        v82 = *v81;
      }
      else
      {
        *v51 &= 3uLL;
        v81 = (unsigned __int64 *)(v50 + 8LL * v13);
        *v51 |= v78;
        v82 = *v81;
        if ( !v77 )
          goto LABEL_138;
      }
      if ( !v82 )
        goto LABEL_139;
      v82 ^= v50;
LABEL_138:
      if ( v82 )
      {
        v102 = *(_QWORD *)(v82 + 16);
        v103 = v102 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v77 && v103 )
          v103 ^= v82;
        if ( v103 != v50 )
          goto LABEL_195;
        if ( v77 )
          v104 = v10 ^ v82;
        else
          v104 = v10;
        *(_QWORD *)(v82 + 16) = v104 | v102 & 3;
      }
LABEL_139:
      if ( v77 && v82 )
      {
        *(_QWORD *)(v10 + 8 * v48) = v10 ^ v82;
        v83 = v10 ^ v50;
LABEL_274:
        *v81 = v83;
        goto LABEL_142;
      }
      *(_QWORD *)(v10 + 8 * v48) = v82;
      v83 = v10 ^ v50;
      if ( v77 )
        goto LABEL_274;
      *v81 = v10;
      v83 = v50;
LABEL_142:
      *(_QWORD *)(v10 + 16) &= 3uLL;
      *(_QWORD *)(v10 + 16) |= v83;
      if ( (a1[1] & 1) != 0 )
      {
        v84 = 0LL;
        if ( v75 )
          v84 = (unsigned __int64)a1 ^ v75;
      }
      else
      {
        v84 = v75;
      }
      *a1 = v84;
      *(_BYTE *)v51 &= ~1u;
      *(_BYTE *)(v10 + 16) |= 1u;
      v46 = *((_BYTE *)a1 + 8);
      v50 = *(_QWORD *)(v10 + 8 * v48);
      if ( (v46 & 1) != 0 && v50 )
        v50 ^= v10;
LABEL_62:
      v52 = *(_QWORD *)v50;
      v53 = v46 & 1;
      if ( *(_QWORD *)v50 )
      {
        if ( v53 )
          v52 ^= v50;
        if ( (*(_BYTE *)(v52 + 16) & 1) != 0 )
          goto LABEL_82;
      }
      v54 = *(_QWORD *)(v50 + 8);
      if ( v54 )
      {
        if ( v53 )
          v54 ^= v50;
        if ( (*(_BYTE *)(v54 + 16) & 1) != 0 )
        {
LABEL_82:
          v57 = *(_QWORD *)(v50 + 8 * v48);
          if ( v53 )
          {
            if ( v57 )
            {
              v57 ^= v50;
              goto LABEL_83;
            }
          }
          else
          {
LABEL_83:
            if ( v57 && (*(_BYTE *)(v57 + 16) & 1) != 0 )
            {
LABEL_85:
              v58 = (_QWORD *)(v10 + 16);
              *(_BYTE *)(v50 + 16) ^= (*(_BYTE *)(v50 + 16) ^ *(_BYTE *)(v10 + 16)) & 1;
              *(_BYTE *)(v10 + 16) &= ~1u;
              *(_BYTE *)(v57 + 16) &= ~1u;
              v59 = *a1;
              if ( (a1[1] & 1) != 0 )
              {
                if ( v59 )
                  v59 ^= (unsigned __int64)a1;
                else
                  v59 = 0LL;
              }
              v60 = *(_QWORD *)(v50 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              v61 = a1[1] & 1;
              if ( (a1[1] & 1) != 0 && v60 )
                v60 ^= v50;
              if ( v60 == v10 )
              {
                v62 = *(_QWORD *)(v10 + 8 * v48);
                if ( (a1[1] & 1) != 0 && v62 )
                  v62 ^= v10;
                if ( v62 == v50 )
                {
                  v63 = *v58 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( (a1[1] & 1) == 0 )
                    goto LABEL_91;
                  if ( !v63 )
                    goto LABEL_190;
                  v63 ^= v10;
LABEL_91:
                  if ( v63 )
                  {
                    v64 = *(_QWORD *)(v63 + 8);
                    if ( (a1[1] & 1) != 0 && v64 )
                      v64 ^= v63;
                    if ( v64 == v10 )
                    {
                      if ( (a1[1] & 1) != 0 )
                        v65 = v50 ^ v63;
                      else
                        v65 = v50;
                      *(_QWORD *)(v63 + 8) = v65;
                      goto LABEL_97;
                    }
                    v100 = *(_QWORD *)v63;
                    if ( (a1[1] & 1) != 0 && v100 )
                      v100 ^= v63;
                    if ( v100 == v10 )
                    {
                      if ( (a1[1] & 1) != 0 )
                        v101 = v50 ^ v63;
                      else
                        v101 = v50;
                      *(_QWORD *)v63 = v101;
LABEL_97:
                      if ( v61 && v63 )
                      {
                        *(_QWORD *)(v50 + 16) &= 3uLL;
                        *(_QWORD *)(v50 + 16) |= v50 ^ v63;
                        v66 = (unsigned __int64 *)(v50 + 8LL * v13);
                        v67 = *v66;
LABEL_322:
                        if ( v67 )
                        {
                          v67 ^= v50;
                          goto LABEL_99;
                        }
                        goto LABEL_100;
                      }
                      *(_QWORD *)(v50 + 16) &= 3uLL;
                      *(_QWORD *)(v50 + 16) |= v63;
                      v66 = (unsigned __int64 *)(v50 + 8LL * v13);
                      v67 = *v66;
                      if ( v61 )
                        goto LABEL_322;
LABEL_99:
                      if ( !v67 )
                      {
LABEL_100:
                        if ( v61 && v67 )
                        {
                          *(_QWORD *)(v10 + 8 * v48) = v10 ^ v67;
                          v16 = v50 ^ v10;
LABEL_329:
                          *v66 = v16;
                        }
                        else
                        {
                          *(_QWORD *)(v10 + 8 * v48) = v67;
                          v16 = v50 ^ v10;
                          if ( v61 )
                            goto LABEL_329;
                          *v66 = v10;
                          v16 = v50;
                        }
                        *v58 &= 3uLL;
                        *v58 |= v16;
                        if ( (a1[1] & 1) == 0 )
                        {
                          *a1 = v59;
                          return v16;
                        }
                        v16 = (unsigned __int64)a1 ^ v59;
                        v112 = v59 == 0;
LABEL_331:
                        if ( !v112 )
                          v7 = v16;
                        goto LABEL_113;
                      }
                      v97 = *(_QWORD *)(v67 + 16);
                      v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
                      if ( v61 && v98 )
                        v98 ^= v67;
                      if ( v98 == v50 )
                      {
                        if ( v61 )
                          v99 = v10 ^ v67;
                        else
                          v99 = v10;
                        *(_QWORD *)(v67 + 16) = v99 | v97 & 3;
                        goto LABEL_100;
                      }
                    }
                  }
                  else
                  {
LABEL_190:
                    if ( v59 == v10 )
                    {
                      v59 = v50;
                      goto LABEL_97;
                    }
                  }
                }
              }
              goto LABEL_195;
            }
          }
          v85 = *(_QWORD *)(v50 + 8LL * v13);
          if ( v53 && v85 )
            v85 ^= v50;
          *(_BYTE *)(v85 + 16) &= ~1u;
          v86 = !v13;
          v87 = *(_QWORD *)(v85 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v88 = a1[1] & 1;
          if ( (a1[1] & 1) != 0 && v87 )
            v87 ^= v85;
          if ( v87 != v50 )
            goto LABEL_195;
          v89 = (unsigned __int64 *)(v50 + 8LL * v13);
          v90 = *v89;
          if ( (a1[1] & 1) != 0 && v90 )
            v90 ^= v50;
          if ( v90 != v85 )
            goto LABEL_195;
          v91 = *(_QWORD *)(v10 + 8 * v86);
          if ( (a1[1] & 1) != 0 && v91 )
            v91 ^= v10;
          if ( v91 != v50 )
            goto LABEL_195;
          v92 = *(_QWORD *)(v50 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (a1[1] & 1) != 0 && v92 )
            v92 ^= v50;
          if ( v92 != v10 )
            goto LABEL_195;
          v93 = v10 ^ v85;
          if ( (a1[1] & 1) == 0 )
          {
            *(_QWORD *)(v10 + 8 * v86) = v85;
            goto LABEL_157;
          }
          *(_QWORD *)(v10 + 8 * v86) = v93;
          if ( v10 )
          {
            *(_QWORD *)(v85 + 16) &= 3uLL;
            v94 = (unsigned __int64 *)(v85 + 8 * v86);
            *(_QWORD *)(v85 + 16) |= v93;
            v95 = *v94;
LABEL_298:
            if ( v95 )
            {
              v95 ^= v85;
              goto LABEL_158;
            }
          }
          else
          {
LABEL_157:
            *(_QWORD *)(v85 + 16) &= 3uLL;
            v94 = (unsigned __int64 *)(v85 + 8 * v86);
            *(_QWORD *)(v85 + 16) |= v10;
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
              if ( v108 != v85 )
                goto LABEL_195;
              if ( v88 )
                v109 = v50 ^ v95;
              else
                v109 = v50;
              *(_QWORD *)(v95 + 16) = v109 | v107 & 3;
            }
          }
          if ( v88 && v95 )
          {
            *v89 = v50 ^ v95;
            v96 = v50 ^ v85;
LABEL_304:
            *v94 = v96;
          }
          else
          {
            *v89 = v95;
            v96 = v50 ^ v85;
            if ( v88 )
              goto LABEL_304;
            *v94 = v50;
            v96 = v85;
          }
          *(_QWORD *)(v50 + 16) &= 3uLL;
          v57 = v50;
          *(_QWORD *)(v50 + 16) |= v96;
          v50 = v85;
          goto LABEL_85;
        }
      }
      v55 = *(_BYTE *)(v10 + 16);
      if ( (v55 & 1) != 0 )
      {
        LOBYTE(v16) = v55 & 0xFE;
        *(_BYTE *)(v10 + 16) = v16;
        *(_BYTE *)(v50 + 16) |= 1u;
        return v16;
      }
      *(_BYTE *)(v50 + 16) |= 1u;
      v46 = *((_BYTE *)a1 + 8);
      v16 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v46 & 1) != 0 && v16 )
        v10 ^= v16;
      else
        v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v10 )
        return v16;
      v70 = *(_QWORD *)(v10 + 8);
      if ( (v46 & 1) != 0 && v70 )
        v70 ^= v10;
      v13 = v70 == v47;
    }
  }
  *(_QWORD *)(v10 + 8LL * v13) = v6 ^ v10;
LABEL_66:
  v16 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v56 = a1[1] & 1;
  if ( v56 && v16 )
    v16 ^= v6;
  if ( v16 != v11 )
    goto LABEL_195;
  if ( v56 && v10 )
    v10 ^= v6;
  *(_QWORD *)(v6 + 16) = v10;
  return v16;
}
