/*
 * XREFs of CmDeleteKey @ 0x1407101FC
 * Callers:
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     CmGetVisibleSubkeyCount @ 0x1407108F8 (CmGetVisibleSubkeyCount.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140710990 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1407109C8 (CmpLockKcbStackExclusive.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x14076ABB4 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockIXLockIntent @ 0x14076AE20 (CmpLockIXLockIntent.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FD6C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A20204 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A210A4 (CmpSnapshotTxOwnerArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AF5080 (CmpIsShutdownRundownActive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v2; // di
  char v3; // r14
  ULONG_PTR UnitOfWork; // r13
  __int64 v5; // r15
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  int started; // edi
  char v14; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  int *v20; // rcx
  signed __int64 *v21; // rdi
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // bl
  char v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  PPRIVILEGE_SET v47; // rcx
  char v48; // al
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // [rsp+28h] [rbp-E0h]
  char v60; // [rsp+48h] [rbp-C0h]
  __int16 v61; // [rsp+4Ah] [rbp-BEh]
  char v62; // [rsp+4Ch] [rbp-BCh]
  __int64 v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v66[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v68[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v69; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v71; // [rsp+A8h] [rbp-60h] BYREF
  PPRIVILEGE_SET v72[2]; // [rsp+B8h] [rbp-50h]
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D8h] [rbp-30h]
  __int64 v75; // [rsp+E8h] [rbp-20h] BYREF
  int v76; // [rsp+F0h] [rbp-18h]
  int v77; // [rsp+F4h] [rbp-14h]
  _QWORD v78[3]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v79[3]; // [rsp+110h] [rbp+8h] BYREF

  v68[1] = v68;
  v68[0] = v68;
  v2 = 0;
  memset(v66, 0, sizeof(v66));
  v64 = 0LL;
  v3 = 0;
  v77 = 0;
  UnitOfWork = 0LL;
  v65 = 0LL;
  v5 = 0LL;
  v63 = 0LL;
  v6 = 0LL;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v67 = 0LL;
  KeyNodeForKcb = 0LL;
  memset(v79, 0, sizeof(v79));
  v7 = MEMORY[0xFFFFF78000000014];
  v71 = 0LL;
  WORD1(v71) = -1;
  v73 = 0LL;
  WORD1(v73) = -1;
  *(_OWORD *)v72 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(v66);
  HvpGetCellContextReinitialize(&v64);
  v76 = -1073741823;
  v75 = 0LL;
  v77 = 0;
  v78[1] = v78;
  v78[0] = v78;
  CmpInitializeDelayDerefContext(&v66[1]);
  CmpAttachToRegistryProcess(v79);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    goto LABEL_99;
  v12 = v67;
  do
  {
    if ( v2 )
      CmpLockRegistryExclusive(v9, v8);
    else
      CmpLockRegistry(v9, v8, v10, v11);
    v6 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_117;
    }
    if ( !*(_QWORD *)(v6 + 72) )
    {
      started = -1073741535;
LABEL_120:
      v30 = 0;
      goto LABEL_39;
    }
    if ( *(_WORD *)(v6 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)a1, (__int64)v68, &v66[1]);
      goto LABEL_117;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v73, v6);
    if ( started < 0 )
      goto LABEL_120;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v71, *(_QWORD *)(v6 + 72));
    if ( started < 0 )
      goto LABEL_120;
    v14 = v62;
    if ( !v62 )
    {
      CmpLockHashEntryExclusiveByKcb(v6);
      HIBYTE(v61) = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v71);
      CmpLockKcbStackExclusive(&v73);
      v60 = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
    v17 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_100:
      started = 0;
LABEL_101:
      v30 = 0;
      goto LABEL_39;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v67);
      if ( started < 0 )
        goto LABEL_120;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_117:
        v30 = 0;
        goto LABEL_39;
      }
      v12 = v67;
      v38 = CmpIsKeyDeletedForKeyBody(a1, v67);
      v17 = 0LL;
      if ( v38 )
        goto LABEL_100;
      if ( v12 )
        goto LABEL_16;
      v14 = v62;
    }
    v18 = *(_QWORD *)(v6 + 192);
    if ( v18 && *(_QWORD *)(v18 + 32) != v18 + 32 && !v14 )
    {
      v2 = 1;
      v62 = 1;
      CmpUnlockKcbStack((__int64)&v73);
      CmpUnlockKcbStack((__int64)&v71);
      v60 = 0;
      CmpUnlockHashEntryByKcb(v6);
      HIBYTE(v61) = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v73 = 0LL;
      WORD1(v73) = -1;
      v47 = v72[1];
      *(_OWORD *)Privileges = 0LL;
      if ( v72[1] )
        CmSiFreeMemory(v72[1]);
      v71 = 0LL;
      WORD1(v71) = -1;
      *(_OWORD *)v72 = 0LL;
      CmpUnlockRegistry(v47, v44, v45, v46);
      continue;
    }
LABEL_16:
    v19 = *(_QWORD *)(v6 + 240);
    if ( v19 )
    {
      v48 = CmEqualTrans(v12, v19);
      v17 = 0LL;
      if ( !v48 )
      {
        started = -1073741535;
        goto LABEL_101;
      }
    }
    if ( v12 )
    {
      UnitOfWork = CmpAllocateUnitOfWork(v16, v19, 0LL);
      if ( UnitOfWork )
      {
        v5 = CmpAllocateUnitOfWork(v40, v39, v41);
        if ( !v5 )
        {
          started = -1073741670;
          goto LABEL_38;
        }
        CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v6 + 72));
        started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v12);
        if ( started < 0 )
          goto LABEL_38;
        CmpTransEnlistUowInKcb((_QWORD *)v5, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v12);
        if ( started < 0 )
          goto LABEL_38;
        if ( !(unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v6 + 72) + 248LL, UnitOfWork)
          || !(unsigned __int8)CmpLockIXLockExclusive(v6 + 248, v5, 0LL)
          || !(unsigned __int8)CmpLockIXLockExclusive(v6 + 264, v5, 1LL) )
        {
          started = -1072103423;
          goto LABEL_38;
        }
LABEL_21:
        if ( !v62 )
        {
          v21 = (signed __int64 *)(*(_QWORD *)(v6 + 32) + 72LL);
          v22 = KeAbPreAcquire((__int64)v21, 0LL);
          if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v21, 0LL, v22, (__int64)v21);
          if ( v22 )
            *(_BYTE *)(v22 + 18) = 1;
          v12 = v67;
          LOBYTE(v61) = 1;
        }
        LOBYTE(v17) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, v66, v17);
        v23 = KeyNodeForKcb;
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, KeyNodeForKcb, v12) || (*(_BYTE *)(v23 + 2) & 8) != 0 )
        {
          started = -1073741535;
          goto LABEL_38;
        }
        v24 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v24, v66);
        else
          HvpReleaseCellPaged(v24, (unsigned int *)v66);
        KeyNodeForKcb = 0LL;
        if ( v12 )
        {
          *(_DWORD *)(UnitOfWork + 68) = 3;
          *(_QWORD *)(UnitOfWork + 88) = v6;
          *(_DWORD *)(v5 + 68) = 2;
          *(_QWORD *)(v5 + 80) = UnitOfWork;
          v42 = *(_QWORD *)(v6 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v42 + 72));
          KeAbPostRelease(v42 + 72);
          v30 = 0;
          started = CmAddLogForAction(v5, 1u, v43);
          if ( started >= 0 )
          {
            v5 = 0LL;
            UnitOfWork = 0LL;
            CmpReportNotifyForKcbStack((__int64)&v71, v67, 1, (__int64)v68);
            started = 0;
          }
        }
        else
        {
          v25 = *(_QWORD *)(v6 + 192);
          if ( !v25 || *(_QWORD *)(v25 + 32) == v25 + 32 )
          {
            CmpReportNotifyForKcbStack((__int64)&v71, 0, 1, (__int64)v68);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), 1);
            if ( started < 0 )
              goto LABEL_38;
            CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v66[1]);
            LOBYTE(v26) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v26);
            LOBYTE(v27) = 1;
            v28 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v64, v27);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v28 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v28 + 4) = v7;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v7;
            v29 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v29, &v64);
            else
              HvpReleaseCellPaged(v29, (unsigned int *)&v64);
            CmpMarkKeyUnbacked(v6, &v66[1]);
            CmpDiscardKcb(v6);
            goto LABEL_37;
          }
          started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, &v75);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack((__int64)&v71, 0, 1, (__int64)v68);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), 1);
            if ( started >= 0 )
            {
              v69 = 0x10100000008LL;
              CmpEnumerateAllHigherLayerKcbs(
                v6,
                (unsigned int)CmpFlushNotifiesPreCallback,
                (unsigned int)CmpFlushNotifiesPostCallback,
                (unsigned int)&v66[1],
                (__int64)&v69,
                1,
                1);
              CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v66[1]);
              LOBYTE(v54) = 1;
              CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v54);
              LOBYTE(v55) = 1;
              v56 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v64, v55);
              *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v56 + 52);
              ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
              *(_QWORD *)(v56 + 4) = v7;
              *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v7;
              v57 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
              if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v57, &v64);
              else
                HvpReleaseCellPaged(v57, (unsigned int *)&v64);
              CmpMarkKeyUnbacked(v6, &v66[1]);
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
LABEL_37:
              started = 0;
            }
          }
LABEL_38:
          v30 = v61;
        }
      }
      else
      {
        started = -1073741670;
        v30 = 0;
      }
LABEL_39:
      v31 = 1;
LABEL_40:
      v3 = v60;
      goto LABEL_41;
    }
    v20 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
    if ( *v20 >= 0 )
    {
      v20 = (int *)(v6 + 248);
      if ( !*(_DWORD *)(v6 + 248) )
      {
        v20 = (int *)(v6 + 264);
        if ( !*(_DWORD *)(v6 + 264) )
          goto LABEL_21;
      }
    }
    started = CmpSnapshotTxOwnerArray(v20, &v63, &v65);
    if ( started < 0 )
      goto LABEL_120;
    if ( v60 )
    {
      CmpUnlockKcbStack((__int64)&v73);
      CmpUnlockKcbStack((__int64)&v71);
      v60 = 0;
    }
    if ( HIBYTE(v61) )
    {
      CmpUnlockHashEntryByKcb(v6);
      HIBYTE(v61) = 0;
    }
    CmpDrainDelayDerefContext(&v66[1]);
    CmpUnlockRegistry(v50, v49, v51, v52);
    started = CmpRollbackTransactionArray((unsigned int)v63, v65, v53, (char *)&v63 + 4, v59);
    if ( started < 0 )
    {
      v31 = 0;
      v30 = 0;
      goto LABEL_40;
    }
    v2 = v62;
  }
  while ( !(unsigned __int8)CmpIsShutdownRundownActive() );
  v3 = v60;
LABEL_99:
  started = -1073741431;
  v31 = 0;
  v30 = 0;
LABEL_41:
  CmpCleanupDiscardReplaceContext(&v75, &v66[1]);
  if ( KeyNodeForKcb )
  {
    v58 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v58, v66);
    else
      HvpReleaseCellPaged(v58, (unsigned int *)v66);
  }
  if ( v30 )
  {
    v32 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v32 + 72));
    KeAbPostRelease(v32 + 72);
  }
  if ( v5 )
  {
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( v3 )
  {
    CmpUnlockKcbStack((__int64)&v73);
    CmpUnlockKcbStack((__int64)&v71);
  }
  if ( HIBYTE(v61) )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v72[1] )
    CmSiFreeMemory(v72[1]);
  CmpDrainDelayDerefContext(&v66[1]);
  if ( v31 )
    CmpUnlockRegistry(v34, v33, v35, v36);
  CmpDetachFromRegistryProcess(v79);
  if ( (_QWORD *)v68[0] != v68 )
    CmpSignalDeferredPosts(v68);
  return (unsigned int)started;
}
