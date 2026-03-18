/*
 * XREFs of CmpCreateHiveRootCell @ 0x1406C9FA0
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpRecordParseFailure @ 0x14068038C (CmpRecordParseFailure.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpNameSize @ 0x1406AD650 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     CmpCopyName @ 0x14079B8C0 (CmpCopyName.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v9; // r14d
  int Cell; // eax
  int SecurityDescriptorNode; // ebx
  int v12; // r8d
  int v13; // edx
  _WORD *v14; // rbx
  _DWORD *v15; // r14
  unsigned __int16 v16; // ax
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // ecx
  PVOID v24; // r15
  __int64 v25; // rsi
  void *v26; // rcx
  void *v28; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+A0h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter3a) = -1;
  v30[0] = 0LL;
  v28 = 0LL;
  HvpGetCellContextReinitialize(v30);
  P = 0LL;
  ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  Cell = HvAllocateCell(BugCheckParameter3, v9, 0, (unsigned int)&BugCheckParameter3a, (__int64)&v28, (__int64)v30);
  SecurityDescriptorNode = Cell;
  if ( Cell < 0 )
  {
    v12 = Cell;
    v13 = 196864;
    goto LABEL_3;
  }
  v14 = v28;
  memset(v28, 0, v9);
  *(_DWORD *)v14 = 813934;
  v15 = v28;
  *(_QWORD *)((char *)v28 + 4) = MEMORY[0xFFFFF78000000014];
  v15[4] = -1;
  v15[7] = -1;
  v15[8] = -1;
  v15[10] = -1;
  v15[11] = -1;
  v15[12] = -1;
  v16 = CmpCopyName(v15 + 19);
  *((_WORD *)v15 + 36) = v16;
  if ( v16 < *a3 )
    v14[1] |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
  {
    P = (PVOID)CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    if ( !P )
    {
      SecurityDescriptorNode = -1073741670;
      v17 = 197120;
LABEL_9:
      v18 = SecurityDescriptorNode;
LABEL_10:
      CmpRecordParseFailure(a4, v17, v18);
      goto LABEL_21;
    }
  }
  else
  {
    v19 = RtlpNewSecurityObject(
            0,
            *(_QWORD *)(a2 + 64),
            (unsigned int)&P,
            0,
            0,
            1,
            0,
            a2 + 32,
            (__int64)CmKeyObjectType + 76,
            0LL);
    SecurityDescriptorNode = v19;
    if ( v19 < 0 )
    {
      v18 = v19;
      v17 = 197376;
      goto LABEL_10;
    }
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 1784, 0LL);
  SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                             BugCheckParameter3,
                             BugCheckParameter3a,
                             (__int64)v15,
                             (unsigned int)BugCheckParameter3a >> 31,
                             P,
                             0,
                             v15 + 11);
  CmUnlockHiveSecurity(BugCheckParameter3);
  if ( SecurityDescriptorNode < 0 )
  {
    v17 = 197632;
    goto LABEL_9;
  }
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a4 + 48) + 80LL, 0LL);
  HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
  v20 = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
  v21 = *(_QWORD *)(a4 + 48);
  SecurityDescriptorNode = v20;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21 + 80);
  KeAbPostRelease(v21 + 80);
  if ( SecurityDescriptorNode >= 0 )
  {
    v22 = *(_QWORD *)(BugCheckParameter3 + 64);
    SecurityDescriptorNode = 0;
    v23 = BugCheckParameter3a;
    LODWORD(BugCheckParameter3a) = -1;
    *(_DWORD *)(v22 + 36) = v23;
    *a5 = v23;
    goto LABEL_20;
  }
  v12 = SecurityDescriptorNode;
  v13 = 197888;
LABEL_3:
  CmpRecordParseFailure(a4, v13, v12);
LABEL_20:
  v15 = v28;
LABEL_21:
  v24 = P;
  if ( P )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&P);
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 72);
      v26 = *(void **)(v25 + 48);
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v25 + 48) = v24;
    }
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
  }
  if ( (_DWORD)BugCheckParameter3a != -1 )
    HvFreeCell(BugCheckParameter3, (unsigned int)BugCheckParameter3a);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  KeAbPostRelease(BugCheckParameter3 + 72);
  return (unsigned int)SecurityDescriptorNode;
}
