/*
 * XREFs of RtlRbRemoveNode @ 0x14024B910
 * Callers:
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KasanDriverUnloadImage @ 0x14020B640 (KasanDriverUnloadImage.c)
 *     RtlpHpVsChunkSplit @ 0x14024A460 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14024B1C0 (RtlpHpVsChunkCoalesce.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B530 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DCD0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14024FA04 (RtlpHpSegFreeRangeRemove.c)
 *     KiRemoveTimer2 @ 0x140251790 (KiRemoveTimer2.c)
 *     MiRescanPageFileBitmapPortion @ 0x140293870 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140294A1C (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140295338 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140295740 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlpHpVaMgrAlloc @ 0x14030FCEC (RtlpHpVaMgrAlloc.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140318EE4 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140319010 (KiAbEntryUpdateOwnerTreePosition.c)
 *     RtlpHpLargeFree @ 0x140323C8C (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140333E84 (RtlpHpVsFreeChunkRemove.c)
 *     PfSnNameRemove @ 0x140353ACC (PfSnNameRemove.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x14035D4A4 (RtlpHpVaMgrRangeCoalesce.c)
 *     IoStopDiskIoAttributionForContext @ 0x140361F78 (IoStopDiskIoAttributionForContext.c)
 *     KiSetClockInterval @ 0x1403B1914 (KiSetClockInterval.c)
 *     MiRemoveSlabEntry @ 0x1403C1E2C (MiRemoveSlabEntry.c)
 *     VmpFaultEntryRemove @ 0x140466396 (VmpFaultEntryRemove.c)
 *     HalpPopCommonBufferEntry @ 0x140510030 (HalpPopCommonBufferEntry.c)
 *     KiResetClockInterval @ 0x14056FE84 (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405A4718 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlRemovePointerMapping @ 0x1405AAAB0 (RtlRemovePointerMapping.c)
 *     VmpMergeMemoryRanges @ 0x1405FA054 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405FAD84 (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C0210 (EtwpReleaseProviderTraitsReference.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FF80 (HvpViewMapPromoteRangeToMapping.c)
 *     PfProcessExitNotification @ 0x1407612C4 (PfProcessExitNotification.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1409EC4B0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC90C (EtwpRegisterPrivateSession.c)
 *     HvpViewMapShrinkStorage @ 0x140A1D3A8 (HvpViewMapShrinkStorage.c)
 *     MiLimitLoaderBlockHighMemory @ 0x140B62E80 (MiLimitLoaderBlockHighMemory.c)
 *     MiLimitLoaderBlockTotalMemory @ 0x140B62FBC (MiLimitLoaderBlockTotalMemory.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6E278 (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  char v2; // bl
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r9
  _RTL_BALANCED_NODE *v7; // r11
  unsigned __int64 v8; // rdx
  _RTL_BALANCED_NODE *v9; // rdi
  unsigned __int64 v10; // rcx
  _RTL_BALANCED_NODE *v11; // r11
  char v12; // cl
  PRTL_BALANCED_NODE v13; // rsi
  unsigned __int64 Min; // rax
  unsigned __int64 Root; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v16; // cl
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *v19; // rax
  _BOOL8 v20; // rbp
  _RTL_BALANCED_NODE *v21; // rcx
  char v22; // al
  unsigned __int64 ParentValue; // r9
  char v24; // al
  char v25; // r9
  $7D93978C745EB1C2D28075BAF55422B4 v26; // cl
  _RTL_BALANCED_NODE *v27; // r12
  __int64 v28; // rax
  _BOOL8 v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 v31; // r8
  _RTL_BALANCED_NODE *v32; // rdx
  unsigned __int64 *v33; // r9
  _RTL_BALANCED_NODE *v34; // rax
  char v35; // cl
  _RTL_BALANCED_NODE *v36; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v37; // al
  _RTL_BALANCED_NODE *v38; // rcx
  char v39; // bl
  _RTL_BALANCED_NODE *v40; // rcx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  char v43; // r14
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  char v47; // dl
  bool v48; // zf
  unsigned __int64 v49; // rdx
  _RTL_BALANCED_NODE *v50; // rax
  char v51; // cl
  unsigned __int64 v52; // rax
  char v53; // cl
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  char v58; // bl
  PRTL_BALANCED_NODE v59; // r15
  _RTL_BALANCED_NODE **v60; // r14
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  _RTL_BALANCED_NODE *v63; // rax
  char v64; // cl
  _RTL_BALANCED_NODE *v65; // r8
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rax
  int v68; // ecx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  _RTL_BALANCED_NODE **v73; // r9
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r8
  char v77; // cl
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rax
  int v81; // ecx
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  _RTL_BALANCED_NODE **v85; // r13
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // r8
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // r8
  _RTL_BALANCED_NODE *v91; // r9
  __int64 v92; // rbp
  unsigned __int64 v93; // rax
  int v94; // ecx
  __int64 v95; // r8
  _RTL_BALANCED_NODE **v96; // r15
  _RTL_BALANCED_NODE *v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rbp
  unsigned __int64 *v101; // r14
  _RTL_BALANCED_NODE *v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r8
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // r14
  unsigned __int64 v107; // r8
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rbp
  unsigned __int64 v111; // r8
  _RTL_BALANCED_NODE *v112; // rcx
  unsigned __int64 v113; // rbx
  unsigned __int64 v114; // rcx
  __int64 v115; // r14
  _RTL_BALANCED_NODE *v117; // [rsp+30h] [rbp+8h]

  v2 = (char)Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (v2 & 1) != 0 && v4 )
  {
    v6 = (unsigned __int64)Node->Children[1];
    v4 ^= (unsigned __int64)Node;
    v7 = (_RTL_BALANCED_NODE *)v4;
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
  if ( v4 )
    v8 = (unsigned __int64)v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 )
    v10 = v6;
  if ( !v10 )
  {
    v11 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v12 = v2 & 1;
    if ( (v2 & 1) != 0 && v11 )
      v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v11);
    v13 = Node;
    if ( !v11 )
    {
      if ( v8 )
        *(_QWORD *)(v8 + 16) = 0LL;
      Min = (unsigned __int64)Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( (Min & 1) != 0 && Root )
        Root ^= (unsigned __int64)Tree;
      if ( (PRTL_BALANCED_NODE)Root == Node )
      {
        if ( (Min & 1) != 0 )
        {
          v114 = 0LL;
          LOBYTE(Min) = (unsigned __int8)Tree ^ v8;
          if ( v8 )
            v114 = (unsigned __int64)Tree ^ v8;
          Tree->Min = (_RTL_BALANCED_NODE *)v114;
          v16 = ($7D93978C745EB1C2D28075BAF55422B4)(v114 | 1);
          Tree->0 = v16;
        }
        else
        {
          Tree->Min = (_RTL_BALANCED_NODE *)v8;
          v16 = ($7D93978C745EB1C2D28075BAF55422B4)v8;
        }
        if ( (*(_BYTE *)&v16 & 1) != 0 )
        {
          LOBYTE(Min) = (unsigned __int8)Tree ^ v8;
          if ( v8 )
            v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v8);
        }
        else
        {
          v9 = (_RTL_BALANCED_NODE *)v8;
        }
        goto LABEL_18;
      }
      goto LABEL_323;
    }
    v17 = (unsigned __int64)v11->Children[1];
    if ( v12 && v17 )
      v17 ^= (unsigned __int64)v11;
    if ( (PRTL_BALANCED_NODE)v17 == Node )
    {
      LODWORD(v20) = 1;
    }
    else
    {
      v18 = (unsigned __int64)v11->Children[0];
      if ( v12 && v18 )
        v18 ^= (unsigned __int64)v11;
      if ( (PRTL_BALANCED_NODE)v18 != Node )
        goto LABEL_323;
      v19 = Tree->Min;
      LODWORD(v20) = 0;
      if ( ((unsigned __int8)v19 & 1) != 0 )
      {
        if ( v19 == (_RTL_BALANCED_NODE *)1 )
          v21 = 0LL;
        else
          v21 = (_RTL_BALANCED_NODE *)((unsigned __int64)v19 ^ ((unsigned __int64)Tree | 1));
      }
      else
      {
        v21 = Tree->Min;
      }
      v2 = (char)Tree->Min;
      if ( v21 == Node )
      {
        v22 = (unsigned __int8)v19 & 1;
        if ( v8 )
        {
          if ( v22 )
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
        else if ( v22 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v11 | 1);
          v2 = (unsigned __int8)Tree ^ (unsigned __int8)v11 | 1;
        }
        else
        {
          Tree->Min = v11;
          v2 = (char)v11;
        }
      }
    }
    LOBYTE(ParentValue) = Node->0;
    v24 = v2;
    goto LABEL_36;
  }
  v38 = *(_RTL_BALANCED_NODE **)v6;
  LODWORD(v20) = 1;
  v39 = v2 & 1;
  v13 = (PRTL_BALANCED_NODE)v6;
  v11 = (_RTL_BALANCED_NODE *)v6;
  if ( *(_QWORD *)v6 )
  {
    LODWORD(v20) = 0;
    do
    {
      v11 = v13;
      if ( v39 && v38 )
        v13 = (PRTL_BALANCED_NODE)((unsigned __int64)v38 ^ (unsigned __int64)v13);
      else
        v13 = v38;
      v38 = v13->Children[0];
    }
    while ( v13->Children[0] );
  }
  if ( v39 && v4 )
    v40 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v13);
  else
    v40 = (_RTL_BALANCED_NODE *)v4;
  v13->Children[0] = v40;
  v41 = *(_QWORD *)(v4 + 16);
  v42 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
  v43 = *(_BYTE *)&Tree->0 & 1;
  if ( v43 && v42 )
    v42 ^= v4;
  if ( (PRTL_BALANCED_NODE)v42 != Node )
    goto LABEL_323;
  v44 = (unsigned __int64)v13;
  if ( v43 )
    v44 = v4 ^ (unsigned __int64)v13;
  *(_QWORD *)(v4 + 16) = v44 | v41 & 3;
  v45 = *(_QWORD *)(v6 + 16);
  v46 = v45 & 0xFFFFFFFFFFFFFFFCuLL;
  v47 = *(_BYTE *)&Tree->0 & 1;
  if ( v47 && v46 )
    v46 ^= v6;
  if ( (PRTL_BALANCED_NODE)v46 != Node )
    goto LABEL_323;
  v48 = v47 == 0;
  v49 = (unsigned __int64)v13;
  if ( !v48 )
    v49 = v6 ^ (unsigned __int64)v13;
  v50 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v13);
  *(_QWORD *)(v6 + 16) = v49 | v45 & 3;
  v8 = (unsigned __int64)v13->Children[1];
  v51 = *(_BYTE *)&Tree->0 & 1;
  if ( v51 && v8 )
  {
    v8 ^= (unsigned __int64)v13;
  }
  else if ( !v51 )
  {
    v50 = (_RTL_BALANCED_NODE *)v6;
  }
  ParentValue = v13->ParentValue;
  v13->Children[1] = v50;
  v52 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v53 = *(_BYTE *)&Tree->0 & 1;
  if ( v53 && v52 )
    v54 = (unsigned __int64)v13 ^ v52;
  else
    v54 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v54 != v11 )
  {
    if ( v53 )
    {
      if ( !v52 )
        goto LABEL_229;
      v52 ^= (unsigned __int64)v13;
    }
    if ( v52 )
      goto LABEL_323;
LABEL_229:
    if ( v13 != v11 )
      goto LABEL_323;
  }
  v55 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v53 )
  {
    if ( v55 )
      v55 ^= (unsigned __int64)Node;
    if ( v55 )
      v55 ^= (unsigned __int64)v13;
  }
  v56 = v55 | ParentValue & 3;
  v13->ParentValue = v56;
  v13->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v56 ^ (*(_BYTE *)&Node->0 ^ v56) & 1);
  v57 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v57 )
  {
    v112 = Tree->Min;
    v113 = (unsigned __int64)Tree->Root;
    v24 = (char)v112;
    if ( ((unsigned __int8)v112 & 1) != 0 && v113 )
      v113 ^= (unsigned __int64)Tree;
    if ( (PRTL_BALANCED_NODE)v113 != Node )
      goto LABEL_323;
    if ( ((unsigned __int8)v112 & 1) != 0 )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v13);
    }
    else
    {
      v24 = (char)Tree->Min;
      Tree->Root = v13;
    }
    goto LABEL_36;
  }
  v58 = *(_BYTE *)&Tree->0 & 1;
  if ( v58 )
  {
    v57 ^= (unsigned __int64)Node;
    v59 = *(PRTL_BALANCED_NODE *)(v57 + 8);
    if ( v59 )
    {
      v115 = 0LL;
      if ( (PRTL_BALANCED_NODE)(v57 ^ (unsigned __int64)v59) == Node )
        v115 = 8LL;
      v60 = (_RTL_BALANCED_NODE **)(v57 + v115);
      v61 = (unsigned __int64)*v60;
      goto LABEL_210;
    }
  }
  else
  {
    v59 = *(PRTL_BALANCED_NODE *)(v57 + 8);
  }
  v60 = (_RTL_BALANCED_NODE **)(v57 + 8LL * (v59 == Node));
  v61 = (unsigned __int64)*v60;
  if ( v58 )
  {
LABEL_210:
    if ( v61 )
      v61 ^= v57;
  }
  if ( (PRTL_BALANCED_NODE)v61 != Node )
    goto LABEL_323;
  v62 = (unsigned __int64)v13 ^ v57;
  v63 = v13;
  if ( v58 )
    v63 = (_RTL_BALANCED_NODE *)v62;
  *v60 = v63;
  v24 = (char)Tree->0;
LABEL_36:
  v25 = ParentValue & 1;
  if ( (v24 & 1) != 0 && v8 )
  {
    v11->Children[v20] = (_RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v11);
    goto LABEL_76;
  }
  LOBYTE(Min) = v20;
  v11->Children[v20] = (_RTL_BALANCED_NODE *)v8;
  if ( v8 )
  {
LABEL_76:
    Min = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v64 = *(_BYTE *)&Tree->0 & 1;
    if ( v64 && Min )
      Min ^= v8;
    if ( (PRTL_BALANCED_NODE)Min == v13 )
    {
      if ( v64 && v11 )
        v11 = (_RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v11);
      *(_QWORD *)(v8 + 16) = v11;
      return Min;
    }
    goto LABEL_323;
  }
  if ( v25 )
    return Min;
  while ( 1 )
  {
    v26 = Tree->0;
    v27 = v11;
    v28 = !v20;
    v29 = v20;
    v30 = v28;
    v31 = (unsigned __int64)v11->Children[v28];
    if ( (*(_BYTE *)&v26 & 1) != 0 && v31 )
      v32 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ v31);
    else
      v32 = v11->Children[v28];
    v33 = (unsigned __int64 *)&v32->16;
    if ( (*(_BYTE *)&v32->0 & 1) == 0 )
      goto LABEL_42;
    v79 = (unsigned __int64)Tree->Root;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)Tree;
    v80 = *v33 & 0xFFFFFFFFFFFFFFFCuLL;
    v117 = (_RTL_BALANCED_NODE *)v79;
    v81 = *(_BYTE *)&v26 & 1;
    if ( v81 && v80 )
      v80 ^= (unsigned __int64)v32;
    if ( (_RTL_BALANCED_NODE *)v80 != v11 )
      goto LABEL_323;
    if ( v81 && v31 )
      v31 ^= (unsigned __int64)v11;
    if ( (_RTL_BALANCED_NODE *)v31 != v32 )
      goto LABEL_323;
    v82 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v81 )
    {
      if ( !v82 )
      {
LABEL_186:
        if ( (_RTL_BALANCED_NODE *)v79 != v11 )
          goto LABEL_323;
        v79 = (unsigned __int64)v32;
        v117 = v32;
        goto LABEL_128;
      }
      v82 ^= (unsigned __int64)v11;
    }
    if ( !v82 )
      goto LABEL_186;
    v83 = *(_QWORD *)(v82 + 8);
    if ( v81 && v83 )
      v83 ^= v82;
    if ( (_RTL_BALANCED_NODE *)v83 == v11 )
    {
      v84 = v81 ? (unsigned __int64)v32 ^ v82 : (unsigned __int64)v32;
      *(_QWORD *)(v82 + 8) = v84;
    }
    else
    {
      v109 = *(_QWORD *)v82;
      if ( v81 && v109 )
        v109 ^= v82;
      if ( (_RTL_BALANCED_NODE *)v109 != v11 )
        goto LABEL_323;
      *(_QWORD *)v82 = v81 ? (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ v82) : v32;
    }
LABEL_128:
    if ( v81 && v82 )
    {
      v85 = &v32->Children[v20];
      *v33 = (unsigned __int64)v32 ^ v82 | *(_DWORD *)v33 & 3;
      v86 = (unsigned __int64)*v85;
    }
    else
    {
      v85 = &v32->Children[v20];
      *v33 = v82 | *(_DWORD *)v33 & 3;
      v86 = (unsigned __int64)*v85;
      if ( !v81 )
        goto LABEL_130;
    }
    if ( !v86 )
    {
LABEL_131:
      v87 = (unsigned __int64)v11 ^ v86;
      goto LABEL_132;
    }
    v86 ^= (unsigned __int64)v32;
LABEL_130:
    if ( !v86 )
      goto LABEL_131;
    v106 = *(_QWORD *)(v86 + 16);
    v107 = v106 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v81 && v107 )
      v107 ^= v86;
    if ( (_RTL_BALANCED_NODE *)v107 != v32 )
      goto LABEL_323;
    v87 = (unsigned __int64)v11 ^ v86;
    *(_QWORD *)(v86 + 16) = v81 ? v87 | v106 & 3 : (unsigned __int64)v11 | v106 & 3;
    v79 = (unsigned __int64)v117;
LABEL_132:
    if ( v81 && v86 )
    {
      v11->Children[v30] = (_RTL_BALANCED_NODE *)v87;
      v88 = (unsigned __int64)v11 ^ (unsigned __int64)v32;
LABEL_265:
      *v85 = (_RTL_BALANCED_NODE *)v88;
      goto LABEL_135;
    }
    v11->Children[v30] = (_RTL_BALANCED_NODE *)v86;
    v88 = (unsigned __int64)v11 ^ (unsigned __int64)v32;
    if ( v81 )
      goto LABEL_265;
    *v85 = v11;
    v88 = (unsigned __int64)v32;
LABEL_135:
    v11->ParentValue = v88 | *(_DWORD *)&v11->0 & 3;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( v79 )
        v79 ^= (unsigned __int64)Tree;
      else
        v79 = 0LL;
    }
    Tree->Root = (_RTL_BALANCED_NODE *)v79;
    *(_BYTE *)v33 &= ~1u;
    *(_BYTE *)&v11->0 |= 1u;
    v26 = Tree->0;
    v32 = v11->Children[v30];
    if ( (*(_BYTE *)&v26 & 1) != 0 && v32 )
      v32 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ (unsigned __int64)v32);
LABEL_42:
    v34 = v32->Children[0];
    v35 = *(_BYTE *)&v26 & 1;
    if ( v32->Children[0] )
    {
      if ( v35 )
        v34 = (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ (unsigned __int64)v34);
      if ( (*(_BYTE *)&v34->0 & 1) != 0 )
        break;
    }
    v36 = v32->Children[1];
    if ( v36 )
    {
      if ( v35 )
        v36 = (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ (unsigned __int64)v36);
      if ( (*(_BYTE *)&v36->0 & 1) != 0 )
        break;
    }
    v37 = v11->0;
    if ( (*(_BYTE *)&v37 & 1) != 0 )
    {
      LOBYTE(Min) = *(_BYTE *)&v37 & 0xFE;
      v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Min;
      *(_BYTE *)&v32->0 |= 1u;
      return Min;
    }
    *(_BYTE *)&v32->0 |= 1u;
    Min = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v77 = *(_BYTE *)&Tree->0 & 1;
    if ( v77 && Min )
      v11 = (_RTL_BALANCED_NODE *)(Min ^ (unsigned __int64)v11);
    else
      v11 = (_RTL_BALANCED_NODE *)(v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v11 )
      return Min;
    v78 = (unsigned __int64)v11->Children[1];
    if ( v77 && v78 )
      v78 ^= (unsigned __int64)v11;
    v20 = v78 == (_QWORD)v27;
  }
  v65 = v32->Children[v30];
  if ( v35 )
  {
    if ( v65 )
    {
      v65 = (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ (unsigned __int64)v65);
      goto LABEL_84;
    }
LABEL_145:
    v91 = v32->Children[v20];
    if ( v35 && v91 )
      v91 = (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ (unsigned __int64)v91);
    *(_BYTE *)&v91->0 &= ~1u;
    v92 = (unsigned int)v20 ^ 1;
    v93 = v91->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v94 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v93 )
      v93 ^= (unsigned __int64)v91;
    if ( (_RTL_BALANCED_NODE *)v93 != v32 )
      goto LABEL_323;
    v95 = (unsigned int)v92;
    v96 = &v32->Children[(unsigned int)v92 ^ 1LL];
    v97 = *v96;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v97 )
      v97 = (_RTL_BALANCED_NODE *)((unsigned __int64)v32 ^ (unsigned __int64)v97);
    if ( v97 != v91 )
      goto LABEL_323;
    v98 = (unsigned __int64)v11->Children[v92];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v98 )
      v98 ^= (unsigned __int64)v11;
    if ( (_RTL_BALANCED_NODE *)v98 != v32 )
      goto LABEL_323;
    v99 = v32->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v99 )
      v99 ^= (unsigned __int64)v32;
    if ( (_RTL_BALANCED_NODE *)v99 != v11 )
      goto LABEL_323;
    v100 = (unsigned __int64)v91 ^ (unsigned __int64)v11;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v11->Children[v95] = (_RTL_BALANCED_NODE *)v100;
      if ( v11 )
      {
        v101 = (unsigned __int64 *)&v91->Children[v95];
        v91->ParentValue = v100 | *(_DWORD *)&v91->0 & 3;
        v102 = (_RTL_BALANCED_NODE *)*v101;
LABEL_282:
        if ( !v102 )
          goto LABEL_158;
        v102 = (_RTL_BALANCED_NODE *)((unsigned __int64)v91 ^ (unsigned __int64)v102);
LABEL_157:
        if ( v102 )
        {
          v110 = v102->ParentValue;
          v111 = v110 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v94 && v111 )
            v111 ^= (unsigned __int64)v102;
          if ( (_RTL_BALANCED_NODE *)v111 != v91 )
            goto LABEL_323;
          v103 = (unsigned __int64)v102 ^ (unsigned __int64)v32;
          if ( v94 )
            v102->ParentValue = v103 | v110 & 3;
          else
            v102->ParentValue = (unsigned __int64)v32 | v110 & 3;
LABEL_159:
          if ( v94 && v102 )
          {
            *v96 = (_RTL_BALANCED_NODE *)v103;
            v104 = (unsigned __int64)v91 ^ (unsigned __int64)v32;
          }
          else
          {
            *v96 = v102;
            v104 = (unsigned __int64)v91 ^ (unsigned __int64)v32;
            if ( !v94 )
            {
              *v101 = (unsigned __int64)v32;
              v104 = (unsigned __int64)v91;
LABEL_162:
              v105 = v104 | *(_DWORD *)&v32->0 & 3;
              v65 = v32;
              v32->ParentValue = v105;
              v32 = v91;
              goto LABEL_86;
            }
          }
          *v101 = v104;
          goto LABEL_162;
        }
LABEL_158:
        v103 = (unsigned __int64)v32 ^ (unsigned __int64)v102;
        goto LABEL_159;
      }
    }
    else
    {
      v11->Children[v95] = v91;
    }
    v101 = (unsigned __int64 *)&v91->Children[v95];
    v91->ParentValue = (unsigned __int64)v11 | *(_DWORD *)&v91->0 & 3;
    v102 = (_RTL_BALANCED_NODE *)*v101;
    if ( !v94 )
      goto LABEL_157;
    goto LABEL_282;
  }
LABEL_84:
  if ( !v65 || (*(_BYTE *)&v65->0 & 1) == 0 )
    goto LABEL_145;
LABEL_86:
  *(_BYTE *)&v32->0 ^= (*(_BYTE *)&v32->0 ^ *(_BYTE *)&v11->0) & 1;
  *(_BYTE *)&v11->0 &= ~1u;
  *(_BYTE *)&v65->0 &= ~1u;
  v66 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && v66 )
    v66 ^= (unsigned __int64)Tree;
  v67 = v32->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v68 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v67 )
    v67 ^= (unsigned __int64)v32;
  if ( (_RTL_BALANCED_NODE *)v67 != v11 )
    goto LABEL_323;
  v69 = (unsigned __int64)v11->Children[v30];
  if ( ((__int64)Tree->Min & 1) != 0 && v69 )
    v69 ^= (unsigned __int64)v11;
  if ( (_RTL_BALANCED_NODE *)v69 != v32 )
    goto LABEL_323;
  v70 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_92;
  if ( !v70 )
    goto LABEL_184;
  v70 ^= (unsigned __int64)v11;
LABEL_92:
  if ( !v70 )
  {
LABEL_184:
    if ( (_RTL_BALANCED_NODE *)v66 == v11 )
    {
      v66 = (unsigned __int64)v32;
      goto LABEL_98;
    }
    goto LABEL_323;
  }
  v71 = *(_QWORD *)(v70 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v71 )
    v71 ^= v70;
  if ( (_RTL_BALANCED_NODE *)v71 != v11 )
  {
    v108 = *(_QWORD *)v70;
    if ( ((__int64)Tree->Min & 1) != 0 && v108 )
      v108 ^= v70;
    if ( (_RTL_BALANCED_NODE *)v108 == v11 )
    {
      if ( ((__int64)Tree->Min & 1) != 0 )
        *(_QWORD *)v70 = (unsigned __int64)v32 ^ v70;
      else
        *(_QWORD *)v70 = v32;
      goto LABEL_98;
    }
    goto LABEL_323;
  }
  if ( ((__int64)Tree->Min & 1) != 0 )
    v72 = (unsigned __int64)v32 ^ v70;
  else
    v72 = (unsigned __int64)v32;
  *(_QWORD *)(v70 + 8) = v72;
LABEL_98:
  if ( v68 && v70 )
  {
    v73 = &v32->Children[v29];
    v32->ParentValue = (unsigned __int64)v32 ^ v70 | *(_DWORD *)&v32->0 & 3;
    v74 = (unsigned __int64)*v73;
LABEL_238:
    if ( v74 )
    {
      v74 ^= (unsigned __int64)v32;
      goto LABEL_100;
    }
    goto LABEL_101;
  }
  v73 = &v32->Children[v29];
  v32->ParentValue = v70 | *(_DWORD *)&v32->0 & 3;
  v74 = (unsigned __int64)*v73;
  if ( v68 )
    goto LABEL_238;
LABEL_100:
  if ( !v74 )
  {
LABEL_101:
    v75 = (unsigned __int64)v11 ^ v74;
    goto LABEL_102;
  }
  v89 = *(_QWORD *)(v74 + 16);
  v90 = v89 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v68 && v90 )
    v90 ^= v74;
  if ( (_RTL_BALANCED_NODE *)v90 != v32 )
LABEL_323:
    __fastfail(0x1Du);
  v75 = (unsigned __int64)v11 ^ v74;
  if ( v68 )
    *(_QWORD *)(v74 + 16) = v75 | v89 & 3;
  else
    *(_QWORD *)(v74 + 16) = (unsigned __int64)v11 | v89 & 3;
LABEL_102:
  if ( v68 && v74 )
  {
    v11->Children[v30] = (_RTL_BALANCED_NODE *)v75;
    v76 = (unsigned __int64)v11 ^ (unsigned __int64)v32;
LABEL_256:
    *v73 = (_RTL_BALANCED_NODE *)v76;
  }
  else
  {
    v11->Children[v30] = (_RTL_BALANCED_NODE *)v74;
    v76 = (unsigned __int64)v11 ^ (unsigned __int64)v32;
    if ( v68 )
      goto LABEL_256;
    *v73 = v11;
    v76 = (unsigned __int64)v32;
  }
  Min = v76 | *(_DWORD *)&v11->0 & 3;
  v11->ParentValue = Min;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( v66 )
      v9 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v66);
  }
  else
  {
    v9 = (_RTL_BALANCED_NODE *)v66;
  }
LABEL_18:
  Tree->Root = v9;
  return Min;
}
