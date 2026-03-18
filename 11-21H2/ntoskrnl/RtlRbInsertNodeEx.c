/*
 * XREFs of RtlRbInsertNodeEx @ 0x14034E6B0
 * Callers:
 *     KiInsertSchedulingGroupQueue @ 0x140210AD0 (KiInsertSchedulingGroupQueue.c)
 *     KiSetClockInterval @ 0x14022F2FC (KiSetClockInterval.c)
 *     RtlpHpVaMgrFree @ 0x14023DADC (RtlpHpVaMgrFree.c)
 *     IoStartDiskIoAttributionForContext @ 0x14024F7C8 (IoStartDiskIoAttributionForContext.c)
 *     MiRescanPageFileBitmapPortion @ 0x14025EDC8 (MiRescanPageFileBitmapPortion.c)
 *     MiInitializePagefileBitmapsCache @ 0x14025F1A4 (MiInitializePagefileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14025FB48 (MiInvalidatePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1402E2738 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlpHpVsChunkSplit @ 0x14034BFE0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14034F9E0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140351500 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140353A00 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035A364 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14035A718 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x1403661D0 (PfSnGetFileInformation.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 *     HalpAllocateCommonBufferEntry @ 0x1403B27B8 (HalpAllocateCommonBufferEntry.c)
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiMovePageFileMemoryExtents @ 0x14059A35C (MiMovePageFileMemoryExtents.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405E0E68 (PspJobIoRateVolumeEntryInsert.c)
 *     RtlCompareExchangePointerMapping @ 0x1405E7140 (RtlCompareExchangePointerMapping.c)
 *     VmpFaultEntryInsert @ 0x140629628 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x140629E84 (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14062BE2C (VmpSplitMemoryRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068D778 (HvpViewMapCreateViewsForRegion.c)
 *     EtwpSetProviderTraitsCommon @ 0x14079781C (EtwpSetProviderTraitsCommon.c)
 *     KiGetSystemServiceTraceTable @ 0x140962F40 (KiGetSystemServiceTraceTable.c)
 *     MiCreatePagefileMemoryExtents @ 0x14096E06C (MiCreatePagefileMemoryExtents.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     MiConstructLoaderMemoryTree @ 0x140B1D48C (MiConstructLoaderMemoryTree.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B2920C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiSplitMultiNodeFreeDescriptors @ 0x140B2B244 (MiSplitMultiNodeFreeDescriptors.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v4; // r11
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  char v10; // r14
  unsigned __int64 v11; // r8
  char v12; // cl
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned int v15; // ebp
  _BOOL8 v16; // rsi
  unsigned int v17; // r15d
  _BOOL8 v18; // r13
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  int v23; // r9d
  unsigned __int64 *v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // rdi
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  int v34; // r11d
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 *v38; // r14
  unsigned __int64 v39; // rax
  unsigned __int64 *v40; // r15
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  __int64 v44; // rbp
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax

  v4 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  LOBYTE(v6) = a1[1] & 1;
  if ( !a2 )
  {
    v9 = a4 ^ (unsigned __int64)a1;
    if ( (_BYTE)v6 )
    {
      *a1 = v9;
      a1[1] = v9;
      *((_BYTE *)a1 + 8) = v9 | 1;
    }
    else
    {
      *a1 = a4;
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v6;
  }
  v7 = a2 ^ a4;
  if ( !(_BYTE)v6 )
    v7 = a4;
  *(_QWORD *)(a2 + 8LL * a3) = v7;
  v8 = a2;
  if ( (a1[1] & 1) != 0 )
    v8 = a2 ^ a4;
  *(_QWORD *)(a4 + 16) = v8 | 1;
  if ( a3 )
    goto LABEL_7;
  v6 = a1[1];
  if ( (v6 & 1) == 0 )
  {
    v32 = a1[1];
    goto LABEL_52;
  }
  if ( v6 != 1 )
  {
    v32 = v6 ^ ((unsigned __int64)a1 | 1);
LABEL_52:
    if ( a2 == v32 )
    {
      if ( (v6 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v6) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v6;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
LABEL_7:
  if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
    return v6;
  v10 = *((_BYTE *)a1 + 8);
  while ( 1 )
  {
    v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = v10 & 1;
    if ( (v10 & 1) != 0 && v11 )
    {
      v11 ^= a2;
      v14 = v11;
      v13 = *(_QWORD *)v11;
    }
    else
    {
      v13 = *(_QWORD *)v11;
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        goto LABEL_15;
    }
    if ( !v13 )
    {
LABEL_15:
      LOBYTE(v6) = v13 != a2;
      v15 = v13 != a2;
      v16 = v13 == a2;
      v17 = v15;
      v18 = v16;
      v19 = *(_QWORD *)(v11 + 8 * v16);
      if ( !v12 )
        goto LABEL_16;
      goto LABEL_27;
    }
    LOBYTE(v6) = (v11 ^ v13) != a2;
    v17 = (unsigned __int8)v6;
    v16 = (v11 ^ v13) == a2;
    v15 = (unsigned __int8)v6;
    v18 = v16;
    v19 = *(_QWORD *)(v14 + 8 * v16);
LABEL_27:
    if ( !v19 )
      break;
    v19 ^= v11;
LABEL_16:
    if ( !v19 || (*(_BYTE *)(v19 + 16) & 1) == 0 )
      break;
    *(_BYTE *)(a2 + 16) &= ~1u;
    a4 = v11;
    *(_BYTE *)(v19 + 16) &= ~1u;
    a2 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !a2 )
        return v6;
      a2 ^= v11;
    }
    if ( a2 )
    {
      *(_BYTE *)(v11 + 16) = *(_QWORD *)(v11 + 16) | 1;
      v10 = *((_BYTE *)a1 + 8);
      v6 = *(_QWORD *)a2;
      if ( (v10 & 1) != 0 && v6 )
        v6 ^= a2;
      v4 = v11 != v6;
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
        continue;
    }
    return v6;
  }
  if ( v4 == v17 )
    goto LABEL_29;
  v33 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v34 = v10 & 1;
  if ( (v10 & 1) != 0 && v33 )
    v33 ^= a4;
  if ( v33 != a2 )
    goto LABEL_135;
  v35 = *(_QWORD *)(a2 + 8 * v16);
  if ( (v10 & 1) != 0 && v35 )
    v35 ^= a2;
  if ( v35 != a4 )
    goto LABEL_135;
  v36 = v17;
  v37 = *(_QWORD *)(v11 + 8LL * v17);
  if ( (v10 & 1) != 0 && v37 )
    v37 ^= v11;
  if ( v37 != a2 )
    goto LABEL_135;
  v38 = (unsigned __int64 *)(a2 + 16);
  v39 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 && v39 )
    v39 ^= a2;
  if ( v39 != v11 )
    goto LABEL_135;
  v40 = (unsigned __int64 *)(a4 + 8LL * v17);
  v41 = a4 ^ v14;
  if ( !v34 )
  {
    *(_QWORD *)(v11 + 8 * v36) = a4;
    *(_QWORD *)(a4 + 16) = v11 | *(_DWORD *)(a4 + 16) & 3;
    v42 = *v40;
    goto LABEL_65;
  }
  *(_QWORD *)(v11 + 8 * v36) = v41;
  *(_QWORD *)(a4 + 16) = v41 | *(_DWORD *)(a4 + 16) & 3;
  v42 = *v40;
  if ( *v40 )
  {
    v42 ^= a4;
LABEL_65:
    if ( v42 )
    {
      v49 = *(_QWORD *)(v42 + 16);
      v50 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v34 && v50 )
        v50 ^= v42;
      if ( v50 == a4 )
      {
        v51 = a2;
        if ( v34 )
          v51 = a2 ^ v42;
        *(_QWORD *)(v42 + 16) = v51 | v49 & 3;
        goto LABEL_66;
      }
      goto LABEL_135;
    }
  }
LABEL_66:
  if ( v34 && v42 )
  {
    *(_QWORD *)(a2 + 8 * v18) = a2 ^ v42;
    v43 = a4 ^ a2;
LABEL_115:
    *v40 = v43;
    a2 = a4;
    *v38 = v43 | *(_DWORD *)v38 & 3;
  }
  else
  {
    *(_QWORD *)(a2 + 8 * v16) = v42;
    v43 = a4 ^ a2;
    if ( v34 )
      goto LABEL_115;
    *v40 = a2;
    a2 = a4;
    *v38 = a4 | *(_DWORD *)v38 & 3;
  }
LABEL_29:
  v20 = *a1;
  if ( (a1[1] & 1) != 0 )
  {
    if ( v20 )
      v20 ^= (unsigned __int64)a1;
    else
      v20 = 0LL;
  }
  v21 = v15 ^ 1;
  v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v23 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v22 )
    v22 ^= a2;
  if ( v22 != v11 )
    goto LABEL_135;
  v24 = (unsigned __int64 *)(v11 + 8 * ((unsigned int)v21 ^ 1LL));
  v25 = *v24;
  if ( (a1[1] & 1) != 0 && v25 )
    v25 ^= v11;
  if ( v25 != a2 )
    goto LABEL_135;
  v26 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_35;
  if ( !v26 )
    goto LABEL_84;
  v26 ^= v11;
LABEL_35:
  if ( !v26 )
  {
LABEL_84:
    if ( v20 == v11 )
    {
      v20 = a2;
      goto LABEL_41;
    }
    goto LABEL_135;
  }
  v27 = *(_QWORD *)(v26 + 8);
  if ( (a1[1] & 1) != 0 && v27 )
    v27 ^= v26;
  if ( v27 == v11 )
  {
    v28 = a2;
    if ( (a1[1] & 1) != 0 )
      v28 = a2 ^ v26;
    *(_QWORD *)(v26 + 8) = v28;
    goto LABEL_41;
  }
  v47 = *(_QWORD *)v26;
  if ( (a1[1] & 1) != 0 && v47 )
    v47 ^= v26;
  if ( v47 != v11 )
LABEL_135:
    __fastfail(0x1Du);
  v48 = a2;
  if ( (a1[1] & 1) != 0 )
    v48 = a2 ^ v26;
  *(_QWORD *)v26 = v48;
LABEL_41:
  if ( v23 && v26 )
  {
    v29 = (unsigned __int64 *)(a2 + 8 * v21);
    *(_QWORD *)(a2 + 16) = *(_DWORD *)(a2 + 16) & 3 | a2 ^ v26;
    v30 = *v29;
LABEL_88:
    if ( v30 )
    {
      v30 ^= a2;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v29 = (unsigned __int64 *)(a2 + 8 * v21);
  *(_QWORD *)(a2 + 16) = v26 | *(_DWORD *)(a2 + 16) & 3;
  v30 = *v29;
  if ( v23 )
    goto LABEL_88;
LABEL_43:
  if ( v30 )
  {
    v44 = *(_QWORD *)(v30 + 16);
    v45 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v23 && v45 )
      v45 ^= v30;
    if ( v45 == a2 )
    {
      v46 = v11;
      if ( v23 )
        v46 = v11 ^ v30;
      *(_QWORD *)(v30 + 16) = v46 | v44 & 3;
      goto LABEL_44;
    }
    goto LABEL_135;
  }
LABEL_44:
  if ( v23 && v30 )
  {
    *v24 = v11 ^ v30;
    v31 = a2 ^ v14;
LABEL_97:
    *v29 = v31;
  }
  else
  {
    v31 = a2 ^ v14;
    *v24 = v30;
    if ( v23 )
      goto LABEL_97;
    *v29 = v11;
    v31 = a2;
  }
  *(_QWORD *)(v11 + 16) = v31 | *(_DWORD *)(v11 + 16) & 3;
  v6 = v20;
  if ( (a1[1] & 1) != 0 )
  {
    v6 = (unsigned __int64)a1 ^ v20;
    if ( !v20 )
      v6 = 0LL;
  }
  *a1 = v6;
  *(_BYTE *)(v11 + 16) |= 1u;
  *(_BYTE *)(a2 + 16) &= ~1u;
  return v6;
}
