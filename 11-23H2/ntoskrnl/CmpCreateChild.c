/*
 * XREFs of CmpCreateChild @ 0x1406D0FA0
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x140303028 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1403030C0 (CmpTransEnlistUowInKcb.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetEffectiveCellType @ 0x1406804C4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpRecordParseFailure @ 0x140693738 (CmpRecordParseFailure.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EDC (CmpIsKeyStackDeleted.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D56B0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpAddSubKeyEx @ 0x140708778 (CmpAddSubKeyEx.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     CmpCopyName @ 0x14070AC60 (CmpCopyName.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x14070B670 (CmpMarkKeyDirty.c)
 *     CmpFreeSecurityDescriptor @ 0x14070C1E0 (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076AAAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x14076ABB4 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 *     CmpLockIXLockIntent @ 0x14076AE20 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076B0FC (CmpLockIXLockExclusive.c)
 *     CmpNameSize @ 0x1407B6C9C (CmpNameSize.c)
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 *     SeDeassignSecurity @ 0x1407BF6D0 (SeDeassignSecurity.c)
 *     SeAssignSecurity @ 0x1407C1F50 (SeAssignSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x1407D3770 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1407E9FC8 (CmpLogTransactionAbortedWithChildName.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpLogUnsupportedOperation @ 0x140A200A0 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A210A4 (CmpSnapshotTxOwnerArray.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  __int64 v9; // rbx
  char v10; // di
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 KcbAtLayerHeight; // r13
  char v14; // r9
  ULONG_PTR v15; // r15
  ULONG_PTR v16; // rsi
  int v17; // ebx
  _DWORD *v18; // rdi
  char v19; // al
  int v20; // edx
  _DWORD *v21; // r8
  int v22; // edx
  __int16 v23; // cx
  __int16 v24; // dx
  __int64 v25; // r11
  void *v26; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // r12d
  unsigned __int64 v32; // r14
  __int64 CellFlat; // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int Cell; // eax
  __int64 v38; // rax
  __int64 v39; // r12
  int SecurityDescriptorNode; // eax
  __int64 v41; // rbx
  __int64 CellPaged; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // r14
  _QWORD *UnitOfWork; // rax
  int v47; // eax
  _QWORD *v48; // rax
  PVOID v49; // r12
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rbx
  __int16 v59; // ax
  unsigned __int16 v60; // ax
  __int16 v61; // cx
  __int64 v62; // rax
  __int64 v63; // r14
  int v64; // eax
  char v65; // al
  PVOID v66; // r15
  PVOID v67; // r15
  PSECURITY_DESCRIPTOR v68; // r15
  int v69; // eax
  __int64 v70; // rbx
  int v71; // eax
  _DWORD *v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  ULONG_PTR v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rdi
  void *v81; // rcx
  __int64 v82; // rcx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-108h]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-108h]
  PGENERIC_MAPPING GenericMapping; // [rsp+28h] [rbp-100h]
  PGENERIC_MAPPING GenericMappinga; // [rsp+28h] [rbp-100h]
  POOL_TYPE PoolType[2]; // [rsp+30h] [rbp-F8h]
  POOL_TYPE PoolTypea[2]; // [rsp+30h] [rbp-F8h]
  char v90; // [rsp+40h] [rbp-E8h]
  char v91; // [rsp+41h] [rbp-E7h]
  char v92; // [rsp+43h] [rbp-E5h]
  char v93; // [rsp+44h] [rbp-E4h]
  __int16 v94; // [rsp+48h] [rbp-E0h]
  unsigned int BugCheckParameter4; // [rsp+4Ch] [rbp-DCh] BYREF
  __int16 BugCheckParameter4_4; // [rsp+50h] [rbp-D8h]
  _DWORD BugCheckParameter3[3]; // [rsp+54h] [rbp-D4h] BYREF
  __int64 v98; // [rsp+60h] [rbp-C8h] BYREF
  PVOID v99; // [rsp+68h] [rbp-C0h]
  __int64 v100; // [rsp+70h] [rbp-B8h] BYREF
  int v101; // [rsp+78h] [rbp-B0h]
  PVOID P; // [rsp+80h] [rbp-A8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v104; // [rsp+90h] [rbp-98h]
  void *v105; // [rsp+98h] [rbp-90h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-78h]
  _DWORD *v109; // [rsp+B8h] [rbp-70h]
  _QWORD *v110; // [rsp+C0h] [rbp-68h]
  _QWORD *v111; // [rsp+C8h] [rbp-60h]
  size_t Size; // [rsp+D0h] [rbp-58h]
  __int64 v113; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v114; // [rsp+E0h] [rbp-48h]
  _DWORD *v115; // [rsp+E8h] [rbp-40h]
  int v118; // [rsp+138h] [rbp+10h]
  char v119; // [rsp+138h] [rbp+10h]

  v9 = a2;
  v92 = 0;
  v90 = 0;
  v10 = 0;
  v93 = 0;
  v11 = 0LL;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  BugCheckParameter4 = -1;
  v106 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v106 + 4);
  v105 = 0LL;
  BugCheckParameter3[0] = -1;
  v98 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v98 + 4);
  v104 = 0LL;
  v100 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v100 + 4);
  NewDescriptor = 0LL;
  LODWORD(v107) = -1;
  v99 = 0LL;
  v110 = 0LL;
  P = 0LL;
  v111 = 0LL;
  v91 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12);
  v113 = KcbAtLayerHeight;
  v15 = CmpGetKcbAtLayerHeight(v9);
  v114 = v15;
  v16 = *(_QWORD *)(v15 + 32);
  v109 = (_DWORD *)v16;
  if ( a9 && (*(_DWORD *)(v16 + 160) & 2) != 0 )
  {
    v17 = -1072103423;
    v18 = (_DWORD *)a5;
    CmpRecordParseFailure(a5, 262400, -1072103423);
    v19 = 0;
    goto LABEL_166;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    v17 = -1073741811;
    v20 = 262528;
LABEL_6:
    v18 = (_DWORD *)a5;
    goto LABEL_7;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v16 + 4112) & 0x20) != 0 )
  {
    v10 = 1;
    v93 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v17 = -1073741790;
    v20 = 262656;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v17 = -1073741790;
    v20 = 262912;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v17 = -1073741790;
    v20 = 263168;
    goto LABEL_6;
  }
  v21 = (_DWORD *)(KcbAtLayerHeight + 184);
  if ( CmpVEEnabled == v14 || (v115 = (_DWORD *)(KcbAtLayerHeight + 184), (*v21 & 0x1000000) == 0) )
  {
    v22 = 0;
    v115 = (_DWORD *)(KcbAtLayerHeight + 184);
  }
  else
  {
    v22 = 1;
  }
  v23 = a6 | 0x100;
  if ( !v22 )
    v23 = a6;
  v24 = v23 | 0x200;
  if ( (*v21 & 0x2000000) == 0 )
    v24 = v23;
  v94 = v24;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v17 = -1073741790;
    v20 = 263424;
    goto LABEL_6;
  }
  v18 = (_DWORD *)a5;
  v101 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, a9, 512LL) == 1 && !v101 )
  {
    v17 = -1073741439;
    v20 = 263680;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
    v25 = a9;
  }
  BugCheckParameter4_4 = v94 & 2;
  if ( (v94 & 2) == 0 )
  {
    if ( v93 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, v25, 0LL) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 184) & 0x2000000) == 0
        || (v11 = *(_QWORD *)&BugCheckParameter3[1],
            (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode, 0LL, a5 + 16)) )
      {
        v26 = *(void **)(a3 + 64);
      }
      else
      {
        v26 = 0LL;
      }
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a9, 0LL);
      v28 = SeAssignSecurity(
              (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
              v26,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v28;
      if ( v28 < 0 )
      {
        CmpRecordParseFailure(a5, 264192, v28);
        v19 = 0;
        goto LABEL_166;
      }
      v9 = a2;
    }
  }
  if ( a9 && !(unsigned __int8)CmpIsKeyStackDeleted(v9, 0LL) )
  {
    v17 = CmpUndoDeleteKeyForTransEx(v15, a9, NewDescriptor);
    if ( v17 >= 0 )
      goto LABEL_8;
    v17 = -1073741772;
    v20 = 263936;
LABEL_7:
    CmpRecordParseFailure((__int64)v18, v20, v17);
LABEL_8:
    v19 = 0;
    goto LABEL_166;
  }
  v29 = v101;
  if ( a9 )
    v29 = 1;
  v118 = v29;
  v30 = *(_DWORD *)(v15 + 40);
  if ( v30 != -1 )
  {
    if ( v29 != v30 >> 31 )
      CmpLogUnsupportedOperation(2LL);
    v31 = *(_DWORD *)(v15 + 40) >> 31;
    if ( !a8 )
    {
      v32 = KeAbPreAcquire(v16 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v16 + 72), 0LL, v32, v16 + 72);
      if ( v32 )
        *(_BYTE *)(v32 + 18) = 1;
      v90 = 1;
    }
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v16, *(unsigned int *)(v15 + 40));
    else
      CellFlat = HvpGetCellPaged(v16);
    v11 = CellFlat;
    *(_QWORD *)&BugCheckParameter3[1] = CellFlat;
    if ( (unsigned __int16)CmpNameSize(a4) != *(_WORD *)(CellFlat + 72) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v20 = 264448;
      goto LABEL_7;
    }
    v34 = CmpMarkKeyDirty(v16);
    v17 = v34;
    if ( v34 < 0 )
    {
      CmpRecordParseFailure(a5, 264704, v34);
      v19 = 0;
      goto LABEL_166;
    }
    v35 = HvpMarkCellDirty(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
    v17 = v35;
    if ( v35 < 0 )
    {
      CmpRecordParseFailure(a5, 264960, v35);
      v19 = 0;
      goto LABEL_166;
    }
    v36 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v36 )
    {
      Cell = HvAllocateCell(v16, v36, v31, (unsigned int)BugCheckParameter3, (__int64)&v105, (__int64)&v98);
      v17 = Cell;
      if ( Cell < 0 )
      {
        CmpRecordParseFailure(a5, 265216, Cell);
        v19 = 0;
        goto LABEL_166;
      }
      memmove(v105, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, &v98);
      else
        HvpReleaseCellPaged(v16, &v98);
      v105 = 0LL;
    }
    v38 = KeAbPreAcquire(v16 + 1784, 0LL);
    v39 = v38;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 1784), v38, v16 + 1784);
    if ( v39 )
      *(_BYTE *)(v39 + 18) = 1;
    v119 = 1;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               v16,
                               *(_DWORD *)(v15 + 40),
                               v11,
                               *(_DWORD *)(v15 + 40) >> 31,
                               NewDescriptor,
                               1,
                               (unsigned int *)&v107);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v16);
      *(_DWORD *)(v11 + 44) = v107;
      CmUnlockHiveSecurity(v16);
      v119 = 0;
      *(_DWORD *)(v11 + 48) = BugCheckParameter3[0];
      *(_WORD *)(v11 + 74) = *(_WORD *)(a5 + 4);
      BugCheckParameter3[0] = -1;
      CmpCopyName((void *)(v11 + 76));
      *(_BYTE *)(v11 + 13) |= 3u;
      *(_WORD *)(v11 + 2) = v94;
      if ( *(_WORD *)(v11 + 72) < *a4 )
        *(_WORD *)(v11 + 2) = v94 | 0x20;
      v41 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v11 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v15 + 304);
      CmpRebuildKcbCacheFromNode(v15);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
      else
        CellPaged = HvpGetCellPaged(v16);
      v43 = CellPaged;
      v104 = CellPaged;
      *(_QWORD *)(CellPaged + 4) = v41;
      *(_QWORD *)(KcbAtLayerHeight + 168) = v41;
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      v44 = *(unsigned __int16 *)(v11 + 74);
      if ( *(_DWORD *)(v43 + 56) < v44 )
        *(_DWORD *)(v43 + 56) = v44;
      if ( v90 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
        KeAbPostRelease(v16 + 72);
        v90 = 0;
      }
      CmpReportNotifyForKcbStack(a1, 0LL, 1LL, 0LL, SubjectContext, GenericMapping, *(_QWORD *)PoolTypea);
      v17 = 0;
      v11 = *(_QWORD *)&BugCheckParameter3[1];
    }
    else
    {
      CmpRecordParseFailure(a5, 265728, SecurityDescriptorNode);
      v11 = *(_QWORD *)&BugCheckParameter3[1];
    }
    goto LABEL_165;
  }
  if ( !a8 )
  {
    v45 = KeAbPreAcquire(v16 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v16 + 72), 0LL, v45, v16 + 72);
    if ( v45 )
      *(_BYTE *)(v45 + 18) = 1;
    v90 = 1;
    v11 = *(_QWORD *)&BugCheckParameter3[1];
  }
  if ( !a9 )
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      if ( (a7 & 2) != 0 )
      {
        v17 = -1072103423;
        v20 = 267648;
        goto LABEL_7;
      }
      v51 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
      v17 = v51;
      if ( v51 >= 0 )
      {
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v17 = -1073741267;
        v20 = 268032;
        goto LABEL_7;
      }
      CmpRecordParseFailure(a5, 267776, v51);
      v19 = 0;
    }
    else if ( *(int *)(KcbAtLayerHeight + 248) >= 0 )
    {
      if ( *(_DWORD *)(v15 + 248) )
      {
        if ( (a7 & 2) != 0 )
        {
          v17 = -1072103423;
          v20 = 268672;
          goto LABEL_7;
        }
        v53 = CmpSnapshotTxOwnerArray(v15 + 248, a5 + 120, a5 + 128);
        v17 = v53;
        if ( v53 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v17 = -1073741267;
          v20 = 269056;
          goto LABEL_7;
        }
        CmpRecordParseFailure(a5, 268800, v53);
        v19 = 0;
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 264) )
          goto LABEL_138;
        if ( (a7 & 2) != 0 )
        {
          v17 = -1072103423;
          v20 = 269184;
          goto LABEL_7;
        }
        v54 = CmpSnapshotTxOwnerArray(v15 + 264, a5 + 120, a5 + 128);
        v17 = v54;
        if ( v54 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
          *(_DWORD *)(a5 + 100) |= 4u;
          v17 = -1073741267;
          v20 = 269568;
          goto LABEL_7;
        }
        CmpRecordParseFailure(a5, 269312, v54);
        v19 = 0;
      }
    }
    else
    {
      if ( (a7 & 2) != 0 )
      {
        v17 = -1072103423;
        v20 = 268160;
        goto LABEL_7;
      }
      v52 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
      v17 = v52;
      if ( v52 >= 0 )
      {
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 100) |= 4u;
        v17 = -1073741267;
        v20 = 268544;
        goto LABEL_7;
      }
      CmpRecordParseFailure(a5, 268288, v52);
      v19 = 0;
    }
LABEL_166:
    if ( v19 )
      CmUnlockHiveSecurity(v16);
    goto LABEL_168;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v99 = UnitOfWork;
  v110 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v17 = -1073741670;
    v20 = 265984;
    goto LABEL_7;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
  v47 = CmpTransEnlistUowInCmTrans(v99, a9);
  v17 = v47;
  if ( v47 < 0 )
  {
    CmpRecordParseFailure(a5, 266240, v47);
    v19 = 0;
    goto LABEL_166;
  }
  v48 = (_QWORD *)CmpAllocateUnitOfWork();
  P = v48;
  v111 = v48;
  if ( !v48 )
  {
    v17 = -1073741670;
    v20 = 266496;
    goto LABEL_7;
  }
  CmpTransEnlistUowInKcb(v48, v15);
  v49 = P;
  v50 = CmpTransEnlistUowInCmTrans(P, a9);
  v17 = v50;
  if ( v50 < 0 )
  {
    CmpRecordParseFailure(a5, 266752, v50);
    v19 = 0;
    goto LABEL_166;
  }
  if ( !(unsigned __int8)CmpLockIXLockIntent(KcbAtLayerHeight + 248, v99) )
  {
    v17 = -1072103423;
    v20 = 267008;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)CmpLockIXLockExclusive(v15 + 248, v49, 0LL) )
  {
    v17 = -1072103423;
    v20 = 267264;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)CmpLockIXLockExclusive(v15 + 264, v49, 1LL) )
  {
    v17 = -1072103423;
    v20 = 267520;
    goto LABEL_7;
  }
LABEL_138:
  LODWORD(Size) = (unsigned __int16)CmpNameSize(a4) + 76;
  v55 = HvAllocateCell(
          v16,
          Size,
          v118,
          (unsigned int)&BugCheckParameter4,
          (__int64)&BugCheckParameter3[1],
          (__int64)&v106);
  v17 = v55;
  if ( v55 < 0 )
  {
    CmpRecordParseFailure(a5, 269824, v55);
    v11 = *(_QWORD *)&BugCheckParameter3[1];
    v19 = 0;
    goto LABEL_166;
  }
  v56 = *(unsigned __int16 *)(a5 + 4);
  if ( (_WORD)v56 )
  {
    v57 = HvAllocateCell(v16, v56, v118, (unsigned int)BugCheckParameter3, (__int64)&v105, (__int64)&v98);
    v17 = v57;
    if ( v57 < 0 )
    {
      CmpRecordParseFailure(a5, 270080, v57);
      v11 = *(_QWORD *)&BugCheckParameter3[1];
      v19 = 0;
      goto LABEL_166;
    }
    memmove(v105, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v98);
    else
      HvpReleaseCellPaged(v16, &v98);
    v105 = 0LL;
  }
  v58 = *(_QWORD *)&BugCheckParameter3[1];
  memset(*(void **)&BugCheckParameter3[1], 0, (unsigned int)Size);
  v59 = 27500;
  if ( !BugCheckParameter4_4 )
    v59 = 27502;
  *(_WORD *)v58 = v59;
  *(_BYTE *)(v58 + 12) = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    *(_BYTE *)(v58 + 13) |= 3u;
  else
    *(_BYTE *)(v58 + 13) &= 0xFCu;
  *(_WORD *)(v58 + 2) = v94;
  v11 = *(_QWORD *)&BugCheckParameter3[1];
  *(_QWORD *)(*(_QWORD *)&BugCheckParameter3[1] + 4LL) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(KcbAtLayerHeight + 40);
  *(_QWORD *)(v11 + 28) = -1LL;
  v109 = (_DWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 40) = -1;
  v108 = v11 + 44;
  *(_DWORD *)(v11 + 44) = -1;
  *(_DWORD *)(v11 + 48) = BugCheckParameter3[0];
  *(_WORD *)(v11 + 74) = *(_WORD *)(a5 + 4);
  BugCheckParameter3[0] = -1;
  if ( (*v115 & 0x80u) != 0 )
    *(_DWORD *)(v11 + 52) ^= (*(_DWORD *)(v11 + 52) ^ (*v115 << 16)) & 0xF00000;
  v60 = CmpCopyName((void *)(v11 + 76));
  *(_WORD *)(v11 + 72) = v60;
  if ( v60 < *a4 )
    *(_WORD *)(v11 + 2) |= 0x20u;
  v61 = BugCheckParameter4_4;
  if ( BugCheckParameter4_4 )
  {
    *(_QWORD *)(v11 + 36) = *(_QWORD *)(a5 + 48);
    *(_DWORD *)(v11 + 28) = *(_DWORD *)(a5 + 40);
  }
  v92 = 1;
  if ( !v61 )
  {
    v62 = KeAbPreAcquire(v16 + 1784, 0LL);
    v63 = v62;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 1784), v62, v16 + 1784);
    if ( v63 )
      *(_BYTE *)(v63 + 18) = 1;
    v119 = 1;
    v11 = *(_QWORD *)&BugCheckParameter3[1];
    v64 = CmpGetSecurityDescriptorNodeEx(
            v16,
            BugCheckParameter4,
            *(__int64 *)&BugCheckParameter3[1],
            BugCheckParameter4 >> 31,
            NewDescriptor,
            0,
            (unsigned int *)v108);
    v17 = v64;
    if ( v64 < 0 )
    {
      CmpRecordParseFailure(a5, 270592, v64);
LABEL_165:
      v19 = v119;
      goto LABEL_166;
    }
    CmUnlockHiveSecurity(v16);
  }
  v69 = HvpMarkCellDirty(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
  v17 = v69;
  if ( v69 < 0 )
  {
    CmpRecordParseFailure(a5, 270848, v69);
    v65 = 0;
    goto LABEL_169;
  }
  v70 = a9;
  if ( !a9 )
  {
    v71 = CmpAddSubKeyEx(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
    v17 = v71;
    if ( v71 < 0 )
    {
      CmpRecordParseFailure(a5, 271104, v71);
      v65 = 0;
      goto LABEL_169;
    }
    v70 = 0LL;
  }
  v91 = 1;
  *(_DWORD *)(v15 + 40) = BugCheckParameter4;
  BugCheckParameter4 = -1;
  *(_QWORD *)(v15 + 240) = v70;
  if ( (v94 & 0x40) == 0 )
  {
    *(_DWORD *)(v15 + 96) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v15 + 100) = *v109;
  }
  ++*(_QWORD *)(v15 + 304);
  CmpRebuildKcbCacheFromNode(v15);
  if ( !BugCheckParameter4_4 )
    CmpAssignSecurityToKcb(v15, *(unsigned int *)v108, 0);
  if ( v70 )
  {
    v72 = P;
    *((_DWORD *)P + 17) = 0;
    v72[18] = v101;
    v73 = v99;
    *((_QWORD *)v72 + 10) = v99;
    v73[17] = 1;
    *((_QWORD *)v73 + 11) = v15;
    v74 = CmAddLogForAction(v72, 1LL);
    v17 = v74;
    if ( v74 < 0 )
    {
      CmpRecordParseFailure(a5, 271360, v74);
LABEL_168:
      v65 = v91;
      goto LABEL_169;
    }
    P = 0LL;
    v99 = 0LL;
  }
  v75 = *(_QWORD *)(KcbAtLayerHeight + 32);
  if ( (*(_BYTE *)(v75 + 140) & 1) != 0 )
    v76 = HvpGetCellFlat(v75, *(unsigned int *)(KcbAtLayerHeight + 40));
  else
    v76 = HvpGetCellPaged(v75);
  v77 = v76;
  v104 = v76;
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 32), v76, *(unsigned int *)(KcbAtLayerHeight + 40));
  *(_QWORD *)(v77 + 4) = MEMORY[0xFFFFF78000000014];
  v78 = *a4;
  if ( (unsigned __int16)*(_DWORD *)(v77 + 52) < (unsigned int)v78 )
    *(_WORD *)(v77 + 52) = v78;
  v79 = *(unsigned __int16 *)(a5 + 4);
  if ( *(_DWORD *)(v77 + 56) < v79 )
    *(_DWORD *)(v77 + 56) = v79;
  ++*(_QWORD *)(KcbAtLayerHeight + 304);
  *(_WORD *)(KcbAtLayerHeight + 176) = *(_WORD *)(v77 + 52);
  *(_QWORD *)(KcbAtLayerHeight + 168) = *(_QWORD *)(v77 + 4);
  LOBYTE(v78) = 1;
  CmpCleanUpSubKeyInfo(KcbAtLayerHeight, v78);
  if ( v90 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
    KeAbPostRelease(v16 + 72);
    v90 = 0;
  }
  CmpReportNotifyForKcbStack(a1, a9, 1LL, 0LL, SubjectContexta, GenericMappinga, *(_QWORD *)PoolType);
  v17 = 0;
  v65 = 0;
  v11 = *(_QWORD *)&BugCheckParameter3[1];
LABEL_169:
  if ( v65 )
  {
    BugCheckParameter4 = *(_DWORD *)(v15 + 40);
    *(_DWORD *)(v15 + 40) = -1;
    *(_DWORD *)(v15 + 96) = 0;
    *(_DWORD *)(v15 + 100) = -1;
    *(_WORD *)(v15 + 186) = 0;
    *(_DWORD *)(v15 + 112) = 0;
    *(_QWORD *)(v15 + 168) = 0LL;
    *(_QWORD *)(v15 + 176) = 0LL;
    *(_DWORD *)(v15 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v15 + 185) = 0;
    *(_QWORD *)(v15 + 240) = 0LL;
    *(_QWORD *)(v15 + 88) = 0LL;
  }
  v66 = P;
  if ( P )
  {
    CmpRundownUnitOfWork((ULONG_PTR)P);
    ExFreePoolWithTag(v66, 0x77554D43u);
  }
  v67 = v99;
  if ( v99 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v99);
    ExFreePoolWithTag(v67, 0x77554D43u);
  }
  v68 = NewDescriptor;
  if ( NewDescriptor && !v93 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v80 = *(_QWORD *)(a3 + 72);
      v81 = *(void **)(v80 + 48);
      if ( v81 )
        ExFreePoolWithTag(v81, 0);
      *(_QWORD *)(v80 + 48) = v68;
    }
  }
  if ( v104 )
  {
    v82 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v82 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v82, &v100);
    else
      HvpReleaseCellPaged(v82, &v100);
  }
  if ( v105 )
  {
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v98);
    else
      HvpReleaseCellPaged(v16, &v98);
  }
  if ( BugCheckParameter3[0] != -1 )
    HvFreeCell(v16, BugCheckParameter3[0]);
  if ( v11 )
  {
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v106);
    else
      HvpReleaseCellPaged(v16, &v106);
  }
  if ( BugCheckParameter4 != -1 )
  {
    if ( v92 )
      CmpFreeKeyByCell(v16, BugCheckParameter4);
    else
      HvFreeCell(v16, BugCheckParameter4);
  }
  if ( v90 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
    KeAbPostRelease(v16 + 72);
  }
  return (unsigned int)v17;
}
