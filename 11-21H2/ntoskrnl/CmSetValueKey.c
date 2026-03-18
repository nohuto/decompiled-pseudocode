/*
 * XREFs of CmSetValueKey @ 0x140720260
 * Callers:
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpSwapValueInList @ 0x1402564B4 (CmpSwapValueInList.c)
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x14067EF3C (CmpLockIXLockIntent.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1406BEFA0 (CmpRemoveValueFromList.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x1406C01F4 (CmpIsValueTombstone.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406C8F10 (CmpCloneKCBValueListForTrans.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmAddLogForAction @ 0x14071784C (CmAddLogForAction.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14071EE50 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackSymlink @ 0x140720DD4 (CmpIsKeyStackSymlink.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140721FFC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInListWithStatus @ 0x1407221B0 (CmpFindNameInListWithStatus.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     CmpSetValueKeyNew @ 0x14079B2C0 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x14079B758 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x14079B920 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140918BC4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14091ECE0 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140921930 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r12
  _QWORD *v8; // r13
  ULONG_PTR v9; // rsi
  int v10; // rdx^4
  _BOOL8 v11; // rdx
  char IsShutdownRundownActive; // al
  unsigned int v13; // r15d
  __int64 v14; // rbx
  int started; // edi
  __int64 v16; // rdi
  char v17; // r14
  __int64 v18; // r12
  ULONG_PTR v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PPRIVILEGE_SET v25; // rcx
  __int64 v26; // r8
  _QWORD *UnitOfWork; // rax
  __int64 v28; // r8
  char v29; // r15
  __int64 v30; // rdi
  PCUNICODE_STRING v31; // rdi
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  __int64 v37; // r14
  unsigned int v38; // r13d
  ULONG_PTR v39; // rcx
  __int64 CellPaged; // rax
  __int64 v41; // rcx
  bool IsValueTombstone; // di
  BOOL v43; // eax
  ULONG_PTR v44; // rcx
  int v45; // edi
  __int64 v46; // rax
  unsigned int v47; // r12d
  int v48; // eax
  __int64 v49; // rcx
  bool v50; // sf
  PCUNICODE_STRING v51; // rcx
  unsigned int Length; // eax
  int v53; // ecx
  __int64 v54; // rbx
  __int64 v55; // rcx
  ULONG_PTR v56; // rcx
  __int64 v57; // rbx
  int v58; // ebx
  _DWORD *v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  ULONG_PTR v62; // rcx
  __int64 v63; // rbx
  ULONG_PTR v64; // rdx
  bool v65; // zf
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  void *v71; // rbx
  void *Src; // [rsp+20h] [rbp-E0h]
  void *Srca; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  size_t Sizea; // [rsp+28h] [rbp-D8h]
  int v77[2]; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+38h] [rbp-C8h]
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+48h] [rbp-B8h]
  char PreviousMode; // [rsp+50h] [rbp-B0h]
  __int64 v82; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v83; // [rsp+5Ch] [rbp-A4h]
  unsigned int v84; // [rsp+60h] [rbp-A0h]
  BOOL v85; // [rsp+64h] [rbp-9Ch]
  __int64 v86; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v87; // [rsp+70h] [rbp-90h] BYREF
  _DWORD BugCheckParameter4[3]; // [rsp+74h] [rbp-8Ch] BYREF
  PCUNICODE_STRING String2; // [rsp+80h] [rbp-80h]
  _DWORD *v90; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  __int128 v92; // [rsp+98h] [rbp-68h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+B8h] [rbp-48h] BYREF
  void *v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v97[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v98; // [rsp+E0h] [rbp-20h]
  void *v99; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v100; // [rsp+F8h] [rbp-8h]
  __int128 v101; // [rsp+100h] [rbp+0h] BYREF
  __int128 v102; // [rsp+110h] [rbp+10h] BYREF
  __int128 v103; // [rsp+120h] [rbp+20h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v105[3]; // [rsp+150h] [rbp+50h] BYREF

  v100 = a6;
  v7 = a1;
  String2 = a2;
  v97[1] = v97;
  v97[0] = v97;
  v8 = 0LL;
  v80 = a1;
  v92 = 0LL;
  WORD1(v92) = -1;
  v95 = a4;
  v9 = 0LL;
  v83 = a3;
  v87 = 0;
  v96 = 0LL;
  v82 = 0xFFFFFFFF00000000uLL;
  memset(v105, 0, sizeof(v105));
  v90 = 0LL;
  BYTE1(v79) = 0;
  v94 = 0;
  v101 = 0LL;
  v91 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize(&BugCheckParameter4[2]);
  HIDWORD(v86) = v10;
  LODWORD(v86) = -1;
  HvpGetBinContextInitialize((char *)&v86 + 4);
  CmpInitializeDelayDerefContext(&v101);
  v102 = 0LL;
  BugCheckParameter4[0] = -1;
  v103 = 0LL;
  v99 = (void *)v11;
  v85 = v11;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v105);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v13 = a5;
  v84 = a5;
  while ( 2 )
  {
    if ( IsShutdownRundownActive )
    {
      v17 = 0;
      LOBYTE(v79) = 0;
      v29 = 0;
      started = -1073741431;
      goto LABEL_126;
    }
    v14 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 8);
    LOBYTE(v79) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_141;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v92, v9);
    if ( started < 0 )
    {
LABEL_141:
      v17 = 0;
      v29 = 0;
      goto LABEL_126;
    }
    v16 = v80;
    if ( *(_QWORD *)(v80 + 56) || *(_QWORD *)(v80 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v92);
      v17 = 1;
    }
    else
    {
      CmpLockKcbStackShared(&v92);
      v17 = 0;
    }
    if ( *(_QWORD *)(v16 + 56) || *(_QWORD *)(v16 + 64) )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v16, 0LL) )
      {
LABEL_136:
        v17 = 1;
        v29 = 0;
        v65 = (*(_BYTE *)(v16 + 48) & 1) == 0;
        started = -1073740763;
        if ( v65 )
          started = -1073741444;
        goto LABEL_125;
      }
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v16, &v91);
      if ( started < 0 )
      {
LABEL_42:
        v17 = 1;
        break;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        v17 = 1;
        v29 = 0;
        goto LABEL_125;
      }
LABEL_14:
      v16 = v80;
    }
    v18 = v91;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v16, v18) )
        goto LABEL_136;
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_41;
      if ( v18 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v90 = UnitOfWork;
        v8 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = v80;
          started = -1073741670;
          v17 = 1;
          v29 = 0;
          goto LABEL_128;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans(v8, v18);
        if ( started < 0 )
          goto LABEL_134;
        if ( !CmpLockIXLockIntent((unsigned int *)(v9 + 248), (__int64)v8, v28)
          || !CmpLockIXLockExclusive(v9 + 264, v8, 1LL) )
        {
          started = -1072103423;
LABEL_134:
          v7 = v80;
          v17 = 1;
          v29 = 0;
          goto LABEL_127;
        }
        ExAcquirePushLockSharedEx(*(_QWORD *)(v9 + 32) + 72LL, 0LL);
        v29 = 1;
        started = CmpCloneKCBValueListForTrans(v9, v18, (_BYTE *)&v79 + 1);
        if ( started < 0 )
        {
          v7 = v80;
          v17 = 1;
          goto LABEL_127;
        }
        v30 = *(_QWORD *)(v9 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v30 + 72));
        KeAbPostRelease(v30 + 72);
        v18 = v91;
        v13 = v84;
        goto LABEL_34;
      }
      v19 = v9 + 248;
      if ( *(int *)(v9 + 248) < 0 )
        break;
      v19 = v9 + 264;
      if ( *(_DWORD *)(v9 + 264) )
        break;
LABEL_34:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(&v92) )
      {
        if ( v83 != 6
          || (v13 & 1) != 0
          || v13 > 0xFFFF
          || (v31 = String2) == 0LL
          || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
          || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
        {
LABEL_41:
          started = -1073741790;
          goto LABEL_42;
        }
      }
      else
      {
        v31 = String2;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack(&v92);
        LOBYTE(v32) = 1;
        v17 = 0;
        started = CmpPromoteKey(&v92, 0LL, v32);
        if ( started < 0 )
          goto LABEL_43;
        v16 = v80;
        v17 = 1;
      }
      else
      {
        if ( v17 )
          goto LABEL_56;
        v33 = CmpCompareNewValueDataAgainstKCBCache(v9, v31, v83, v95, v13);
        if ( v33 != 1 )
        {
          v17 = 1;
          if ( !v33 )
          {
            started = 0;
            v29 = 0;
            goto LABEL_125;
          }
          if ( *(struct _KTHREAD **)(v9 + 56) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            CmpUnlockKcbStack(&v92);
            CmpLockKcbStackTopExclusiveRestShared((__int64)&v92);
            goto LABEL_14;
          }
          v18 = v91;
LABEL_56:
          v34 = *(_QWORD *)(v9 + 32);
          ++*(_QWORD *)(v9 + 304);
          ExAcquirePushLockSharedEx(v34 + 72, 0LL);
          v29 = 1;
          if ( !v18 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0);
            v17 = 1;
            if ( started < 0 )
              goto LABEL_125;
          }
          v35 = *(_QWORD *)(v9 + 32);
          if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v35, *(unsigned int *)(v9 + 40), &BugCheckParameter4[1]);
          else
            CellFlat = HvpGetCellPaged(v35);
          v37 = CellFlat;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), CellFlat, *(unsigned int *)(v9 + 40));
          started = CmpFindNameInListWithStatus(*(_QWORD *)(v9 + 32), (__int64)&v82, (__int64)BugCheckParameter4);
          if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
            goto LABEL_97;
          v38 = BugCheckParameter4[0];
          if ( a7 )
          {
            started = CmpSnapshotKcbStackSecurity(&v92, v18, 859917635LL, &v99);
            if ( started < 0 )
              goto LABEL_97;
            if ( v38 != -1 )
            {
              v39 = *(_QWORD *)(v9 + 32);
              if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v39, v38, &v86);
              else
                CellPaged = HvpGetCellPaged(v39);
              IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), CellPaged);
              v85 = !IsValueTombstone;
              if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v41, &v86);
              else
                HvpReleaseCellPaged(v41, &v86);
              if ( IsValueTombstone || (started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v38), started >= 0) )
              {
                v43 = v85;
                goto LABEL_77;
              }
              goto LABEL_97;
            }
            v43 = 0;
LABEL_77:
            v85 = v43;
          }
          v44 = *(_QWORD *)(v9 + 32);
          v45 = *(_DWORD *)(v9 + 40) >> 31;
          v98 = v45;
          if ( v18 )
          {
            LODWORD(Src) = v84;
            started = CmpAddValueKeyNew(v44, (size_t)Src, 1, (__int64)&v82 + 4);
            if ( started < 0 )
              goto LABEL_97;
            v56 = *(_QWORD *)(v9 + 32);
            if ( v38 == -1 )
            {
              LODWORD(v82) = *(_DWORD *)(v9 + 280);
              started = CmpAddValueToListEx(v56, v9 + 280, 1);
              if ( started < 0 )
                goto LABEL_97;
            }
            else
            {
              CmpSwapValueInList(v56, SHIDWORD(v82), v82, v9 + 280);
            }
            v57 = *(_QWORD *)(v9 + 32);
            v29 = 0;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v57 + 72));
            KeAbPostRelease(v57 + 72);
            v58 = BugCheckParameter4[0];
            v59 = v90;
            if ( BugCheckParameter4[0] == -1 )
            {
              v60 = 4;
            }
            else
            {
              v90[22] = BugCheckParameter4[0];
              v60 = 5;
            }
            v59[17] = v60;
            v59[18] = v98;
            v59[23] = HIDWORD(v82);
            started = CmAddLogForAction((__int64)v59, 1u);
            if ( started < 0 )
            {
              if ( v37 )
              {
                v61 = *(_QWORD *)(v9 + 32);
                if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v61, &BugCheckParameter4[1]);
                else
                  HvpReleaseCellPaged(v61, &BugCheckParameter4[1]);
                v37 = 0LL;
              }
              ExAcquirePushLockSharedEx(*(_QWORD *)(v9 + 32) + 72LL, 0LL);
              v62 = *(_QWORD *)(v9 + 32);
              if ( v58 == -1 )
                CmpRemoveValueFromList(v62, v82, (unsigned int *)(v9 + 280));
              else
                CmpSwapValueInList(v62, v58, v82, v9 + 280);
              v63 = *(_QWORD *)(v9 + 32);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 72), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v63 + 72));
              KeAbPostRelease(v63 + 72);
              goto LABEL_97;
            }
          }
          else
          {
            if ( v38 == -1 )
            {
              v47 = v84;
              started = CmpSetValueKeyNew(v44, v37, (_DWORD)String2, v82, v83, (__int64)v95, v84, v45);
              v50 = started < 0;
            }
            else
            {
              if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
                v46 = HvpGetCellFlat(v44, v38, &v86);
              else
                v46 = HvpGetCellPaged(v44);
              v47 = v84;
              LODWORD(Size) = v84;
              v48 = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v38, v46, v83, v95, Size, v45);
              v49 = *(_QWORD *)(v9 + 32);
              started = v48;
              if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v49, &v86);
              else
                HvpReleaseCellPaged(v49, &v86);
              v50 = started < 0;
            }
            if ( v50 )
              goto LABEL_97;
            v51 = String2;
            Length = String2->Length;
            if ( *(_DWORD *)(v37 + 60) < Length )
            {
              *(_DWORD *)(v37 + 60) = Length;
              *(_WORD *)(v9 + 178) = v51->Length;
            }
            if ( *(_DWORD *)(v37 + 64) < v47 )
            {
              *(_DWORD *)(v37 + 64) = v47;
              *(_DWORD *)(v9 + 180) = v47;
            }
            *(_QWORD *)(v37 + 4) = v14;
            *(_QWORD *)(v9 + 168) = v14;
            CmpCleanUpKcbCachedSymlink(v9);
            v53 = *(_DWORD *)(v37 + 40);
            v54 = *(_QWORD *)(v9 + 32);
            *(_DWORD *)(v9 + 96) = *(_DWORD *)(v37 + 36);
            *(_DWORD *)(v9 + 100) = v53;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v54 + 72));
            KeAbPostRelease(v54 + 72);
          }
          HIDWORD(v82) = -1;
          v90 = 0LL;
          BYTE1(v79) = 0;
          CmpReportNotifyForKcbStack(&v92, v91, 4LL, v97, Srca, Sizea, *(_QWORD *)v77, v78, v79);
          started = 0;
          v29 = 0;
LABEL_97:
          if ( v37 )
          {
            v55 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v55, &BugCheckParameter4[1]);
            else
              HvpReleaseCellPaged(v55, &BugCheckParameter4[1]);
          }
          v17 = 1;
          if ( HIDWORD(v82) != -1 )
            CmpFreeValue(*(_QWORD *)(v9 + 32), HIDWORD(v82));
          v8 = v90;
          goto LABEL_125;
        }
        CmpUnlockKcbStack(&v92);
        CmpLockKcbStackTopExclusiveRestShared((__int64)&v92);
        v16 = v80;
      }
    }
    started = CmpSnapshotTxOwnerArray(v19, &v87, &v96);
    if ( started < 0 )
      goto LABEL_42;
    v21 = v87;
    CmpLogTransactionAbortedWithChildName(v9, 0LL, 1u, v20, v87);
    CmpUnlockKcbStack(&v92);
    v25 = Privileges[1];
    v17 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v92 = 0LL;
    WORD1(v92) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v25, v22, v23, v24);
    LOBYTE(v79) = 0;
    started = CmpRollbackTransactionArray(v21, v96, v26, &v94);
    if ( started >= 0 )
    {
      IsShutdownRundownActive = CmpIsShutdownRundownActive();
      v7 = v80;
      continue;
    }
    break;
  }
LABEL_43:
  v29 = 0;
LABEL_125:
  v7 = v80;
LABEL_126:
  if ( v8 )
  {
LABEL_127:
    CmpRundownUnitOfWork(v8);
    ExFreePoolWithTag(v8, 0x77554D43u);
  }
LABEL_128:
  if ( BYTE1(v79) )
  {
    v64 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v64 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v64);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v29 )
  {
    v66 = *(_QWORD *)(v9 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v66 + 72));
    KeAbPostRelease(v66 + 72);
  }
  if ( v17 )
    CmpUnlockKcbStack(&v92);
  CmpDrainDelayDerefContext((_QWORD **)&v101);
  if ( (_BYTE)v79 )
    CmpUnlockRegistry(v68, v67, v69, v70);
  if ( v97[0] != v97 )
    CmpSignalDeferredPosts(v97);
  CmpDetachFromRegistryProcess(v105);
  SeReleaseSubjectContext(&SubjectContext);
  v71 = v99;
  if ( started >= 0 && a7 && v99 )
  {
    *(_QWORD *)&v103 = __PAIR64__(v84, v83);
    *((_QWORD *)&v103 + 1) = v95;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v99, 0, (_DWORD)String2, v7, v100, (__int64)&v102, v85);
  }
  if ( *((_QWORD *)&v102 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v102 + 1), 0x34414D43u);
  if ( v71 )
    CmpFreeTransientPoolWithTag(v71, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
