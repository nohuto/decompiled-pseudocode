/*
 * XREFs of RtlRbInsertNodeEx @ 0x14024CCA0
 * Callers:
 *     RtlpHpVsFreeChunkInsert @ 0x140249E80 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x14024A460 (RtlpHpVsChunkSplit.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     RtlpHpVsChunkFree @ 0x14024D5E0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E6A0 (RtlpHpSegPageRangeShrink.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14024F590 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14024F8D0 (RtlpHpSegFreeRangeInsert.c)
 *     MiRescanPageFileBitmapPortion @ 0x140293870 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140294A1C (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140295740 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     MiInsertSlabEntry @ 0x1402E7080 (MiInsertSlabEntry.c)
 *     KiInsertSchedulingGroupQueue @ 0x140308A1C (KiInsertSchedulingGroupQueue.c)
 *     PfSnGetFileInformation @ 0x1403140E0 (PfSnGetFileInformation.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140318EE4 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140319010 (KiAbEntryUpdateOwnerTreePosition.c)
 *     RtlpHpLargeAlloc @ 0x140323EBC (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x14035D40C (RtlpHpVaMgrFree.c)
 *     KasanDriverLoadImage @ 0x14035FA60 (KasanDriverLoadImage.c)
 *     IoStartDiskIoAttributionForContext @ 0x140361E68 (IoStartDiskIoAttributionForContext.c)
 *     HalpAllocateCommonBufferEntry @ 0x14038F574 (HalpAllocateCommonBufferEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x140394350 (MiInitializePagefileBitmapsCache.c)
 *     KiSetClockInterval @ 0x1403B1914 (KiSetClockInterval.c)
 *     VmpFaultEntryInsert @ 0x1404661D8 (VmpFaultEntryInsert.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405A44C8 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x1405AA380 (RtlCompareExchangePointerMapping.c)
 *     VmpInsertMemoryRange @ 0x1405F941C (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405FB140 (VmpSplitMemoryRange.c)
 *     MiMovePageFileMemoryExtents @ 0x140660908 (MiMovePageFileMemoryExtents.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FF80 (HvpViewMapPromoteRangeToMapping.c)
 *     KiGetSystemServiceTraceTable @ 0x140975AE4 (KiGetSystemServiceTraceTable.c)
 *     PfSnSetAltPrefetchParam @ 0x14097FAA8 (PfSnSetAltPrefetchParam.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC90C (EtwpRegisterPrivateSession.c)
 *     MiCreatePagefileMemoryExtents @ 0x140A46F68 (MiCreatePagefileMemoryExtents.c)
 *     MiConstructLoaderMemoryTree @ 0x140B63490 (MiConstructLoaderMemoryTree.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6E278 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiSplitMultiNodeFreeDescriptors @ 0x140B6F7B8 (MiSplitMultiNodeFreeDescriptors.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int8 v4; // bl
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v7; // rcx
  unsigned __int64 v8; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v9; // r14
  char v10; // cl
  $908AA03DF88B8AEA08B7D1DBE06F5A9B *v11; // rdi
  unsigned __int64 v12; // rsi
  PRTL_BALANCED_NODE v13; // r11
  _RTL_BALANCED_NODE *v14; // r8
  int v15; // r15d
  int v16; // ebp
  _BOOL8 v17; // r13
  _BOOL8 v18; // r12
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 Root; // r14
  $908AA03DF88B8AEA08B7D1DBE06F5A9B *v23; // r11
  __int64 v24; // rbp
  unsigned __int64 v25; // rax
  int v26; // r9d
  _RTL_BALANCED_NODE **v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  _RTL_BALANCED_NODE **v33; // rbx
  unsigned __int64 v34; // rcx
  _RTL_BALANCED_NODE *v35; // rdi
  unsigned __int64 v36; // rcx
  _RTL_BALANCED_NODE *v37; // rcx
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // r11d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  _RTL_BALANCED_NODE **v45; // rsi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  _RTL_BALANCED_NODE *v48; // rbx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v57; // [rsp+48h] [rbp+10h]

  v4 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  LOBYTE(Min) = *(_BYTE *)&Tree->0 & 1;
  if ( !Parent )
  {
    v20 = (unsigned __int64)Node ^ (unsigned __int64)Tree;
    if ( (_BYTE)Min )
    {
      Tree->Root = (_RTL_BALANCED_NODE *)v20;
      Tree->Min = (_RTL_BALANCED_NODE *)v20;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v20 | 1);
      Node->ParentValue = 0LL;
    }
    else
    {
      Tree->Root = Node;
      Tree->Min = Node;
      Node->ParentValue = 0LL;
    }
    return Min;
  }
  v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
  if ( !(_BYTE)Min )
    v7 = Node;
  Parent->Children[Right] = v7;
  v8 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v8 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
  Node->ParentValue = v8 | 1;
  if ( Right )
    goto LABEL_7;
  Min = (unsigned __int64)Tree->Min;
  if ( (Min & 1) == 0 )
  {
    v37 = Tree->Min;
    goto LABEL_53;
  }
  if ( Min != 1 )
  {
    v37 = (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
LABEL_53:
    if ( Parent == v37 )
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
  v9 = Tree->0;
  v10 = *(_BYTE *)&v9 & 1;
  while ( 1 )
  {
    v11 = &Parent->16;
    v12 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v10 && v12 )
    {
      v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v12);
      v57 = (unsigned __int64)Parent ^ v12;
      v13 = *(PRTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v12);
    }
    else
    {
      v13 = *(PRTL_BALANCED_NODE *)v12;
      v14 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v57 = (unsigned __int64)v14;
      if ( !v10 )
        goto LABEL_11;
    }
    if ( !v13 )
    {
LABEL_11:
      v15 = v13 != Parent;
      v16 = v15;
      v17 = v13 != Parent;
      Min = v13 == Parent;
      v18 = Min;
      v19 = (unsigned __int64)v14->Children[Min];
      if ( !v10 )
        goto LABEL_12;
      goto LABEL_26;
    }
    Min = ((unsigned __int64)v14 ^ (unsigned __int64)v13) != (_QWORD)Parent;
    v15 = ((unsigned __int64)v14 ^ (unsigned __int64)v13) != (_QWORD)Parent;
    v16 = v15;
    v18 = ((unsigned __int64)v14 ^ (unsigned __int64)v13) == (_QWORD)Parent;
    v17 = Min;
    v19 = *(_QWORD *)(v57 + v18 * 8);
LABEL_26:
    if ( !v19 )
      break;
    v19 ^= (unsigned __int64)v14;
LABEL_12:
    if ( !v19 || (*(_BYTE *)(v19 + 16) & 1) == 0 )
      break;
    *(_BYTE *)&v11->0 &= ~1u;
    Node = v14;
    *(_BYTE *)(v19 + 16) &= ~1u;
    Parent = (PRTL_BALANCED_NODE)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( !Parent )
        return Min;
      Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v14 ^ (unsigned __int64)Parent);
    }
    if ( Parent )
    {
      v14->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v14->ParentValue | 1);
      v9 = Tree->0;
      Min = (unsigned __int64)Parent->Children[0];
      v10 = *(_BYTE *)&v9 & 1;
      if ( (*(_BYTE *)&v9 & 1) != 0 && Min )
        Min ^= (unsigned __int64)Parent;
      v4 = v14 != (_RTL_BALANCED_NODE *)Min;
      if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
        continue;
    }
    return Min;
  }
  if ( v4 != v15 )
  {
    v41 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v42 = *(_BYTE *)&v9 & 1;
    if ( (*(_BYTE *)&v9 & 1) != 0 && v41 )
      v41 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v41 != Parent )
      goto LABEL_136;
    v43 = (unsigned __int64)Parent->Children[v18];
    if ( (*(_BYTE *)&v9 & 1) != 0 && v43 )
      v43 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v43 != Node )
      goto LABEL_136;
    v44 = (unsigned __int64)v14->Children[v17];
    if ( (*(_BYTE *)&v9 & 1) != 0 && v44 )
      v44 ^= (unsigned __int64)v14;
    if ( (PRTL_BALANCED_NODE)v44 != Parent )
      goto LABEL_136;
    if ( (*(_BYTE *)&v9 & 1) != 0 && v12 )
      v12 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v12 != v14 )
      goto LABEL_136;
    v21 = v57;
    v45 = &Node->Children[v17];
    v46 = (unsigned __int64)Node ^ v57;
    if ( (*(_BYTE *)&v9 & 1) != 0 )
    {
      v14->Children[v17] = (_RTL_BALANCED_NODE *)v46;
      Node->ParentValue = v46 | *(_DWORD *)&Node->0 & 3;
      v47 = (unsigned __int64)*v45;
      if ( !*v45 )
        goto LABEL_72;
      v47 ^= (unsigned __int64)Node;
    }
    else
    {
      v14->Children[v17] = Node;
      Node->ParentValue = (unsigned __int64)v14 | *(_DWORD *)&Node->0 & 3;
      v47 = (unsigned __int64)*v45;
    }
    if ( v47 )
    {
      v52 = *(_QWORD *)(v47 + 16);
      v53 = v52 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 && v53 )
        v53 ^= v47;
      if ( (PRTL_BALANCED_NODE)v53 != Node )
        goto LABEL_136;
      v54 = (unsigned __int64)Parent;
      v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v47);
      if ( v42 )
        v54 = (unsigned __int64)Parent ^ v47;
      *(_QWORD *)(v47 + 16) = v54 | v52 & 3;
LABEL_73:
      if ( v42 && v47 )
      {
        Parent->Children[v18] = v48;
        v49 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
      }
      else
      {
        Parent->Children[v18] = (_RTL_BALANCED_NODE *)v47;
        v49 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
        if ( !v42 )
        {
          *v45 = Parent;
          Parent = Node;
          v11->ParentValue = (unsigned __int64)Node | *(_DWORD *)&v11->0 & 3;
          goto LABEL_29;
        }
      }
      *v45 = (_RTL_BALANCED_NODE *)v49;
      Parent = Node;
      v11->ParentValue = v49 | *(_DWORD *)&v11->0 & 3;
      goto LABEL_29;
    }
LABEL_72:
    v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ v47);
    goto LABEL_73;
  }
  v21 = v57;
LABEL_29:
  Root = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v23 = &Parent->16;
  v24 = v16 ^ 1u;
  v25 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v26 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v25 )
    v25 ^= (unsigned __int64)Parent;
  if ( (_RTL_BALANCED_NODE *)v25 != v14 )
    goto LABEL_136;
  v27 = &v14->Children[(unsigned int)v24 ^ 1LL];
  v28 = (unsigned __int64)*v27;
  if ( ((__int64)Tree->Min & 1) != 0 && v28 )
    v28 ^= (unsigned __int64)v14;
  if ( (PRTL_BALANCED_NODE)v28 != Parent )
    goto LABEL_136;
  v29 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) == 0 )
    goto LABEL_35;
  if ( !v29 )
    goto LABEL_86;
  v29 ^= (unsigned __int64)v14;
LABEL_35:
  if ( !v29 )
  {
LABEL_86:
    if ( (_RTL_BALANCED_NODE *)Root == v14 )
    {
      Root = (unsigned __int64)Parent;
      goto LABEL_41;
    }
    goto LABEL_136;
  }
  v30 = *(_QWORD *)(v29 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v30 )
    v30 ^= v29;
  if ( (_RTL_BALANCED_NODE *)v30 == v14 )
  {
    v31 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v31 = (unsigned __int64)Parent ^ v29;
    *(_QWORD *)(v29 + 8) = v31;
    goto LABEL_41;
  }
  v50 = *(_QWORD *)v29;
  if ( ((__int64)Tree->Min & 1) != 0 && v50 )
    v50 ^= v29;
  if ( (_RTL_BALANCED_NODE *)v50 != v14 )
    goto LABEL_136;
  v51 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v51 = (unsigned __int64)Parent ^ v29;
  *(_QWORD *)v29 = v51;
LABEL_41:
  if ( v26 && v29 )
  {
    v55 = (unsigned __int64)Parent ^ v29 | *(_DWORD *)&v23->0 & 3;
    v33 = &Parent->Children[v24];
    v23->ParentValue = v55;
    v34 = (unsigned __int64)*v33;
LABEL_93:
    if ( v34 )
    {
      v34 ^= (unsigned __int64)Parent;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v32 = v29 | *(_DWORD *)&v23->0 & 3;
  v33 = &Parent->Children[v24];
  v23->ParentValue = v32;
  v34 = (unsigned __int64)*v33;
  if ( v26 )
    goto LABEL_93;
LABEL_43:
  if ( !v34 )
  {
LABEL_44:
    v35 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ v34);
    goto LABEL_45;
  }
  v38 = *(_QWORD *)(v34 + 16);
  v39 = v38 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 && v39 )
    v39 ^= v34;
  if ( (PRTL_BALANCED_NODE)v39 != Parent )
LABEL_136:
    __fastfail(0x1Du);
  v40 = (unsigned __int64)v14;
  v35 = (_RTL_BALANCED_NODE *)(v34 ^ v21);
  if ( v26 )
    v40 = v34 ^ v21;
  *(_QWORD *)(v34 + 16) = v40 | v38 & 3;
LABEL_45:
  if ( v26 && v34 )
  {
    *v27 = v35;
    v36 = v21 ^ (unsigned __int64)Parent;
LABEL_96:
    *v33 = (_RTL_BALANCED_NODE *)v36;
  }
  else
  {
    *v27 = (_RTL_BALANCED_NODE *)v34;
    v36 = v21 ^ (unsigned __int64)Parent;
    if ( v26 )
      goto LABEL_96;
    *v33 = v14;
    v36 = (unsigned __int64)Parent;
  }
  v14->ParentValue &= 3uLL;
  Min = Root;
  v14->ParentValue |= v36;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Min = (unsigned __int64)Tree ^ Root;
    if ( !Root )
      Min = 0LL;
  }
  Tree->Root = (_RTL_BALANCED_NODE *)Min;
  *(_BYTE *)&v14->0 |= 1u;
  *(_BYTE *)&v23->0 &= ~1u;
  return Min;
}
