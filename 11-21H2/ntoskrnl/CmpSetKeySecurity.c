/*
 * XREFs of CmpSetKeySecurity @ 0x140677810
 * Callers:
 *     CmpSecurityMethod @ 0x140721010 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInKcb @ 0x1402A21B0 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1402A2204 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpLockIXLockExclusive @ 0x14067E9B8 (CmpLockIXLockExclusive.c)
 *     CmpAllocateUnitOfWork @ 0x14067EA18 (CmpAllocateUnitOfWork.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14067F480 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeSetSecurityAccessMask @ 0x1406B5B10 (SeSetSecurityAccessMask.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14071C120 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmpCheckKcbStackAccess @ 0x140918134 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x14091BC64 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14091ECE0 (CmpSnapshotTxOwnerArray.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r14
  char v8; // r12
  char v9; // r13
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // rdi
  int started; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PPRIVILEGE_SET v19; // rcx
  __int64 v20; // r14
  char v21; // r10
  int v22; // r8d
  ULONG_PTR v23; // rcx
  char v24; // r14
  PPRIVILEGE_SET v25; // rcx
  char v26; // di
  __int64 v27; // r8
  PPRIVILEGE_SET v28; // rcx
  _QWORD *UnitOfWork; // rax
  char v31; // r15
  __int64 KeyNodeForKcb; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  char v41; // [rsp+50h] [rbp-B0h]
  char v42; // [rsp+52h] [rbp-AEh]
  unsigned int v43; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v44; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v57[3]; // [rsp+E8h] [rbp-18h] BYREF

  v54 = a6;
  v48 = 0xFFFFFFFFLL;
  v55 = a4;
  v44 = 0LL;
  WORD1(v44) = -1;
  v51 = a3;
  v7 = 0;
  v53 = a2;
  v8 = 0;
  v43 = 0;
  v9 = 0;
  v49 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v46 = 0;
  v50 = 0LL;
  memset(v57, 0, sizeof(v57));
  v42 = 0;
  v47 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetBinContextInitialize((char *)&v48 + 4);
  v52[1] = v52;
  v52[0] = v52;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v57);
  while ( 1 )
  {
    v41 = CmpAcquireShutdownRundown();
    if ( !v41 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v14 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_39:
      started = -1073741790;
      goto LABEL_40;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v44, v14);
    if ( started < 0 )
      goto LABEL_40;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v44);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_40;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v50);
      if ( started < 0 )
        goto LABEL_40;
      started = CmpPerformKeyBodyDeletionCheck(a1, v50);
      if ( started < 0 )
        goto LABEL_40;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_39;
    if ( !*(_WORD *)(v14 + 66) || *(_BYTE *)(v14 + 65) || v7 )
    {
      v20 = v50;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v53, &v46);
        LOBYTE(v22) = v21;
        started = CmpCheckKcbStackAccess((unsigned int)&v44, v20, v22, v46, 0);
        if ( started < 0 )
          goto LABEL_40;
      }
      if ( *(_WORD *)(v14 + 66) )
      {
        if ( !*(_BYTE *)(v14 + 65) )
        {
          LOBYTE(v11) = 1;
          started = CmpPromoteKey(&v44, v11, 0LL);
          if ( started < 0 )
            goto LABEL_40;
          started = CmpPartialPromoteSubkeys(&v44);
          if ( started < 0 )
            goto LABEL_40;
        }
      }
      if ( v20 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v14);
            started = CmpTransEnlistUowInCmTrans(v10, v20);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v14 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v14 + 264, v10, 1LL) )
              {
LABEL_61:
                if ( !v42 )
                {
                  ExAcquirePushLockSharedEx(*(_QWORD *)(v14 + 32) + 72LL, 0LL);
                  v8 = 1;
                  ExAcquirePushLockExclusiveEx(*(_QWORD *)(v14 + 32) + 1784LL, 0LL);
                }
                started = CmpSetSecurityDescriptorInfo(
                            v14,
                            (_DWORD)v53,
                            v51,
                            v55,
                            a5,
                            v54,
                            v20,
                            (__int64)v10,
                            (__int64)&SubjectContext);
                v31 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v14 + 32));
                    v31 = 0;
                  }
                  if ( *(_WORD *)(v14 + 66) && !*(_BYTE *)(v14 + 65) )
                  {
                    LOBYTE(v12) = v8;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v14, &v48, v12);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    v33 = *(_QWORD *)(v14 + 32);
                    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v33, &v48);
                    else
                      HvpReleaseCellPaged(v33, &v48);
                    *(_BYTE *)(v14 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    v34 = *(_QWORD *)(v14 + 32);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
                    KeAbPostRelease(v34 + 72);
                    v20 = v50;
                    started = 0;
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack(&v44, v20, 10LL, v52, v36, v37, v38, v39, v40);
                }
                if ( v31 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v14 + 32));
                if ( v8 )
                {
                  v35 = *(_QWORD *)(v14 + 32);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v35 + 72));
                  KeAbPostRelease(v35 + 72);
                }
                if ( !v10 )
                  goto LABEL_40;
              }
              else
              {
                started = -1072103423;
              }
            }
            CmpRundownUnitOfWork((ULONG_PTR)v10);
            ExFreePoolWithTag(v10, 0x77554D43u);
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_40:
        v26 = 1;
        goto LABEL_41;
      }
      v23 = v14 + 248;
      if ( !*(_DWORD *)(v14 + 248) )
      {
        v23 = v14 + 264;
        if ( !*(_DWORD *)(v14 + 264) )
          goto LABEL_61;
      }
      v24 = 0;
      started = CmpSnapshotTxOwnerArray(v23, &v43, &v49);
      if ( started < 0 )
        goto LABEL_40;
      if ( v9 )
      {
        CmpUnlockKcbStack(&v44);
        v9 = 0;
      }
      v25 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v44 = 0LL;
      WORD1(v44) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v25, v11, v12, v13, v36, v37);
      v26 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v43, v49, v27, &v47);
      if ( started < 0 )
        goto LABEL_42;
      v7 = v42;
    }
    else
    {
      v7 = 1;
      v42 = 1;
      CmpUnlockKcbStack(&v44);
      v19 = Privileges[1];
      v9 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v44 = 0LL;
      WORD1(v44) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v19, v16, v17, v18, v36, v37);
      CmpReleaseShutdownRundown();
    }
  }
  started = -1073741431;
  v26 = 0;
LABEL_41:
  v24 = v41;
LABEL_42:
  if ( v9 )
    CmpUnlockKcbStack(&v44);
  v28 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v26 )
    CmpUnlockRegistry(v28, v11, v12, v13, v36, v37);
  if ( (_QWORD *)v52[0] != v52 )
    CmpSignalDeferredPosts(v52);
  if ( v24 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess(v57);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
