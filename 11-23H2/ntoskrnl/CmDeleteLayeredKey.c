/*
 * XREFs of CmDeleteLayeredKey @ 0x140616E3C
 * Callers:
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindSubKeyByNumber @ 0x1406DAF30 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpHashUnicodeComponent @ 0x140708EF0 (CmpHashUnicodeComponent.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x14070B670 (CmpMarkKeyDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140710990 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1407109C8 (CmpLockKcbStackExclusive.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpHashCompressedComponent @ 0x140769664 (CmpHashCompressedComponent.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076AAAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 *     CmpInitializeKcbStack @ 0x1407D1E64 (CmpInitializeKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1407D1F0C (CmpCleanupKcbStack.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140A175B8 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x140A17720 (CmpIncrementKcbSequenceNumber.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1FEF8 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInitializeDiscardReplaceContext @ 0x140A1FFC0 (CmpInitializeDiscardReplaceContext.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A20204 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x140A22120 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A237C0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, _QWORD **a3)
{
  char v5; // si
  char v6; // r12
  int started; // ebx
  __int64 v8; // rdx
  int SubKeyCountForKcbStack; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  __int64 v19; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // rcx
  __int64 CellFlat; // rax
  __int64 v24; // rsi
  int v25; // r15d
  __int64 CellPaged; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  __int64 KcbInHashEntryByCellIndex; // rax
  ULONG_PTR v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-59h] BYREF
  __int64 v35; // [rsp+28h] [rbp-51h] BYREF
  _OWORD v36[2]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v37[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v38; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v39[5]; // [rsp+80h] [rbp+7h] BYREF
  int v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v41 = 0;
  memset(v37, 0, sizeof(v37));
  v34 = 0LL;
  memset(v36, 0, sizeof(v36));
  v35 = 0LL;
  v38 = 0LL;
  memset(v39, 0, 32);
  CmpInitializeKcbStack(v37);
  CmpInitializeKcbStack(v36);
  v5 = 0;
  HvpGetCellContextReinitialize(&v35);
  HvpGetCellContextReinitialize(&v34);
  CmpInitializeDiscardReplaceContext(v39);
  v6 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 72);
    if ( (*(_DWORD *)(v18 + 184) & 0x80000) != 0 )
    {
      started = -1073741535;
      goto LABEL_24;
    }
    started = CmpStartKcbStackForTopLayerKcb(v37, *(_QWORD *)(a1 + 8));
    if ( started < 0 )
      goto LABEL_24;
    started = CmpStartKcbStackForTopLayerKcb(v36, v19);
    if ( started < 0 )
      goto LABEL_24;
    CmpLockHashEntryExclusiveByKcb(v18);
    CmpLockKcbStackTopExclusiveRestShared(v36);
    CmpLockKcbStackExclusive(v37);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      started = 0;
      goto LABEL_59;
    }
    SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v37, v8, &v41);
    v10 = 0LL;
    started = SubKeyCountForKcbStack;
    if ( SubKeyCountForKcbStack < 0 )
      goto LABEL_59;
    if ( v41 )
    {
      started = -1073741535;
      goto LABEL_59;
    }
    v11 = *(_QWORD *)(v18 + 192);
    if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
    {
      if ( !v5 )
      {
        CmpUnlockKcbStack(v37);
        CmpUnlockKcbStack(v36);
        CmpUnlockHashEntryByKcb(v18);
LABEL_20:
        CmpUnlockRegistry(v13, v12, v14, v15, v34, v35);
        CmpCleanupKcbStack(v36);
        CmpCleanupKcbStack(v37);
        CmpLockRegistryExclusive();
        v5 = 1;
        goto LABEL_21;
      }
      v6 = 1;
      started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v18, v39);
      if ( started < 0 )
        goto LABEL_59;
    }
    v16 = *(unsigned int *)(v18 + 40);
    if ( (_DWORD)v16 != -1 )
      break;
    if ( *(_DWORD *)(v19 + 40) != -1 )
      goto LABEL_27;
    CmpUnlockKcbStack(v37);
    CmpUnlockKcbStack(v36);
    v17 = CmpPromoteKey(v36, 0LL, 0LL);
    started = v17;
    if ( v17 == -1073741444 )
    {
      started = 0;
      goto LABEL_60;
    }
    if ( v17 < 0 )
      goto LABEL_60;
    if ( v5 )
    {
      CmpLockKcbStackTopExclusiveRestShared(v36);
      CmpLockKcbStackExclusive(v37);
LABEL_27:
      started = CmpCreateTombstone(v10, v37);
      if ( started >= 0 )
      {
        ((void (__fastcall *)(_OWORD *, _QWORD, __int64, __int64, __int64, __int64))CmpReportNotifyForKcbStack)(
          v36,
          0LL,
          1LL,
          a2,
          v34,
          v35);
        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v18, v21, a3, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v18, 8LL, a3);
        if ( v6 )
        {
          CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v18);
        }
        else
        {
          CmpMarkKeyUnbacked(v18, a3);
          CmpDiscardKcb(v18);
        }
        started = 0;
      }
      goto LABEL_59;
    }
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupKcbStack(v36);
    CmpCleanupKcbStack(v37);
LABEL_21:
    CmpInitializeKcbStack(v36);
    CmpInitializeKcbStack(v37);
  }
  if ( !v5 )
  {
    CmpUnlockKcbStack(v37);
    CmpUnlockKcbStack(v36);
    CmpUnlockHashEntryByKcb(v18);
    CmpCleanupDiscardReplaceContext(v39, a3);
    CmpDrainDelayDerefContext(a3);
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v22, v16);
  else
    CellFlat = HvpGetCellPaged(v22);
  v24 = CellFlat;
  v25 = 0;
  if ( *(_DWORD *)(CellFlat + 24) + *(_DWORD *)(CellFlat + 20) )
  {
    while ( 1 )
    {
      started = CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
      if ( started < 0 )
        break;
      started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32));
      if ( started < 0 )
        break;
      if ( ++v25 >= (unsigned int)(*(_DWORD *)(v24 + 24) + *(_DWORD *)(v24 + 20)) )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    started = CmpMarkKeyDirty(*(_QWORD *)(v18 + 32));
    if ( started >= 0 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(*(_QWORD *)(v18 + 32));
        v32 = *(_QWORD *)(v18 + 32);
        if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v32, 0LL);
        else
          CellPaged = HvpGetCellPaged(v32);
        v27 = *(unsigned __int16 *)(CellPaged + 72);
        if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
        {
          v28 = CmpHashCompressedComponent(CellPaged + 76, v27);
        }
        else
        {
          *((_QWORD *)&v38 + 1) = CellPaged + 76;
          LOWORD(v38) = v27;
          WORD1(v38) = v27;
          v28 = CmpHashUnicodeComponent(&v38);
        }
        v29 = *(_QWORD *)(v18 + 32);
        v30 = v28;
        if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v29, &v34);
        else
          HvpReleaseCellPaged(v29, &v34);
        KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(
                                      *(_QWORD *)(v18 + 32),
                                      (unsigned int)(v30 + 37 * *(_DWORD *)(v18 + 16)),
                                      0LL);
        if ( KcbInHashEntryByCellIndex )
          *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
        CmpFreeKeyByCell(*(_QWORD *)(v18 + 32), 0LL);
      }
    }
  }
  v33 = *(_QWORD *)(v18 + 32);
  if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v33, &v35);
  else
    HvpReleaseCellPaged(v33, &v35);
LABEL_59:
  CmpUnlockKcbStack(v37);
  CmpUnlockKcbStack(v36);
LABEL_60:
  CmpUnlockHashEntryByKcb(v18);
LABEL_24:
  CmpCleanupDiscardReplaceContext(v39, a3);
  CmpCleanupKcbStack(v37);
  CmpCleanupKcbStack(v36);
  return (unsigned int)started;
}
