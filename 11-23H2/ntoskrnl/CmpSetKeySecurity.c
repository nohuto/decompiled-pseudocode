/*
 * XREFs of CmpSetKeySecurity @ 0x14070C5CC
 * Callers:
 *     CmpSecurityMethod @ 0x1406D5900 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     SeSetSecurityAccessMask @ 0x1407BC354 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpCheckKcbStackAccess @ 0x140A1B2A0 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A210A4 (CmpSnapshotTxOwnerArray.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26650 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  char v15; // di
  ULONG_PTR v16; // rdi
  char v17; // si
  int started; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PPRIVILEGE_SET v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  char v26; // r10
  int v27; // r8d
  ULONG_PTR v28; // rcx
  PPRIVILEGE_SET v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  PPRIVILEGE_SET v33; // rcx
  _QWORD *UnitOfWork; // rax
  signed __int64 *v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int64 *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rsi
  char v41; // r14
  __int64 KeyNodeForKcb; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rdi
  int v46; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+50h] [rbp-B0h]
  char v48; // [rsp+52h] [rbp-AEh]
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v57[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v63[3]; // [rsp+F0h] [rbp-10h] BYREF

  v59 = a6;
  v55 = 0xFFFFFFFFLL;
  v60 = a4;
  v51 = 0LL;
  WORD1(v51) = -1;
  v61 = a3;
  v7 = 0;
  v58 = a2;
  v8 = 0;
  v49 = 0;
  v9 = 0LL;
  v56 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v53 = 0;
  v50 = 0LL;
  memset(v63, 0, sizeof(v63));
  v48 = 0;
  v54 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetBinContextInitialize((char *)&v55 + 4);
  v57[1] = v57;
  v57[0] = v57;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v63);
  while ( 1 )
  {
    v47 = CmpAcquireShutdownRundown(v11, v10, v12);
    v15 = v47;
    if ( !v47 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v13, v10);
    else
      CmpLockRegistry(v13, v10, v12, v14);
    v16 = *(_QWORD *)(a1 + 8);
    v17 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_39:
      started = -1073741790;
      goto LABEL_43;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v51, v16);
    if ( started < 0 )
      goto LABEL_43;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v51);
      v48 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_43;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v50);
      if ( started < 0 )
        goto LABEL_43;
      started = CmpPerformKeyBodyDeletionCheck(a1, v50);
      if ( started < 0 )
        goto LABEL_43;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_39;
    if ( !*(_WORD *)(v16 + 66) || *(_BYTE *)(v16 + 65) || v7 )
    {
      v25 = v50;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v58, &v53);
        LOBYTE(v27) = v26;
        started = CmpCheckKcbStackAccess((unsigned int)&v51, v25, v27, v53, 0);
        if ( started < 0 )
          goto LABEL_42;
      }
      if ( *(_WORD *)(v16 + 66) )
      {
        if ( !*(_BYTE *)(v16 + 65) )
        {
          LOBYTE(v10) = 1;
          started = CmpPromoteKey(&v51, v10, 0LL);
          if ( started < 0 )
            goto LABEL_42;
          started = CmpPartialPromoteSubkeys(&v51);
          if ( started < 0 )
            goto LABEL_42;
        }
      }
      if ( v25 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
          goto LABEL_42;
        }
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v9 = UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
          goto LABEL_42;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v16);
        started = CmpTransEnlistUowInCmTrans(v9, v25);
        if ( started < 0 )
          goto LABEL_92;
        if ( !(unsigned __int8)CmpLockIXLockExclusive(v16 + 248, v9, 0LL)
          || !(unsigned __int8)CmpLockIXLockExclusive(v16 + 264, v9, 1LL) )
        {
          started = -1072103423;
          goto LABEL_92;
        }
LABEL_61:
        if ( !v7 )
        {
          v36 = (signed __int64 *)(*(_QWORD *)(v16 + 32) + 72LL);
          v37 = KeAbPreAcquire((__int64)v36, 0LL);
          if ( _InterlockedCompareExchange64(v36, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v36, 0LL, v37, (__int64)v36);
          if ( v37 )
            *(_BYTE *)(v37 + 18) = 1;
          v38 = (unsigned __int64 *)(*(_QWORD *)(v16 + 32) + 1784LL);
          v8 = 1;
          v39 = KeAbPreAcquire((__int64)v38, 0LL);
          v40 = v39;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
            ExfAcquirePushLockExclusiveEx(v38, v39, (__int64)v38);
          if ( v40 )
            *(_BYTE *)(v40 + 18) = 1;
          v25 = v50;
        }
        started = CmpSetSecurityDescriptorInfo(
                    v16,
                    (_DWORD)v58,
                    v61,
                    v60,
                    a5,
                    v59,
                    v25,
                    (__int64)v9,
                    (__int64)&SubjectContext);
        v41 = v8;
        if ( started >= 0 )
        {
          v9 = 0LL;
          if ( v8 )
          {
            CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
            v41 = 0;
          }
          if ( *(_WORD *)(v16 + 66) && !*(_BYTE *)(v16 + 65) )
          {
            LOBYTE(v12) = v8;
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v16, &v55, v12);
            *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
            v43 = *(_QWORD *)(v16 + 32);
            if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v43, &v55);
            else
              HvpReleaseCellPaged(v43, (unsigned int *)&v55);
            *(_BYTE *)(v16 + 65) = 2;
          }
          if ( v8 )
          {
            v44 = *(_QWORD *)(v16 + 32);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v44 + 72));
            KeAbPostRelease(v44 + 72);
            LODWORD(v25) = v50;
            v8 = 0;
          }
          CmpReportNotifyForKcbStack((__int64)&v51, v25, 10, (__int64)v57);
          started = 0;
        }
        if ( v41 )
          CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
        if ( v8 )
        {
          v45 = *(_QWORD *)(v16 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
          KeAbPostRelease(v45 + 72);
        }
        if ( v9 )
        {
LABEL_92:
          CmpRundownUnitOfWork((ULONG_PTR)v9);
          ExFreePoolWithTag(v9, 0x77554D43u);
        }
LABEL_42:
        v17 = 1;
LABEL_43:
        v15 = v47;
        goto LABEL_44;
      }
      v28 = v16 + 248;
      if ( !*(_DWORD *)(v16 + 248) )
      {
        v28 = v16 + 264;
        if ( !*(_DWORD *)(v16 + 264) )
          goto LABEL_61;
      }
      v15 = 0;
      started = CmpSnapshotTxOwnerArray(v28, &v49, &v56);
      if ( started < 0 )
        goto LABEL_42;
      if ( v48 )
      {
        CmpUnlockKcbStack((__int64)&v51);
        v48 = 0;
      }
      v29 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v51 = 0LL;
      WORD1(v51) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v29, v10, v12, v14);
      v17 = 0;
      CmpReleaseShutdownRundown(v31, v30);
      started = CmpRollbackTransactionArray(v49, v56, v32, &v54, v46);
      if ( started < 0 )
        goto LABEL_44;
    }
    else
    {
      v7 = 1;
      CmpUnlockKcbStack((__int64)&v51);
      v22 = Privileges[1];
      v48 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v51 = 0LL;
      WORD1(v51) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v22, v19, v20, v21);
      CmpReleaseShutdownRundown(v24, v23);
    }
  }
  started = -1073741431;
  v17 = 0;
LABEL_44:
  if ( v48 )
    CmpUnlockKcbStack((__int64)&v51);
  v33 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v17 )
    CmpUnlockRegistry(v33, v10, v12, v14);
  if ( (_QWORD *)v57[0] != v57 )
    CmpSignalDeferredPosts(v57);
  if ( v15 )
    CmpReleaseShutdownRundown(v33, v10);
  CmpDetachFromRegistryProcess(v63);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
