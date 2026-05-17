/*
 * XREFs of RtlRbRemoveNode @ 0x180038910
 * Callers:
 *     EtwpRemoveRegistrationFromTable @ 0x18002FEE8 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180034954 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180034ED0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkCoalesce @ 0x180037110 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x180037F50 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVaMgrAlloc @ 0x18004A7C0 (RtlpHpVaMgrAlloc.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FA98 (RtlpDecRefWnfNameSubscription.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18005EE80 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x180064B34 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180069FBC (RtlpHpVsFreeChunkRemove.c)
 *     LdrpUnloadNode @ 0x18006B520 (LdrpUnloadNode.c)
 *     RtlRemovePointerMapping @ 0x1801025A0 (RtlRemovePointerMapping.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(__int64 a1, unsigned __int64 a2)
{
  char v2; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  char v12; // al
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  BOOL v15; // edi
  __int64 v16; // r9
  char v17; // al
  char v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  char v24; // al
  unsigned __int64 v25; // rcx
  char v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // r11
  unsigned __int64 v29; // rcx
  char v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  char v34; // dl
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rax
  char v39; // cl
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  char v44; // r11
  unsigned __int64 v45; // r14
  unsigned __int64 *v46; // r14
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r12
  _BOOL8 v51; // rsi
  __int64 v52; // r8
  char v53; // al
  __int64 v54; // rdx
  unsigned __int64 *v55; // r15
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  char v58; // al
  __int64 v59; // rdx
  char v60; // al
  char v61; // cl
  unsigned __int64 v62; // rcx
  char v63; // cl
  unsigned __int64 v64; // r8
  _QWORD *v65; // rdx
  unsigned __int64 v66; // r11
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // r9
  unsigned __int64 *v72; // r9
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rdx
  unsigned int v77; // edi
  unsigned __int64 v78; // rax
  int v79; // r8d
  __int64 v80; // r9
  unsigned __int64 *v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 *v86; // r11
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // r11
  unsigned __int64 v92; // rcx
  char v93; // cl
  __int64 v94; // rax
  __int64 v95; // r9
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r13
  unsigned __int64 v98; // rax
  int v99; // r9d
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  unsigned __int64 *v103; // r11
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rax
  unsigned __int64 *v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rsi
  unsigned __int64 v110; // rdi
  unsigned __int64 v111; // r14
  __int64 v112; // rsi
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // r14
  __int64 v115; // rdx
  unsigned __int64 v116; // rdx
  __int64 v117; // rsi
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // r14
  _QWORD *v120; // rax
  __int64 v121; // r14
  unsigned __int64 v122; // rcx
  bool v123; // zf
  _BOOL8 v125; // [rsp+30h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 8);
  v5 = *(_QWORD *)a2;
  if ( (v2 & 1) != 0 && v5 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v5 ^= a2;
    v7 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)a2;
    if ( (v2 & 1) == 0 )
      goto LABEL_3;
  }
  if ( v6 )
    v6 ^= a2;
LABEL_3:
  v8 = v6;
  if ( v5 )
    v8 = v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( v5 )
    v10 = v6;
  if ( v10 )
  {
    v25 = *(_QWORD *)v6;
    v15 = 1;
    v26 = v2 & 1;
    v13 = v6;
    v11 = v6;
    if ( *(_QWORD *)v6 )
    {
      v15 = 0;
      do
      {
        v11 = v13;
        if ( v26 && v25 )
          v13 ^= v25;
        else
          v13 = v25;
        v25 = *(_QWORD *)v13;
      }
      while ( *(_QWORD *)v13 );
    }
    if ( v26 && v5 )
      v27 = v5 ^ v13;
    else
      v27 = v5;
    *(_QWORD *)v13 = v27;
    v28 = *(_QWORD *)(v5 + 16);
    v29 = v28 & 0xFFFFFFFFFFFFFFFCuLL;
    v30 = *(_BYTE *)(a1 + 8) & 1;
    if ( v30 && v29 )
      v29 ^= v5;
    if ( v29 != a2 )
      goto LABEL_195;
    v31 = v13;
    if ( v30 )
      v31 = v5 ^ v13;
    *(_QWORD *)(v5 + 16) = v31 | v28 & 3;
    v32 = *(_QWORD *)(v6 + 16);
    v33 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
    v34 = *(_BYTE *)(a1 + 8) & 1;
    if ( v34 && v33 )
      v33 ^= v6;
    if ( v33 != a2 )
      goto LABEL_195;
    v123 = v34 == 0;
    v35 = v13;
    if ( !v123 )
      v35 = v6 ^ v13;
    v36 = v13 ^ v6;
    *(_QWORD *)(v6 + 16) = v35 | v32 & 3;
    v8 = *(_QWORD *)(v13 + 8);
    v37 = *(_BYTE *)(a1 + 8) & 1;
    if ( v37 && v8 )
    {
      v8 ^= v13;
    }
    else if ( !v37 )
    {
      v36 = v6;
    }
    v16 = *(_QWORD *)(v13 + 16);
    *(_QWORD *)(v13 + 8) = v36;
    v38 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    v39 = *(_BYTE *)(a1 + 8) & 1;
    if ( v39 && v38 )
      v40 = v13 ^ v38;
    else
      v40 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v40 == v11 )
    {
LABEL_48:
      v41 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v39 )
      {
        if ( v41 )
          v41 ^= a2;
        if ( v41 )
          v41 ^= v13;
      }
      v42 = v41 | v16 & 3;
      *(_QWORD *)(v13 + 16) = v42;
      *(_BYTE *)(v13 + 16) = v42 ^ (*(_BYTE *)(a2 + 16) ^ v42) & 1;
      v43 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v43 )
      {
        v90 = *(_QWORD *)(a1 + 8);
        v91 = *(_QWORD *)a1;
        v17 = v90;
        if ( (v90 & 1) != 0 && v91 )
          v91 ^= a1;
        if ( v91 != a2 )
          goto LABEL_195;
        if ( (v90 & 1) != 0 )
        {
          v92 = a1 ^ v13;
        }
        else
        {
          v17 = *(_QWORD *)(a1 + 8);
          v92 = v13;
        }
        *(_QWORD *)a1 = v92;
        goto LABEL_14;
      }
      v44 = *(_BYTE *)(a1 + 8) & 1;
      if ( v44 )
      {
        v43 ^= a2;
        v45 = *(_QWORD *)(v43 + 8);
        if ( v45 )
        {
          v120 = (_QWORD *)(v45 ^ v43);
          v121 = 0LL;
          if ( v120 == (_QWORD *)a2 )
            v121 = 8LL;
          v46 = (unsigned __int64 *)(v43 + v121);
          v47 = *v46;
          goto LABEL_227;
        }
      }
      else
      {
        v45 = *(_QWORD *)(v43 + 8);
      }
      v46 = (unsigned __int64 *)(v43 + 8LL * (v45 == a2));
      v47 = *v46;
      if ( !v44 )
      {
LABEL_53:
        if ( v47 != a2 )
          goto LABEL_195;
        v48 = v13 ^ v43;
        v49 = v13;
        if ( v44 )
          v49 = v48;
        *v46 = v49;
        v17 = *(_BYTE *)(a1 + 8);
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
    if ( v13 != v11 )
      goto LABEL_195;
    goto LABEL_48;
  }
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = v2 & 1;
  if ( (v2 & 1) != 0 && v11 )
    v11 ^= a2;
  v13 = a2;
  if ( v11 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    if ( v12 && v14 )
      v14 ^= v11;
    if ( v14 == a2 )
    {
      v15 = 1;
LABEL_13:
      LOBYTE(v16) = *(_BYTE *)(a2 + 16);
      v17 = v2;
LABEL_14:
      v18 = v16 & 1;
      if ( (v17 & 1) != 0 && v8 )
      {
        *(_QWORD *)(v11 + 8LL * v15) = v8 ^ v11;
LABEL_64:
        v19 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v61 = *(_BYTE *)(a1 + 8) & 1;
        if ( v61 && v19 )
          v19 ^= v8;
        if ( v19 != v13 )
          goto LABEL_195;
        if ( v61 && v11 )
          v11 ^= v8;
        *(_QWORD *)(v8 + 16) = v11;
        return v19;
      }
      LOBYTE(v19) = v15;
      *(_QWORD *)(v11 + 8LL * v15) = v8;
      if ( v8 )
        goto LABEL_64;
      if ( v18 )
        return v19;
      while ( 1 )
      {
        v50 = v11;
        v51 = v15;
        v125 = v15;
        v52 = 8 * !v15;
        v53 = *(_BYTE *)(a1 + 8);
        v54 = *(_QWORD *)(v52 + v11);
        v55 = (unsigned __int64 *)(v52 + v11);
        if ( (v53 & 1) != 0 && v54 )
          v56 = v11 ^ v54;
        else
          v56 = *(_QWORD *)(v52 + v11);
        if ( (*(_BYTE *)(v56 + 16) & 1) == 0 )
          goto LABEL_60;
        v97 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v97 )
          v97 ^= a1;
        v98 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v99 = *(_BYTE *)(a1 + 8) & 1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v98 )
          v98 ^= v56;
        if ( v98 != v11 )
          goto LABEL_195;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v54 )
          v54 ^= v11;
        if ( v54 != v56 )
          goto LABEL_195;
        v100 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( !v100 )
          {
LABEL_193:
            if ( v97 != v11 )
              goto LABEL_195;
            v97 = v56;
            goto LABEL_158;
          }
          v100 ^= v11;
        }
        if ( !v100 )
          goto LABEL_193;
        v101 = *(_QWORD *)(v100 + 8);
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v101 )
          v101 ^= v100;
        if ( v101 == v11 )
        {
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            v102 = v56 ^ v100;
          else
            v102 = v56;
          *(_QWORD *)(v100 + 8) = v102;
        }
        else
        {
          v115 = *(_QWORD *)v100;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v115 )
            v115 ^= v100;
          if ( v115 != v11 )
            goto LABEL_195;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
            v116 = v56 ^ v100;
          else
            v116 = v56;
          *(_QWORD *)v100 = v116;
        }
LABEL_158:
        if ( v99 && v100 )
        {
          *(_QWORD *)(v56 + 16) &= 3uLL;
          v103 = (unsigned __int64 *)(v56 + 8LL * v15);
          *(_QWORD *)(v56 + 16) |= v56 ^ v100;
          v104 = *v103;
        }
        else
        {
          *(_QWORD *)(v56 + 16) &= 3uLL;
          v103 = (unsigned __int64 *)(v56 + 8LL * v15);
          *(_QWORD *)(v56 + 16) |= v100;
          v104 = *v103;
          if ( !v99 )
            goto LABEL_160;
        }
        if ( !v104 )
        {
LABEL_161:
          v105 = v11 ^ v104;
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
        v105 = v104 ^ v11;
        if ( v99 )
          v119 = v104 ^ v11;
        else
          v119 = v11;
        *(_QWORD *)(v104 + 16) = v119 | v117 & 3;
        v51 = v15;
LABEL_162:
        if ( v99 && v104 )
        {
          *v55 = v105;
          v106 = v56 ^ v11;
LABEL_275:
          *v103 = v106;
          goto LABEL_165;
        }
        *v55 = v104;
        v106 = v56 ^ v11;
        if ( v99 )
          goto LABEL_275;
        *v103 = v11;
        v106 = v56;
LABEL_165:
        *(_QWORD *)(v11 + 16) &= 3uLL;
        *(_QWORD *)(v11 + 16) |= v106;
        v107 = (unsigned __int64 *)a1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          v108 = 0LL;
          if ( v97 )
            v108 = v97 ^ a1;
          v107 = (unsigned __int64 *)a1;
        }
        else
        {
          v108 = v97;
        }
        *v107 = v108;
        *(_BYTE *)(v56 + 16) &= ~1u;
        *(_BYTE *)(v11 + 16) |= 1u;
        v53 = *(_BYTE *)(a1 + 8);
        v56 = *v55;
        if ( (v53 & 1) != 0 && v56 )
          v56 ^= v11;
LABEL_60:
        v57 = *(_QWORD *)v56;
        v58 = v53 & 1;
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
            v64 = *(_QWORD *)(v52 + v56);
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
                v65 = (_QWORD *)(v11 + 16);
                *(_BYTE *)(v56 + 16) ^= (*(_BYTE *)(v11 + 16) ^ *(_BYTE *)(v56 + 16)) & 1;
                *(_BYTE *)(v11 + 16) &= ~1u;
                *(_BYTE *)(v64 + 16) &= ~1u;
                v19 = *(_QWORD *)(a1 + 8);
                v66 = *(_QWORD *)a1;
                if ( (v19 & 1) != 0 && v66 )
                  v66 ^= a1;
                v67 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                LODWORD(v19) = v19 & 1;
                if ( (_DWORD)v19 && v67 )
                  v67 ^= v56;
                if ( v67 == v11 )
                {
                  v68 = *v55;
                  if ( (_DWORD)v19 && v68 )
                    v68 ^= v11;
                  if ( v68 == v56 )
                  {
                    v69 = *v65 & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !(_DWORD)v19 )
                      goto LABEL_94;
                    if ( !v69 )
                      goto LABEL_176;
                    v69 ^= v11;
LABEL_94:
                    if ( v69 )
                    {
                      v70 = *(_QWORD *)(v69 + 8);
                      if ( (_DWORD)v19 && v70 )
                        v70 ^= v69;
                      if ( v70 == v11 )
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
                      if ( v95 == v11 )
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
                          v74 = v11 ^ v73;
                          goto LABEL_104;
                        }
                        v109 = *(_QWORD *)(v73 + 16);
                        v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
                        if ( (_DWORD)v19 && v110 )
                          v110 ^= v73;
                        if ( v110 == v56 )
                        {
                          v74 = v73 ^ v11;
                          if ( (_DWORD)v19 )
                            v111 = v73 ^ v11;
                          else
                            v111 = v11;
                          *(_QWORD *)(v73 + 16) = v111 | v109 & 3;
LABEL_104:
                          if ( (_DWORD)v19 && v73 )
                          {
                            *v55 = v74;
                            v75 = v56 ^ v11;
LABEL_330:
                            *v72 = v75;
                          }
                          else
                          {
                            *v55 = v73;
                            v75 = v56 ^ v11;
                            if ( (_DWORD)v19 )
                              goto LABEL_330;
                            *v72 = v11;
                            v75 = v56;
                          }
                          *v65 &= 3uLL;
                          *v65 |= v75;
                          if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
                          {
                            *(_QWORD *)a1 = v66;
                            return v19;
                          }
                          v19 = v66 ^ a1;
                          v123 = v66 == 0;
LABEL_332:
                          if ( !v123 )
                            v9 = v19;
                          goto LABEL_76;
                        }
                      }
                    }
                    else
                    {
LABEL_176:
                      if ( v66 == v11 )
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
            v79 = *(_BYTE *)(a1 + 8) & 1;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v78 )
              v78 ^= v76;
            if ( v78 != v56 )
              goto LABEL_195;
            v80 = v77;
            v81 = (unsigned __int64 *)(v56 + 8 * (v77 ^ 1LL));
            v82 = *v81;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v82 )
              v82 ^= v56;
            if ( v82 != v76 )
              goto LABEL_195;
            v83 = *(_QWORD *)(v11 + 8 * v80);
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v83 )
              v83 ^= v11;
            if ( v83 != v56 )
              goto LABEL_195;
            v84 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v84 )
              v84 ^= v56;
            if ( v84 != v11 )
              goto LABEL_195;
            v85 = v76 ^ v11;
            if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
            {
              *(_QWORD *)(v11 + 8 * v80) = v76;
              goto LABEL_124;
            }
            *(_QWORD *)(v11 + 8 * v80) = v85;
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
            *(_QWORD *)(v76 + 16) |= v11;
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
        v60 = *(_BYTE *)(v11 + 16);
        if ( (v60 & 1) != 0 )
        {
          LOBYTE(v19) = v60 & 0xFE;
          *(_BYTE *)(v11 + 16) = v19;
          *(_BYTE *)(v56 + 16) |= 1u;
          return v19;
        }
        *(_BYTE *)(v56 + 16) |= 1u;
        v19 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v93 = *(_BYTE *)(a1 + 8) & 1;
        if ( v93 && v19 )
          v11 ^= v19;
        else
          v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v11 )
          return v19;
        v94 = *(_QWORD *)(v11 + 8);
        if ( v93 && v94 )
          v94 ^= v11;
        v15 = v94 == v50;
      }
    }
    v20 = *(_QWORD *)v11;
    if ( v12 && v20 )
      v20 ^= v11;
    if ( v20 != a2 )
      goto LABEL_195;
    v21 = *(_QWORD *)(a1 + 8);
    v15 = 0;
    if ( (v21 & 1) != 0 )
    {
      if ( v21 == 1 )
      {
        v2 = 1;
        goto LABEL_13;
      }
      v22 = v21 ^ (a1 | 1);
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 8);
    }
    v2 = *(_QWORD *)(a1 + 8);
    if ( v22 == a2 )
    {
      v23 = v21 & 1;
      if ( v8 )
      {
        if ( v23 )
        {
          *(_QWORD *)(a1 + 8) = a1 ^ v8;
          *(_BYTE *)(a1 + 8) = a1 ^ v8 | 1;
          v2 = a1 ^ v8 | 1;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v8;
          v2 = v8;
        }
      }
      else
      {
        if ( v23 )
        {
          *(_QWORD *)(a1 + 8) = a1 ^ v11;
          v24 = a1 ^ v11 | 1;
          *(_BYTE *)(a1 + 8) = v24;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v11;
          v24 = v11;
        }
        v2 = v24;
      }
    }
    goto LABEL_13;
  }
  if ( v8 )
    *(_QWORD *)(v8 + 16) = 0LL;
  v19 = *(_QWORD *)(a1 + 8);
  v62 = *(_QWORD *)a1;
  if ( (v19 & 1) != 0 && v62 )
    v62 ^= a1;
  if ( v62 != a2 )
    goto LABEL_195;
  if ( (v19 & 1) != 0 )
  {
    v122 = 0LL;
    LOBYTE(v19) = a1 ^ v8;
    if ( v8 )
      v122 = a1 ^ v8;
    *(_QWORD *)(a1 + 8) = v122;
    v63 = v122 | 1;
    *(_BYTE *)(a1 + 8) = v63;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v8;
    v63 = v8;
  }
  if ( (v63 & 1) != 0 )
  {
    v19 = a1 ^ v8;
    v123 = v8 == 0;
    goto LABEL_332;
  }
  v9 = v8;
LABEL_76:
  *(_QWORD *)a1 = v9;
  return v19;
}
