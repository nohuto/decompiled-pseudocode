/*
 * XREFs of CmDeleteValueKey @ 0x14070F134
 * Callers:
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0F30 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1406D27A4 (CmpFindNameInListWithStatus.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpRemoveValueFromList @ 0x140708568 (CmpRemoveValueFromList.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x14070B16C (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x14070BC58 (CmpMarkValueDataDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14076AE20 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1407D76BC (CmpCloneKCBValueListForTrans.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x1407DFE5C (CmpIsValueTombstone.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpSetValueKeyTombstone @ 0x140A16FA0 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140A1BFB0 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A210A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140A250D8 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AF5080 (CmpIsShutdownRundownActive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r14
  _QWORD *v5; // r15
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  char IsShutdownRundownActive; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  char v14; // r12
  int started; // edi
  __int64 v16; // rdi
  ULONG_PTR v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PPRIVILEGE_SET v22; // rcx
  __int64 v23; // r8
  _QWORD *UnitOfWork; // rax
  signed __int64 *v25; // rdi
  unsigned __int64 v26; // r14
  char v27; // r15
  __int64 v28; // rdi
  __int16 v29; // r12
  __int64 v30; // r8
  __int64 KcbAtLayerHeight; // r14
  int v32; // eax
  char v33; // al
  ULONG_PTR v34; // rdx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  int NameInListWithStatus; // eax
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // r12
  ULONG_PTR v41; // rcx
  __int64 CellPaged; // rax
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  signed __int64 *v47; // rdi
  unsigned __int64 v48; // r14
  ULONG_PTR v49; // rcx
  ULONG_PTR v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // r8d
  ULONG_PTR v53; // rcx
  unsigned int v54; // r12d
  ULONG_PTR v55; // rcx
  ULONG_PTR v56; // rdx
  ULONG_PTR v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdi
  _DWORD *v61; // r12
  int v62; // eax
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  _WORD *v65; // rcx
  unsigned int v66; // eax
  int v67; // ecx
  __int64 v68; // rbx
  __int64 v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // r8
  signed __int64 *v72; // rbx
  unsigned __int64 v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rcx
  ULONG_PTR v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned int v84; // [rsp+20h] [rbp-E0h]
  char v85; // [rsp+41h] [rbp-BFh] BYREF
  char v86; // [rsp+42h] [rbp-BEh]
  unsigned int BugCheckParameter4[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v88; // [rsp+50h] [rbp-B0h]
  unsigned int v89; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v90[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v91; // [rsp+68h] [rbp-98h]
  _QWORD *v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  int v95; // [rsp+90h] [rbp-70h] BYREF
  __int64 v96; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v97; // [rsp+A0h] [rbp-60h]
  __int128 v98; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+B8h] [rbp-48h]
  __int64 v100; // [rsp+C8h] [rbp-38h] BYREF
  void *v101; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v102[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v103; // [rsp+E8h] [rbp-18h]
  __int128 v104; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v105[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v106[3]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v94 = a1;
  v86 = a4;
  v103 = a3;
  v102[1] = v102;
  v5 = (_QWORD *)a1;
  v97 = (_WORD *)a2;
  v102[0] = v102;
  v89 = 0;
  v98 = 0LL;
  WORD1(v98) = -1;
  v6 = 0LL;
  v100 = 0LL;
  v7 = 0LL;
  v93 = 0LL;
  v96 = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0LL;
  memset(v106, 0, sizeof(v106));
  v92 = 0LL;
  v85 = 0;
  v95 = 0;
  v104 = 0LL;
  *(_QWORD *)&v90[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v91 = 0LL;
  HvpGetCellContextReinitialize(&v93);
  HvpGetCellContextReinitialize(&v96);
  v88 = 0LL;
  HvpGetCellContextReinitialize(&BugCheckParameter4[1]);
  BugCheckParameter4[0] = -1;
  v90[0] = -1;
  CmpInitializeDelayDerefContext(&v104);
  v101 = 0LL;
  memset(v105, 0, sizeof(v105));
  CmpAttachToRegistryProcess(v106);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  while ( 1 )
  {
    if ( IsShutdownRundownActive )
    {
      started = -1073741431;
      v14 = 0;
      goto LABEL_149;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v10, v9, v11, v12);
    v7 = v5[1];
    v14 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_149;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v98, v7);
    if ( started < 0 )
      goto LABEL_149;
    CmpLockKcbStackTopExclusiveRestShared(&v98);
    v4 = 1;
    if ( v5[7] || v5[8] )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, 0LL) )
      {
        v27 = 0;
        started = (*(_BYTE *)(v94 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_150;
      }
      started = CmpTransSearchAddTransFromKeyBody(v5, &v90[1]);
      if ( started < 0 )
        goto LABEL_149;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_149:
        v27 = 0;
LABEL_150:
        if ( !v6 )
          goto LABEL_152;
        goto LABEL_151;
      }
    }
    v14 = 0;
LABEL_11:
    v16 = *(_QWORD *)&v90[1];
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, *(_QWORD *)&v90[1]) )
    {
      v4 = 1;
      started = (*(_BYTE *)(v94 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_143;
    }
    if ( v16 )
      break;
    v17 = v7 + 248;
    if ( *(int *)(v7 + 248) >= 0 )
    {
      v17 = v7 + 264;
      if ( !*(_DWORD *)(v7 + 264) )
        goto LABEL_32;
    }
    started = CmpSnapshotTxOwnerArray(v17, &v89, &v100);
    if ( started < 0 )
    {
      v4 = 1;
LABEL_143:
      v27 = 0;
LABEL_144:
      v14 = 1;
      goto LABEL_150;
    }
    v18 = v89;
    v84 = v89;
    CmpLogTransactionAbortedWithChildName(v7, 0LL, 1LL);
    CmpUnlockKcbStack((__int64)&v98);
    v22 = Privileges[1];
    v4 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v98 = 0LL;
    WORD1(v98) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v22, v19, v20, v21);
    started = CmpRollbackTransactionArray(v18, v100, v23, &v95, v84);
    if ( started < 0 )
      goto LABEL_149;
    IsShutdownRundownActive = CmpIsShutdownRundownActive();
    v4 = 0;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v92 = UnitOfWork;
  v6 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v4 = 1;
    v27 = 0;
    v14 = 1;
    started = -1073741670;
    goto LABEL_152;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v7);
  started = CmpTransEnlistUowInCmTrans(v6, v16);
  if ( started < 0 )
    goto LABEL_139;
  if ( !(unsigned __int8)CmpLockIXLockIntent(v7 + 248, v6)
    || !(unsigned __int8)CmpLockIXLockExclusive(v7 + 264, v6, 1LL) )
  {
    started = -1072103423;
LABEL_139:
    v4 = 1;
    v27 = 0;
    goto LABEL_140;
  }
  v25 = (signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL);
  v26 = KeAbPreAcquire((__int64)v25, 0LL);
  if ( _InterlockedCompareExchange64(v25, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v25, 0LL, v26, (__int64)v25);
  if ( v26 )
    *(_BYTE *)(v26 + 18) = 1;
  v27 = 1;
  started = CmpCloneKCBValueListForTrans(v7, *(_QWORD *)&v90[1], &v85);
  if ( started >= 0 )
  {
    v28 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v28 + 72));
    KeAbPostRelease(v28 + 72);
    v16 = *(_QWORD *)&v90[1];
LABEL_32:
    v27 = 0;
    v29 = *(_WORD *)(v7 + 66);
    if ( v29 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v98, v29);
        v32 = *(__int16 *)(KcbAtLayerHeight + 66);
        if ( v32 == *(unsigned __int16 *)(v30 + 4) )
        {
          v33 = *(_BYTE *)(KcbAtLayerHeight + 65);
          if ( !v33 )
            goto LABEL_39;
        }
        else
        {
          if ( !(_WORD)v32 )
            goto LABEL_39;
          v33 = *(_BYTE *)(KcbAtLayerHeight + 65);
        }
        if ( v33 == 1 )
          break;
LABEL_39:
        v34 = *(unsigned int *)(KcbAtLayerHeight + 40);
        if ( (_DWORD)v34 != -1 )
        {
          if ( v16 && *(_QWORD *)(KcbAtLayerHeight + 288) == v16 )
          {
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        (_DWORD *)(KcbAtLayerHeight + 280),
                        (__int64)v97,
                        0,
                        (__int64)v90,
                        (__int64)BugCheckParameter4);
          }
          else
          {
            v35 = *(_QWORD *)(KcbAtLayerHeight + 32);
            if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v35, v34);
            else
              CellFlat = HvpGetCellPaged(v35, v34, (unsigned int *)&v96);
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     (_DWORD *)(CellFlat + 36),
                                     (__int64)v97,
                                     0,
                                     (__int64)v90,
                                     (__int64)BugCheckParameter4);
            v38 = *(_QWORD *)(KcbAtLayerHeight + 32);
            started = NameInListWithStatus;
            if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v38, &v96);
            else
              HvpReleaseCellPaged(v38, (unsigned int *)&v96);
          }
          if ( started >= 0 )
          {
            v88 = KcbAtLayerHeight;
            v40 = KcbAtLayerHeight;
            goto LABEL_58;
          }
          if ( started != -1073741772 )
            goto LABEL_136;
          v39 = *(__int16 *)(KcbAtLayerHeight + 66);
          if ( v39 == *(unsigned __int16 *)(v94 + 4) || (_WORD)v39 && *(_BYTE *)(KcbAtLayerHeight + 65) )
            break;
        }
        if ( --v29 < 0 )
          break;
        v16 = *(_QWORD *)&v90[1];
      }
    }
    v40 = v88;
LABEL_58:
    if ( BugCheckParameter4[0] == -1 )
    {
      started = -1073741772;
LABEL_136:
      v4 = 1;
      goto LABEL_144;
    }
    v41 = *(_QWORD *)(v40 + 32);
    if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v41, BugCheckParameter4[0]);
    else
      CellPaged = HvpGetCellPaged(v41, BugCheckParameter4[0], &BugCheckParameter4[1]);
    v43 = CellPaged;
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v40 + 32), CellPaged) )
    {
      started = -1073741772;
      goto LABEL_125;
    }
    if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v44, &BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v44, &BugCheckParameter4[1]);
    v14 = 0;
    v43 = 0LL;
    if ( *(_DWORD *)(v7 + 40) != -1 )
    {
      v46 = *(_QWORD *)(v7 + 32);
      ++*(_QWORD *)(v7 + 304);
      v47 = (signed __int64 *)(v46 + 72);
      v48 = KeAbPreAcquire((__int64)v47, 0LL);
      if ( _InterlockedCompareExchange64(v47, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v47, 0LL, v48, (__int64)v47);
      if ( v48 )
        *(_BYTE *)(v48 + 18) = 1;
      v27 = 1;
      if ( !*(_QWORD *)&v90[1] )
      {
        started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
        v4 = 1;
        if ( started < 0 )
          goto LABEL_133;
      }
      v49 = *(_QWORD *)(v7 + 32);
      v50 = *(unsigned int *)(v7 + 40);
      if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
        v51 = HvpGetCellFlat(v49, v50);
      else
        v51 = HvpGetCellPaged(v49, v50, (unsigned int *)&v93);
      v52 = *(_DWORD *)(v7 + 40);
      v53 = *(_QWORD *)(v7 + 32);
      v91 = v51;
      CmpUpdateKeyNodeAccessBits(v53, v51, v52);
      v54 = BugCheckParameter4[0];
      if ( v86 )
      {
        started = CmpSnapshotKcbStackSecurity(&v98, *(_QWORD *)&v90[1], 843140419LL, &v101);
        v4 = 1;
        if ( started < 0 )
          goto LABEL_130;
        started = CmpGetValueForAudit(*(_QWORD *)(v88 + 32), v54);
        if ( started < 0 )
          goto LABEL_130;
      }
      v55 = *(_QWORD *)(v7 + 32);
      if ( *(_QWORD *)&v90[1] )
      {
        if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v55, &v93);
        else
          HvpReleaseCellPaged(v55, (unsigned int *)&v93);
        v68 = *(_QWORD *)(v7 + 32);
        v91 = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v68 + 72));
        KeAbPostRelease(v68 + 72);
        v69 = (__int64)v92;
        v70 = BugCheckParameter4[0];
        v27 = 0;
        *((_DWORD *)v92 + 17) = 6;
        *(_DWORD *)(v69 + 88) = v70;
        started = CmAddLogForAction(v69, 1u, v71);
        v4 = 1;
        if ( started < 0 )
          goto LABEL_133;
        v72 = (signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL);
        v73 = KeAbPreAcquire((__int64)v72, 0LL);
        if ( _InterlockedCompareExchange64(v72, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v72, 0LL, v73, (__int64)v72);
        if ( v73 )
          *(_BYTE *)(v73 + 18) = 1;
        CmpRemoveValueFromList(*(_QWORD *)(v7 + 32), v90[0], (unsigned int *)(v7 + 280));
      }
      else
      {
        v56 = *(unsigned int *)(v7 + 40);
        if ( !*(_WORD *)(v7 + 66) )
        {
          started = HvpMarkCellDirty(v55, v56);
          v4 = 1;
          if ( started >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 100));
            if ( started >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v54);
              if ( started >= 0 )
              {
                v57 = *(_QWORD *)(v88 + 32);
                if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
                  v58 = HvpGetCellFlat(v57, v54);
                else
                  v58 = HvpGetCellPaged(v57, v54, &BugCheckParameter4[1]);
                v40 = v88;
                v43 = v58;
                started = CmpMarkValueDataDirty(*(_QWORD *)(v88 + 32), v58);
                if ( started >= 0 )
                {
                  v59 = *(_QWORD *)(v40 + 32);
                  if ( (*(_BYTE *)(v59 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v59, &BugCheckParameter4[1]);
                  else
                    HvpReleaseCellPaged(v59, &BugCheckParameter4[1]);
                  v60 = v91;
                  v43 = 0LL;
                  v61 = (_DWORD *)(v91 + 36);
                  CmpRemoveValueFromList(*(_QWORD *)(v7 + 32), v90[0], (unsigned int *)(v91 + 36));
                  CmpFreeValue(*(_QWORD *)(v7 + 32), BugCheckParameter4[0]);
                  *(_QWORD *)(v60 + 4) = v13;
                  *(_QWORD *)(v7 + 168) = v13;
                  if ( !*v61 )
                  {
                    *(_DWORD *)(v60 + 60) = 0;
                    *(_WORD *)(v7 + 178) = 0;
                    *(_DWORD *)(v60 + 64) = 0;
                    *(_DWORD *)(v7 + 180) = 0;
                  }
                  goto LABEL_109;
                }
LABEL_126:
                if ( v43 )
                {
                  v75 = *(_QWORD *)(v40 + 32);
                  if ( (*(_BYTE *)(v75 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v75, &BugCheckParameter4[1]);
                  else
                    HvpReleaseCellPaged(v75, &BugCheckParameter4[1]);
                }
              }
            }
          }
          goto LABEL_130;
        }
        v62 = HvpMarkCellDirty(v55, v56);
        started = v62;
        v4 = 1;
        if ( v7 == v88 )
        {
          if ( v62 >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v54);
            if ( started >= 0 )
            {
              v63 = *(_QWORD *)(v7 + 32);
              if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
                v64 = HvpGetCellFlat(v63, v54);
              else
                v64 = HvpGetCellPaged(v63, v54, &BugCheckParameter4[1]);
              v43 = v64;
              started = CmpMarkValueDataDirty(*(_QWORD *)(v7 + 32), v64);
              if ( started >= 0 )
              {
                CmpFreeValueData(*(_QWORD *)(v7 + 32), *(unsigned int *)(v43 + 8), *(_DWORD *)(v43 + 4));
                *(_DWORD *)(v43 + 8) = -1;
                v60 = v91;
                *(_WORD *)(v43 + 16) |= 2u;
                *(_DWORD *)(v43 + 12) = 0;
                *(_DWORD *)(v43 + 4) = 0;
                *(_QWORD *)(v60 + 4) = v13;
                v61 = (_DWORD *)(v60 + 36);
                *(_QWORD *)(v7 + 168) = v13;
                goto LABEL_109;
              }
              v40 = v88;
              goto LABEL_126;
            }
          }
LABEL_130:
          if ( v91 )
          {
            v76 = *(_QWORD *)(v7 + 32);
            if ( (*(_BYTE *)(v76 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v76, &v93);
            else
              HvpReleaseCellPaged(v76, (unsigned int *)&v93);
          }
LABEL_133:
          v6 = v92;
          v14 = 1;
          goto LABEL_150;
        }
        if ( v62 < 0 )
          goto LABEL_130;
        v61 = (_DWORD *)(v91 + 36);
        started = CmpSetValueKeyTombstone(*(_QWORD *)(v7 + 32), *(_DWORD *)(v7 + 40) >> 31);
        if ( started < 0 )
          goto LABEL_130;
        v60 = v91;
        v65 = v97;
        *(_QWORD *)(v91 + 4) = v13;
        *(_QWORD *)(v7 + 168) = v13;
        v66 = (unsigned __int16)*v65;
        if ( *(_DWORD *)(v60 + 60) < v66 )
        {
          *(_DWORD *)(v60 + 60) = v66;
          *(_WORD *)(v7 + 178) = *v65;
        }
LABEL_109:
        CmpCleanUpKcbCachedSymlink(v7);
        v67 = *(_DWORD *)(v60 + 40);
        *(_DWORD *)(v7 + 96) = *v61;
        *(_DWORD *)(v7 + 100) = v67;
      }
      v74 = *(_QWORD *)(v7 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v74 + 72));
      KeAbPostRelease(v74 + 72);
      v92 = 0LL;
      v85 = 0;
      v27 = 0;
      CmpReportNotifyForKcbStack((__int64)&v98, v90[1], 4, (__int64)v102);
      started = 0;
      v40 = v88;
LABEL_125:
      v4 = 1;
      goto LABEL_126;
    }
    CmpUnlockKcbStack((__int64)&v98);
    LOBYTE(v45) = 1;
    v4 = 0;
    started = CmpPromoteKey(&v98, 0LL, v45);
    if ( started < 0 )
      goto LABEL_133;
    v6 = v92;
    v5 = (_QWORD *)v94;
    goto LABEL_11;
  }
  v4 = 1;
LABEL_140:
  v14 = 1;
LABEL_151:
  CmpRundownUnitOfWork((ULONG_PTR)v6);
  ExFreePoolWithTag(v6, 0x77554D43u);
LABEL_152:
  if ( v85 )
  {
    v77 = *(unsigned int *)(v7 + 284);
    if ( (_DWORD)v77 != -1 )
      HvFreeCell(*(_QWORD *)(v7 + 32), v77);
    *(_DWORD *)(v7 + 284) = -1;
    *(_DWORD *)(v7 + 280) = 0;
    *(_QWORD *)(v7 + 288) = 0LL;
  }
  if ( v27 )
  {
    v78 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v78 + 72));
    KeAbPostRelease(v78 + 72);
  }
  if ( v4 )
    CmpUnlockKcbStack((__int64)&v98);
  CmpDrainDelayDerefContext((_QWORD **)&v104);
  if ( v14 )
    CmpUnlockRegistry(v80, v79, v81, v82);
  if ( (_QWORD *)v102[0] != v102 )
    CmpSignalDeferredPosts(v102);
  CmpDetachFromRegistryProcess(v106);
  if ( started >= 0 && v86 && v101 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v101, 0, (_DWORD)v97, v94, v103, (__int64)v105, 2);
  if ( *((_QWORD *)&v105[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v105[0] + 1), 0x34414D43u);
  if ( v101 )
    CmpFreeTransientPoolWithTag(v101, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
