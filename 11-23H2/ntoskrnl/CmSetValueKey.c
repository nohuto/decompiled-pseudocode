/*
 * XREFs of CmSetValueKey @ 0x1406D3270
 * Callers:
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
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
 *     CmpSwapValueInList @ 0x1403683BC (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0F30 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1406D0F74 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1406D27A4 (CmpFindNameInListWithStatus.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D286C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpIsKeyStackSymlink @ 0x1406D3230 (CmpIsKeyStackSymlink.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406D5668 (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpRemoveValueFromList @ 0x140708568 (CmpRemoveValueFromList.c)
 *     CmpAddValueToListEx @ 0x140709CC4 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyNew @ 0x140709EE0 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x14070A148 (CmpAddValueKeyNew.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
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
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140A1BFB0 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A210A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140A250D8 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AF5080 (CmpIsShutdownRundownActive.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSetValueKey(
        ULONG_PTR *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  ULONG_PTR *v7; // r14
  _QWORD *v8; // r13
  ULONG_PTR v9; // rsi
  int v10; // rdx^4
  _BOOL8 v11; // rdx
  char IsShutdownRundownActive; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbx
  int started; // edi
  _QWORD *v19; // rdi
  char v20; // r12
  char v21; // r15
  __int64 v22; // r15
  ULONG_PTR v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  PPRIVILEGE_SET v28; // rcx
  __int64 v29; // r8
  _QWORD *UnitOfWork; // rax
  signed __int64 *v31; // rdi
  unsigned __int64 v32; // r14
  char v33; // r14
  __int64 v34; // rdi
  unsigned int v35; // edi
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdi
  signed __int64 *v39; // rdi
  unsigned __int64 v40; // r14
  __int64 v41; // r12
  ULONG_PTR v42; // rcx
  __int64 CellFlat; // rax
  __int64 v44; // r13
  _DWORD *v45; // rdx
  unsigned int v46; // r15d
  ULONG_PTR v47; // rcx
  __int64 CellPaged; // rax
  __int64 v49; // rcx
  char IsValueTombstone; // di
  BOOL v51; // eax
  int v52; // edi
  ULONG_PTR v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // r15d
  PCUNICODE_STRING v57; // rcx
  unsigned int Length; // eax
  int v59; // ecx
  __int64 v60; // rbx
  __int64 v61; // rcx
  ULONG_PTR v62; // rcx
  __int64 v63; // rbx
  _DWORD *v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  signed __int64 *v67; // rbx
  unsigned __int64 v68; // r14
  ULONG_PTR v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r12
  ULONG_PTR *v72; // rbx
  ULONG_PTR v73; // rdx
  ULONG_PTR v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  void *v79; // rbx
  unsigned int Src; // [rsp+28h] [rbp-E0h]
  void *Srca; // [rsp+28h] [rbp-E0h]
  void *Srcb; // [rsp+28h] [rbp-E0h]
  size_t Size; // [rsp+30h] [rbp-D8h]
  size_t Sizea; // [rsp+30h] [rbp-D8h]
  __int64 v86; // [rsp+38h] [rbp-D0h]
  char v87; // [rsp+48h] [rbp-C0h]
  char v88; // [rsp+49h] [rbp-BFh]
  char v89; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v90; // [rsp+50h] [rbp-B8h]
  int v91; // [rsp+58h] [rbp-B0h]
  unsigned int v92; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v93; // [rsp+60h] [rbp-A8h]
  unsigned int BugCheckParameter3; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int BugCheckParameter3_4; // [rsp+68h] [rbp-A0h]
  unsigned int BugCheckParameter4; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL BugCheckParameter4_4; // [rsp+70h] [rbp-98h]
  int v98; // [rsp+78h] [rbp-90h] BYREF
  int v99; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v100; // [rsp+80h] [rbp-88h] BYREF
  __int64 v101; // [rsp+88h] [rbp-80h] BYREF
  PCUNICODE_STRING String2; // [rsp+90h] [rbp-78h]
  __int64 v103; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v104; // [rsp+A0h] [rbp-68h]
  __int128 v105; // [rsp+A8h] [rbp-60h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+B8h] [rbp-50h]
  int v107; // [rsp+C8h] [rbp-40h] BYREF
  void *v108; // [rsp+D0h] [rbp-38h]
  int v109; // [rsp+D8h] [rbp-30h]
  __int64 v110; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v111[2]; // [rsp+F0h] [rbp-18h] BYREF
  void *v112; // [rsp+100h] [rbp-8h] BYREF
  __int64 v113; // [rsp+108h] [rbp+0h]
  __int128 v114; // [rsp+110h] [rbp+8h] BYREF
  __int128 v115; // [rsp+120h] [rbp+18h] BYREF
  __int128 v116; // [rsp+130h] [rbp+28h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+140h] [rbp+38h] BYREF
  _OWORD v118[3]; // [rsp+160h] [rbp+58h] BYREF

  v113 = a6;
  v111[1] = v111;
  v111[0] = v111;
  v7 = a1;
  String2 = a2;
  v8 = 0LL;
  v90 = (__int64)a1;
  v9 = 0LL;
  v105 = 0LL;
  WORD1(v105) = -1;
  v108 = a4;
  BugCheckParameter3_4 = a3;
  v100 = 0;
  v110 = 0LL;
  v92 = 0;
  memset(v118, 0, sizeof(v118));
  v104 = 0LL;
  v89 = 0;
  v107 = 0;
  v114 = 0LL;
  v103 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v101 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v101 + 4);
  v99 = v10;
  v98 = -1;
  HvpGetBinContextInitialize(&v99);
  CmpInitializeDelayDerefContext(&v114);
  v115 = 0LL;
  BugCheckParameter4 = -1;
  v116 = 0LL;
  BugCheckParameter3 = -1;
  v112 = (void *)v11;
  BugCheckParameter4_4 = v11;
  LOBYTE(v91) = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v118);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v16 = a5;
  v93 = a5;
LABEL_2:
  if ( IsShutdownRundownActive )
  {
    v21 = 0;
    v88 = 0;
    v33 = 0;
    started = -1073741431;
    goto LABEL_137;
  }
  v17 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry(v16, v13, v14, v15);
  v9 = v7[1];
  v88 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
    goto LABEL_159;
  }
  started = CmpStartKcbStackForTopLayerKcb(&v105, v9);
  if ( started < 0 )
  {
LABEL_159:
    v21 = 0;
    v33 = 0;
    goto LABEL_137;
  }
  v19 = v7 + 8;
  if ( v7[7] || *v19 )
  {
    CmpLockKcbStackTopExclusiveRestShared(&v105);
    v21 = 1;
    v20 = 1;
  }
  else
  {
    CmpLockKcbStackShared(&v105);
    v20 = 0;
    v21 = 1;
  }
  v87 = 1;
  if ( !v7[7] && !*v19 )
    goto LABEL_14;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
  {
    v71 = v90;
    v33 = 0;
    started = -1073740763;
    if ( (*(_BYTE *)(v90 + 48) & 1) == 0 )
      started = -1073741444;
LABEL_138:
    if ( v8 )
      goto LABEL_139;
    goto LABEL_140;
  }
  started = CmpTransSearchAddTransFromKeyBody(v7, &v103);
  if ( started < 0 )
  {
LABEL_154:
    v33 = 0;
LABEL_137:
    v71 = v90;
    goto LABEL_138;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
  {
    started = -1072103423;
    goto LABEL_154;
  }
LABEL_14:
  v22 = v103;
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, v22) )
    {
      v71 = v90;
      v33 = 0;
      v21 = 1;
      started = -1073740763;
      if ( (*(_BYTE *)(v90 + 48) & 1) == 0 )
        started = -1073741444;
      goto LABEL_138;
    }
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_149;
    }
    if ( v22 )
      break;
    v23 = v9 + 248;
    if ( *(int *)(v9 + 248) < 0 || (v23 = v9 + 264, *(_DWORD *)(v9 + 264)) )
    {
      started = CmpSnapshotTxOwnerArray(v23, &v100, &v110);
      if ( started >= 0 )
      {
        v24 = v100;
        Src = v100;
        CmpLogTransactionAbortedWithChildName(v9, 0LL, 1LL);
        CmpUnlockKcbStack(&v105);
        v28 = Privileges[1];
        v21 = 0;
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        v105 = 0LL;
        WORD1(v105) = -1;
        *(_OWORD *)Privileges = 0LL;
        CmpUnlockRegistry(v28, v25, v26, v27);
        v88 = 0;
        started = CmpRollbackTransactionArray(v24, v110, v29, &v107, Src);
        if ( started >= 0 )
        {
          IsShutdownRundownActive = CmpIsShutdownRundownActive();
          goto LABEL_2;
        }
        goto LABEL_154;
      }
LABEL_149:
      v33 = 0;
      goto LABEL_136;
    }
LABEL_37:
    v33 = 0;
    if ( CmpIsKeyStackSymlink((__int64)&v105) )
    {
      if ( BugCheckParameter3_4 != 6
        || (v35 = v93, (v93 & 1) != 0)
        || v93 > 0xFFFF
        || !String2
        || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
        || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
      {
        started = -1073741790;
        goto LABEL_136;
      }
    }
    else
    {
      v35 = v93;
    }
    if ( *(_DWORD *)(v9 + 40) == -1 )
    {
      CmpUnlockKcbStack(&v105);
      LOBYTE(v36) = 1;
      v87 = 0;
      started = CmpPromoteKey(&v105, 0LL, v36);
      if ( started < 0 )
        goto LABEL_136;
      v7 = (ULONG_PTR *)v90;
      v20 = 1;
      v87 = 1;
    }
    else
    {
      if ( v20 )
        goto LABEL_57;
      v37 = CmpCompareNewValueDataAgainstKCBCache(v9, (__int64)String2, BugCheckParameter3_4, v108, v35);
      if ( v37 != 1 )
      {
        if ( !v37 )
        {
          started = 0;
          goto LABEL_136;
        }
        v20 = 1;
        if ( *(struct _KTHREAD **)(v9 + 56) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(v9) )
        {
          CmpUnlockKcbStack(&v105);
          CmpLockKcbStackTopExclusiveRestShared(&v105);
          v7 = (ULONG_PTR *)v90;
          goto LABEL_14;
        }
LABEL_57:
        v38 = *(_QWORD *)(v9 + 32);
        ++*(_QWORD *)(v9 + 304);
        v39 = (signed __int64 *)(v38 + 72);
        v40 = KeAbPreAcquire((__int64)v39, 0LL);
        if ( _InterlockedCompareExchange64(v39, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v39, 0LL, v40, (__int64)v39);
        if ( v40 )
          *(_BYTE *)(v40 + 18) = 1;
        v41 = v103;
        v33 = 1;
        if ( !v103 )
        {
          started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40));
          if ( started < 0 )
          {
LABEL_136:
            v21 = v87;
            goto LABEL_137;
          }
        }
        v42 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v42, *(unsigned int *)(v9 + 40));
        else
          CellFlat = HvpGetCellPaged(v42);
        v44 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), CellFlat, *(_DWORD *)(v9 + 40));
        v45 = (_DWORD *)(v9 + 280);
        if ( !v41 )
          v45 = (_DWORD *)(v44 + 36);
        started = CmpFindNameInListWithStatus(
                    *(_QWORD *)(v9 + 32),
                    v45,
                    (__int64)String2,
                    0,
                    (__int64)&v92,
                    (__int64)&BugCheckParameter4);
        if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
          goto LABEL_104;
        v46 = BugCheckParameter4;
        if ( a7 )
        {
          started = CmpSnapshotKcbStackSecurity(&v105, v41, 859917635LL, &v112);
          if ( started < 0 )
            goto LABEL_104;
          if ( v46 != -1 )
          {
            v47 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v47 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(v47, v46);
            else
              CellPaged = HvpGetCellPaged(v47);
            IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), CellPaged);
            BugCheckParameter4_4 = IsValueTombstone == 0;
            if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v49, &v98);
            else
              HvpReleaseCellPaged(v49, &v98);
            if ( IsValueTombstone || (started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v46), started >= 0) )
            {
              v51 = BugCheckParameter4_4;
              goto LABEL_83;
            }
LABEL_104:
            if ( v44 )
            {
              v61 = *(_QWORD *)(v9 + 32);
              if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v61, &v101);
              else
                HvpReleaseCellPaged(v61, &v101);
            }
            if ( BugCheckParameter3 != -1 )
              CmpFreeValue(*(_QWORD *)(v9 + 32), BugCheckParameter3);
            v8 = v104;
            goto LABEL_136;
          }
          v51 = 0;
LABEL_83:
          BugCheckParameter4_4 = v51;
        }
        v52 = *(_DWORD *)(v9 + 40) >> 31;
        v109 = v52;
        if ( v41 )
        {
          LODWORD(Srca) = v93;
          started = CmpAddValueKeyNew(*(_QWORD *)(v9 + 32), (size_t)Srca, 1, (__int64)&BugCheckParameter3);
          if ( started < 0 )
            goto LABEL_104;
          v62 = *(_QWORD *)(v9 + 32);
          if ( v46 == -1 )
          {
            v92 = *(_DWORD *)(v9 + 280);
            started = CmpAddValueToListEx(v62, v9 + 280, 1);
            if ( started < 0 )
              goto LABEL_104;
          }
          else
          {
            CmpSwapValueInList(v62, BugCheckParameter3, v92, v9 + 280);
          }
          v63 = *(_QWORD *)(v9 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v63 + 72));
          KeAbPostRelease(v63 + 72);
          v64 = v104;
          if ( BugCheckParameter4 == -1 )
          {
            v65 = 4;
          }
          else
          {
            *((_DWORD *)v104 + 22) = BugCheckParameter4;
            v65 = 5;
          }
          v64[17] = v65;
          v64[18] = v109;
          v64[23] = BugCheckParameter3;
          started = CmAddLogForAction(v64, 1LL);
          if ( started >= 0 )
            goto LABEL_102;
          if ( v44 )
          {
            v66 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v66 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v66, &v101);
            else
              HvpReleaseCellPaged(v66, &v101);
            v44 = 0LL;
          }
          v67 = (signed __int64 *)(*(_QWORD *)(v9 + 32) + 72LL);
          v68 = KeAbPreAcquire((__int64)v67, 0LL);
          if ( _InterlockedCompareExchange64(v67, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v67, 0LL, v68, (__int64)v67);
          if ( v68 )
            *(_BYTE *)(v68 + 18) = 1;
          v69 = *(_QWORD *)(v9 + 32);
          if ( BugCheckParameter4 == -1 )
            CmpRemoveValueFromList(v69);
          else
            CmpSwapValueInList(v69, BugCheckParameter4, v92, v9 + 280);
          v70 = *(_QWORD *)(v9 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v70 + 72));
          KeAbPostRelease(v70 + 72);
        }
        else
        {
          v53 = *(_QWORD *)(v9 + 32);
          if ( v46 == -1 )
          {
            v56 = v93;
            started = CmpSetValueKeyNew(v53, BugCheckParameter3_4, (__int64)v108, v93, v52);
            if ( started < 0 )
              goto LABEL_104;
          }
          else
          {
            if ( (*(_BYTE *)(v53 + 140) & 1) != 0 )
              HvpGetCellFlat(v53, v46);
            else
              HvpGetCellPaged(v53);
            LODWORD(Size) = v93;
            v54 = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v108, Size, v52);
            v55 = *(_QWORD *)(v9 + 32);
            started = v54;
            if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v55, &v98);
            else
              HvpReleaseCellPaged(v55, &v98);
            if ( started < 0 )
              goto LABEL_104;
            v56 = v93;
          }
          v57 = String2;
          Length = String2->Length;
          if ( *(_DWORD *)(v44 + 60) < Length )
          {
            *(_DWORD *)(v44 + 60) = Length;
            *(_WORD *)(v9 + 178) = v57->Length;
          }
          if ( *(_DWORD *)(v44 + 64) < v56 )
          {
            *(_DWORD *)(v44 + 64) = v56;
            *(_DWORD *)(v9 + 180) = v56;
          }
          *(_QWORD *)(v44 + 4) = v17;
          *(_QWORD *)(v9 + 168) = v17;
          CmpCleanUpKcbCachedSymlink(v9);
          v59 = *(_DWORD *)(v44 + 40);
          v60 = *(_QWORD *)(v9 + 32);
          *(_DWORD *)(v9 + 96) = *(_DWORD *)(v44 + 36);
          *(_DWORD *)(v9 + 100) = v59;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v60 + 72));
          KeAbPostRelease(v60 + 72);
LABEL_102:
          BugCheckParameter3 = -1;
          v104 = 0LL;
          v89 = 0;
          CmpReportNotifyForKcbStack(&v105, v103, 4LL, v111, Srcb, Sizea, v86);
          started = 0;
        }
        v33 = 0;
        goto LABEL_104;
      }
      CmpUnlockKcbStack(&v105);
      CmpLockKcbStackTopExclusiveRestShared(&v105);
      v7 = (ULONG_PTR *)v90;
    }
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v104 = UnitOfWork;
  v8 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v21 = 1;
    started = -1073741670;
    v71 = v90;
    v33 = 0;
    goto LABEL_140;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v9);
  started = CmpTransEnlistUowInCmTrans(v8, v22);
  if ( started < 0 )
    goto LABEL_145;
  if ( (unsigned __int8)CmpLockIXLockIntent(v9 + 248, v8) && (unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v8, 1LL) )
  {
    v31 = (signed __int64 *)(*(_QWORD *)(v9 + 32) + 72LL);
    v32 = KeAbPreAcquire((__int64)v31, 0LL);
    if ( _InterlockedCompareExchange64(v31, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v31, 0LL, v32, (__int64)v31);
    if ( v32 )
      *(_BYTE *)(v32 + 18) = 1;
    v33 = 1;
    started = CmpCloneKCBValueListForTrans(v9, v103, &v89);
    if ( started < 0 )
      goto LABEL_146;
    v34 = *(_QWORD *)(v9 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
    KeAbPostRelease(v34 + 72);
    v22 = v103;
    goto LABEL_37;
  }
  started = -1072103423;
LABEL_145:
  v33 = 0;
LABEL_146:
  v21 = 1;
  v71 = v90;
LABEL_139:
  CmpRundownUnitOfWork((ULONG_PTR)v8);
  ExFreePoolWithTag(v8, 0x77554D43u);
LABEL_140:
  v72 = (ULONG_PTR *)(v9 + 32);
  if ( v89 )
  {
    v73 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v73 != -1 )
      HvFreeCell(*v72, v73);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v33 )
  {
    v74 = *v72;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v74 + 72));
    KeAbPostRelease(v74 + 72);
  }
  if ( v21 )
    CmpUnlockKcbStack(&v105);
  CmpDrainDelayDerefContext((_QWORD **)&v114);
  if ( v88 )
    CmpUnlockRegistry(v76, v75, v77, v78);
  if ( (_QWORD *)v111[0] != v111 )
    CmpSignalDeferredPosts(v111);
  CmpDetachFromRegistryProcess(v118);
  SeReleaseSubjectContext(&SubjectContext);
  v79 = v112;
  if ( started >= 0 && a7 && v112 )
  {
    *(_QWORD *)&v116 = __PAIR64__(v93, BugCheckParameter3_4);
    *((_QWORD *)&v116 + 1) = v108;
    SeAdtRegistryValueChangedAuditAlarm(
      0,
      (_DWORD)v112,
      0,
      (_DWORD)String2,
      v71,
      v113,
      (__int64)&v115,
      BugCheckParameter4_4);
  }
  if ( *((_QWORD *)&v115 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v115 + 1), 0x34414D43u);
  if ( v79 )
    CmpFreeTransientPoolWithTag(v79, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
