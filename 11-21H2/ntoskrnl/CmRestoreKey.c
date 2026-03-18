/*
 * XREFs of CmRestoreKey @ 0x14090C34C
 * Callers:
 *     NtRestoreKey @ 0x14090F750 (NtRestoreKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     HvLockHiveFlusherShared @ 0x14067C50C (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x14067C528 (HvUnlockHiveFlusherShared.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpInvalidateSubtree @ 0x14069E21C (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14069E26C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpReportNotify @ 0x14069EF78 (CmpReportNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14069F770 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14069FC64 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1406A0010 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406A0070 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpCleanUpSubKeyInfo @ 0x14071B5A0 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x14071B640 (CmpAssignSecurityToKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     HvMarkCellDirty @ 0x14087D6D0 (HvMarkCellDirty.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpTraceHiveRestoreStart @ 0x140910DB8 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x140910ECC (CmpTraceHiveRestoreStop.c)
 *     CmpCheckKeyAccess @ 0x140918174 (CmpCheckKeyAccess.c)
 *     CmpRetryBackOff @ 0x14091BC2C (CmpRetryBackOff.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14091CDE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x14091EE14 (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x1409222C0 (CmpDeleteTree.c)
 *     CmpIsShutdownRundownActive @ 0x140AB4248 (CmpIsShutdownRundownActive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // r15
  char v7; // si
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rdi
  int v10; // ebx
  int HiveVolatile; // eax
  unsigned int v12; // ebx
  char v13; // r15
  __int64 CellFlat; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ebx
  size_t v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // si
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // r12d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r15d
  __int64 CellPaged; // rax
  unsigned int v45; // r12d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rdx
  unsigned int v49; // r13d
  __int64 v50; // rax
  bool v51; // zf
  unsigned int v52; // esi
  _WORD *v53; // rax
  unsigned int *v54; // r15
  __int64 v55; // rax
  ULONG_PTR v56; // rdx
  __int64 v57; // rax
  _WORD *v58; // rsi
  unsigned int v59; // edx
  __int64 v60; // rax
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned int v65; // eax
  ULONG_PTR v66; // rcx
  ULONG_PTR v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rsi
  int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // esi
  ULONG_PTR v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  ULONG_PTR v79; // [rsp+28h] [rbp-D8h]
  char v80; // [rsp+61h] [rbp-9Fh]
  unsigned int BugCheckParameter4; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  __int64 v84; // [rsp+78h] [rbp-88h] BYREF
  __int64 v85; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v86; // [rsp+88h] [rbp-78h]
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v89; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-50h]
  __int64 v92; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v94; // [rsp+C8h] [rbp-38h] BYREF
  int v95; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-20h] BYREF
  _WORD *v97; // [rsp+E8h] [rbp-18h]
  __int128 v98; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v99; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR v100[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v101[432]; // [rsp+130h] [rbp+30h] BYREF

  v93 = 0xFFFFFFFFLL;
  v97 = 0LL;
  v91 = 0LL;
  v96 = 0LL;
  v88 = 0xFFFFFFFFLL;
  v84 = 0LL;
  v83 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v85 = 0xFFFFFFFFLL;
  BugCheckParameter3 = 0LL;
  v87 = 0xFFFFFFFFLL;
  memset(v100, 0, sizeof(v100));
  v99 = 0LL;
  memset(v101, 0, sizeof(v101));
  v95 = 0;
  v98 = 0LL;
  v94 = 0LL;
  CmpInitializeDelayDerefContext(&v98);
  LODWORD(v92) = -1;
  v7 = 0;
  BugCheckParameter4 = -1;
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v9 + 160) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_74;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 || a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_74;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    v10 = HiveVolatile;
    goto LABEL_74;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  *((_QWORD *)&v99 + 1) = &v99;
  v100[0] = a2;
  *(_QWORD *)&v99 = &v99;
  memset(&v100[1], 0, 24);
  v10 = CmpCreateHive(&BugCheckParameter3, 2u, 0x8000, 0, 0LL, v100, 0LL, 17367041, 0LL, 0LL, 0LL, (__int64)v101);
  if ( v10 < 0 )
    goto LABEL_74;
  CmpLockRegistryFreezeAware(0);
  v7 = 1;
  CmpLockKcbShared(v8);
  v12 = *(_DWORD *)(v8 + 40);
  v13 = 1;
  BugCheckParameter4_4 = v12;
  if ( *(_WORD *)(v8 + 66) )
  {
    CmpLogUnsupportedOperation(17LL);
    v10 = -1073741822;
    goto LABEL_72;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v8 + 65) == 1 || v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v9 + 2944) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_72;
  }
  HvLockHiveFlusherShared(v9);
  v80 = 1;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v9, v12, &v83);
  else
    CellFlat = HvpGetCellPaged(v9, v12, (unsigned int *)&v83);
  v84 = CellFlat;
  if ( !CellFlat )
  {
    v10 = -1073741670;
    goto LABEL_70;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(CellFlat + 16);
  v16 = *(_QWORD *)(BugCheckParameter3 + 64);
  v86 = v15;
  v89 = v12 >> 31;
  v10 = CmpCopyKeyPartial(
          BugCheckParameter3,
          *(unsigned int *)(v16 + 36),
          v9,
          v15,
          6,
          v79,
          v12 >> 31,
          &BugCheckParameter4);
  if ( v10 < 0 )
    goto LABEL_70;
  v17 = v84;
  v10 = HvReallocateCell(
          v9,
          BugCheckParameter4,
          (unsigned int)*(unsigned __int16 *)(v84 + 72) + 76,
          1,
          (int *)&v92,
          &v96,
          (__int64)&v88);
  v91 = v96;
  if ( v10 < 0 )
    goto LABEL_67;
  v18 = v92;
  v19 = *(unsigned __int16 *)(v17 + 72);
  BugCheckParameter4 = v92;
  memmove((void *)(v96 + 76), (const void *)(v17 + 76), v19);
  v20 = v91;
  *(_WORD *)(v91 + 72) = *(_WORD *)(v17 + 72);
  if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
    *(_WORD *)(v20 + 2) |= 0x20u;
  else
    *(_WORD *)(v20 + 2) &= ~0x20u;
  v10 = CmpCopySyncTree(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v9, v18, 2, 0);
  if ( v10 < 0 )
  {
LABEL_67:
    v38 = BugCheckParameter4;
    v13 = v80;
    if ( (unsigned __int8)CmpDeleteTree(v9, BugCheckParameter4) )
      CmpFreeKeyByCell(v9, v38, 0);
    if ( !v80 )
    {
LABEL_71:
      if ( !v13 )
      {
LABEL_73:
        v6 = v84;
        goto LABEL_74;
      }
LABEL_72:
      CmpUnlockKcb(v8);
      goto LABEL_73;
    }
LABEL_70:
    HvUnlockHiveFlusherShared(v9);
    goto LABEL_71;
  }
  HvUnlockHiveFlusherShared(v9);
  v80 = 0;
  CmpUnlockKcb(v8);
  CmpUnlockRegistry(v22, v21, v23, v24);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, &v83);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&v83);
  v84 = 0LL;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, &v88);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&v88);
  v91 = 0LL;
  CmpLockRegistryFreezeAware(1);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
  {
LABEL_65:
    v10 = -1073741431;
LABEL_66:
    v7 = 1;
    goto LABEL_67;
  }
  v25 = v86;
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      goto LABEL_179;
    if ( BugCheckParameter4_4 != *(_DWORD *)(v8 + 40) )
    {
      v10 = -1073741444;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v8 + 8) & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(v9 + 2944) == 1 )
      goto LABEL_65;
    if ( v25 != -1 )
    {
      v10 = CmpCheckKeyAccess(v9, 1);
      if ( v10 < 0 )
        goto LABEL_66;
    }
    v10 = CmpCheckKeyAccess(v9, 1);
    if ( v10 < 0 )
      goto LABEL_66;
    LOBYTE(v26) = 1;
    v10 = CmpTryAcquireKcbIXLocks(v8, v26, v27, (__int64)&v94);
    if ( v10 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v8, 7u);
      CmpUnlockRegistry(v29, v28, v30, v31);
      v10 = CmpAbortRollbackPacket((__int64)&v94, 0LL);
      if ( v10 < 0 )
      {
        CmpLockRegistryFreezeAware(1);
        goto LABEL_66;
      }
      goto LABEL_64;
    }
    if ( v10 < 0 )
      goto LABEL_66;
    v32 = 0;
    v10 = CmpDoAccessCheckOnSubtree(v9, 2);
    if ( v10 < 0 )
      goto LABEL_66;
    if ( (a3 & 8) == 0 )
      break;
    v10 = CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 0LL, &v94);
    if ( v10 == -1073741267 )
    {
      v32 = 1;
    }
    else if ( v10 < 0 )
    {
      goto LABEL_66;
    }
    v33 = CmpPrepareForSubtreeInvalidation(v8, 0, (__int64)&v94);
    v10 = v33;
    if ( v33 != -1073741267 )
    {
      if ( v33 < 0 )
        goto LABEL_66;
      if ( !v32 )
      {
        CmpInvalidateAllHigherLayerKcbs(v8, 1LL, 0LL, &v98);
        CmpInvalidateSubtree(v8, 1LL, 0, (__int64)&v98, 0LL);
        CmpDrainDelayDerefContext((_QWORD **)&v98);
        goto LABEL_85;
      }
    }
    CmpLogTransactionAbortedForRollbackPacket(v8, 7u);
    CmpUnlockRegistry(v35, v34, v36, v37);
    v7 = 0;
    v10 = CmpAbortRollbackPacket((__int64)&v94, 0LL);
    if ( v10 < 0 )
    {
      CmpLockRegistryFreezeAware(1);
      goto LABEL_67;
    }
LABEL_64:
    CmpCleanupRollbackPacket((__int64)&v94);
    v94 = 0LL;
    CmpRetryBackOff(&v95);
    CmpLockRegistryFreezeAware(1);
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
      goto LABEL_65;
  }
  CmpEnumerateAllHigherLayerKcbs(
    v8,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpCleanUpHigherLayerKcbCachesPostCallback,
    0LL,
    0LL,
    1,
    1);
  if ( CmpDoesKeyHaveOpenSubkeys(v8) || *(_QWORD *)v8 != 1LL )
  {
LABEL_179:
    v10 = -1073741535;
    goto LABEL_66;
  }
LABEL_85:
  v43 = BugCheckParameter4;
  v10 = HvMarkCellDirty(v9, BugCheckParameter4, 0);
  v7 = 1;
  if ( v10 < 0 )
    goto LABEL_67;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v9, BugCheckParameter4_4, &v88);
  else
    CellPaged = HvpGetCellPaged(v9, BugCheckParameter4_4, (unsigned int *)&v88);
  v91 = CellPaged;
  if ( !CellPaged )
    goto LABEL_90;
  v45 = *(_DWORD *)(CellPaged + 16);
  if ( (*(_BYTE *)(CellPaged + 2) & 4) != 0 )
  {
    if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
      v46 = HvpGetCellFlat(CmpMasterHive, v45, &v85);
    else
      v46 = HvpGetCellPaged(CmpMasterHive, v45, (unsigned int *)&v85);
    if ( v46 )
    {
      *(_DWORD *)(v46 + 28) = v43;
      if ( (*(_BYTE *)(CmpMasterHive + 140) & 1) != 0 )
        HvpReleaseCellFlat(CmpMasterHive, &v85);
      else
        HvpReleaseCellPaged(CmpMasterHive, (unsigned int *)&v85);
      v47 = (*(_BYTE *)(v9 + 140) & 1) != 0
          ? HvpGetCellFlat(v9, v43, &v83)
          : HvpGetCellPaged(v9, v43, (unsigned int *)&v83);
      v84 = v47;
      if ( v47 )
      {
        *(_DWORD *)(v47 + 16) = v45;
        v48 = &v83;
        *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v43;
        goto LABEL_158;
      }
    }
LABEL_90:
    v10 = -1073741670;
    goto LABEL_66;
  }
  v49 = 0;
  v10 = HvMarkCellDirty(v9, v45, 0);
  v7 = 1;
  if ( v10 < 0 )
    goto LABEL_67;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v50 = HvpGetCellFlat(v9, v45, &v85);
  else
    v50 = HvpGetCellPaged(v9, v45, (unsigned int *)&v85);
  if ( !v50 )
  {
    v10 = -1073741670;
    goto LABEL_67;
  }
  v51 = (*(_BYTE *)(v9 + 140) & 1) == 0;
  v52 = *(_DWORD *)(v50 + 4LL * v89 + 28);
  v89 = v52;
  if ( v51 )
    HvpReleaseCellPaged(v9, (unsigned int *)&v85);
  else
    HvpReleaseCellFlat(v9, &v85);
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v53 = (_WORD *)HvpGetCellFlat(v9, v52, &v93);
  else
    v53 = (_WORD *)HvpGetCellPaged(v9, v52, (unsigned int *)&v93);
  v97 = v53;
  if ( !v53 )
    goto LABEL_90;
  if ( *v53 != 26994 )
  {
    v86 = 1;
    v54 = &v89;
    while ( 1 )
    {
LABEL_123:
      v56 = *v54;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v57 = HvpGetCellFlat(v9, v56, &v87);
      else
        v57 = HvpGetCellPaged(v9, v56, (unsigned int *)&v87);
      v58 = (_WORD *)v57;
      if ( !v57 )
        goto LABEL_90;
      v10 = HvMarkCellDirty(v9, *v54, 0);
      if ( v10 < 0 )
        break;
      v59 = (unsigned __int16)v58[1];
      v60 = 0LL;
      if ( ((*v58 - 26220) & 0xFDFF) != 0 )
      {
        if ( v58[1] )
        {
          v61 = v58 + 2;
          while ( *v61 != BugCheckParameter4_4 )
          {
            v60 = (unsigned int)(v60 + 1);
            ++v61;
            if ( (unsigned int)v60 >= v59 )
              goto LABEL_138;
          }
          v43 = BugCheckParameter4;
          *(_DWORD *)&v58[2 * v60 + 2] = BugCheckParameter4;
LABEL_146:
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, &v87);
          else
            HvpReleaseCellPaged(v9, (unsigned int *)&v87);
          goto LABEL_120;
        }
      }
      else if ( v58[1] )
      {
        v62 = v58 + 2;
        while ( *v62 != BugCheckParameter4_4 )
        {
          v60 = (unsigned int)(v60 + 1);
          v62 += 2;
          if ( (unsigned int)v60 >= v59 )
            goto LABEL_138;
        }
        v43 = BugCheckParameter4;
        *(_DWORD *)&v58[4 * v60 + 2] = BugCheckParameter4;
        goto LABEL_146;
      }
LABEL_138:
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v9, &v87);
      else
        HvpReleaseCellPaged(v9, (unsigned int *)&v87);
      ++v49;
      ++v54;
      if ( v49 >= v86 )
        goto LABEL_119;
    }
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v87);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v87);
    goto LABEL_66;
  }
  v54 = (unsigned int *)(v53 + 2);
  v86 = (unsigned __int16)v53[1];
  if ( v86 )
    goto LABEL_123;
LABEL_119:
  v43 = BugCheckParameter4;
LABEL_120:
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v55 = HvpGetCellFlat(v9, v45, &v85);
  else
    v55 = HvpGetCellPaged(v9, v45, (unsigned int *)&v85);
  v63 = v55;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    v64 = HvpGetCellFlat(v9, v43, &v83);
  else
    v64 = HvpGetCellPaged(v9, v43, (unsigned int *)&v83);
  v65 = *(unsigned __int16 *)(v64 + 74);
  if ( *(_DWORD *)(v63 + 56) < v65 )
    *(_DWORD *)(v63 + 56) = v65;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, &v83);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)&v83);
  v48 = &v85;
LABEL_158:
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, v48);
  else
    HvpReleaseCellPaged(v9, (unsigned int *)v48);
  *(_DWORD *)(v8 + 40) = v43;
  CmpCleanUpKcbCachedSymlink(v8);
  v66 = *(_QWORD *)(v8 + 32);
  v84 = 0xFFFFFFFFLL;
  v67 = *(unsigned int *)(v8 + 40);
  if ( (*(_BYTE *)(v66 + 140) & 1) != 0 )
    v68 = HvpGetCellFlat(v66, v67, &v84);
  else
    v68 = HvpGetCellPaged(v66, v67, (unsigned int *)&v84);
  v6 = 0LL;
  v69 = v68;
  if ( !v68 )
  {
    v10 = -1073741670;
    v84 = 0LL;
    goto LABEL_66;
  }
  v70 = *(_DWORD *)(v68 + 36);
  *(_DWORD *)(v8 + 100) = *(_DWORD *)(v69 + 40);
  *(_DWORD *)(v8 + 96) = v70;
  *(_WORD *)(v8 + 186) = *(_WORD *)(v69 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v69 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8, 1);
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = *(_QWORD *)(v69 + 4);
  *(_WORD *)(v8 + 176) = *(_WORD *)(v69 + 52);
  *(_WORD *)(v8 + 178) = *(_WORD *)(v69 + 60);
  *(_DWORD *)(v8 + 180) = *(_DWORD *)(v69 + 64);
  *(_DWORD *)(v8 + 184) ^= (*(_DWORD *)(v8 + 184) ^ *(unsigned __int16 *)(v69 + 54)) & 0xF;
  *(_DWORD *)(v8 + 184) ^= ((unsigned __int8)*(_DWORD *)(v8 + 184) ^ (unsigned __int8)*(_WORD *)(v69 + 54)) & 0xF0;
  v71 = *(_QWORD *)(v8 + 32);
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(v69 + 55);
  if ( (*(_BYTE *)(v71 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v71, &v84);
  else
    HvpReleaseCellPaged(v71, (unsigned int *)&v84);
  v72 = BugCheckParameter4_4;
  v73 = BugCheckParameter4_4;
  *(_WORD *)(v8 + 8) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9, v73) )
    CmpFreeKeyByCell(v9, v72, 0);
  CmpReportNotify(v8, 0LL, 1u, (__int64)&v99);
  if ( !CmpProfileLoaded )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    CmpProfileLoaded = 1;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v98);
  CmpUnlockRegistry(v75, v74, v76, v77);
  v7 = 0;
  CmpDestroyHive(BugCheckParameter3);
  BugCheckParameter3 = 0LL;
  CmpSignalDeferredPosts((_QWORD **)&v99);
LABEL_74:
  CmpDrainDelayDerefContext((_QWORD **)&v98);
  if ( v7 )
    CmpUnlockRegistry(v40, v39, v41, v42);
  if ( BugCheckParameter3 )
  {
    CmpDestroyHive(BugCheckParameter3);
    BugCheckParameter3 = 0LL;
  }
  if ( v97 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v93);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v93);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v83);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v83);
  }
  if ( v91 )
  {
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, &v88);
    else
      HvpReleaseCellPaged(v9, (unsigned int *)&v88);
  }
  CmpCleanupRollbackPacket((__int64)&v94);
  CmpTraceHiveRestoreStop((unsigned int)v10);
  return (unsigned int)v10;
}
