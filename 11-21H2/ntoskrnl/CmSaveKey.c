/*
 * XREFs of CmSaveKey @ 0x14065A44C
 * Callers:
 *     NtSaveKeyEx @ 0x14065A1F0 (NtSaveKeyEx.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 * Callees:
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140200008 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpTraceHiveSaveStop @ 0x14065A784 (CmpTraceHiveSaveStop.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x14065AA54 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpTraceHiveSaveStart @ 0x14065C91C (CmpTraceHiveSaveStart.c)
 *     CmpCreateTemporaryHive @ 0x14065C990 (CmpCreateTemporaryHive.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14069EEC0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14069F150 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpInitializeKeyNodeStack @ 0x14069F2B4 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x14069F324 (CmpStartKeyNodeStack.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpUuidCreate @ 0x1407435A8 (CmpUuidCreate.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpSaveKeyByFileCopy @ 0x14090DF50 (CmpSaveKeyByFileCopy.c)
 *     CmpTraceHiveSaveFileCopied @ 0x140910F5C (CmpTraceHiveSaveFileCopied.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // si
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // r15
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 v11; // r14
  int v12; // r9d
  int v13; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+20h] [rbp-A9h]
  int *v31; // [rsp+28h] [rbp-A1h]
  char v32; // [rsp+30h] [rbp-99h]
  int v34; // [rsp+34h] [rbp-95h] BYREF
  int v35; // [rsp+38h] [rbp-91h]
  __int128 v36; // [rsp+40h] [rbp-89h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-79h]
  __int64 v38; // [rsp+60h] [rbp-69h]
  __int64 v39; // [rsp+68h] [rbp-61h]
  _WORD v40[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v41; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v38 = a2;
  v35 = a3;
  v39 = a1;
  Uuid = 0LL;
  v41 = 0LL;
  memset(v40, 0, 0x4AuLL);
  v36 = 0LL;
  WORD1(v36) = -1;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeKeyNodeStack(v40);
  v34 = -1;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v41);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v41);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_17;
      }
      CmpLockRegistry();
      v11 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb(&v36, v11);
      if ( started < 0 )
        goto LABEL_17;
      CmpLockKcbStackShared(&v36);
      v6 = 1;
      if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
      {
        started = -1073741790;
        goto LABEL_17;
      }
      CmpTraceHiveSaveStart(v11);
      v32 = 1;
      started = CmpPerformKeyBodyDeletionCheck(v39, 0LL);
      if ( started >= 0 )
      {
        started = CmpStartKeyNodeStack(v40, (unsigned __int16)(*(_WORD *)(v11 + 66) + 1));
        if ( started >= 0 )
        {
          CmpLockKcbStackFlusherLocksExclusive((__int64)&v36);
          CmpPopulateKeyNodeStackFromKcbStack(v40, &v36, 0LL);
          LOBYTE(v12) = a4;
          started = CmpDoAccessCheckOnLayeredSubtree(0, 0, (unsigned int)v40, v12, 131097, 3);
          if ( started < 0 )
          {
LABEL_36:
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v36);
            goto LABEL_17;
          }
          v8 = *(_QWORD *)(v11 + 32);
          if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1544) )
          {
            if ( *(_WORD *)(v11 + 66) )
            {
              CmpLogUnsupportedOperation(25LL);
              started = -1073741822;
              goto LABEL_36;
            }
            v7 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 1640));
            if ( !v7 )
            {
              started = -1073741444;
              goto LABEL_36;
            }
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v36);
            CmpUnlockKcbStack(&v36);
            v6 = 0;
            CmpUnlockRegistry(v27, v26, v28, v29, v30, v31);
            v5 = 0;
            started = CmpSaveKeyByFileCopy(v8);
            if ( started >= 0 )
              CmpTraceHiveSaveFileCopied();
          }
          else
          {
            v13 = v35;
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v35;
            *(_DWORD *)(v9 + 220) = v13;
            v31 = &v34;
            LODWORD(v30) = 0;
            started = CmpCopyMergeOfLayeredKeyNode(v40, v9, 0xFFFFFFFFLL, 1LL);
            if ( started < 0 )
              goto LABEL_36;
            CmpTraceHiveSaveTreeCopied();
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v34;
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v40);
            *(_QWORD *)EntryAtLayerHeight = v9;
            *(_DWORD *)(EntryAtLayerHeight + 8) = v15;
            v16 = (*(_BYTE *)(v9 + 140) & 1) != 0 ? HvpGetCellFlat(v9, v15) : HvpGetCellPaged(v9);
            *(_QWORD *)(EntryAtLayerHeight + 16) = v16;
            started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v40);
            if ( started < 0 )
              goto LABEL_36;
            started = CmpPromoteSubtree(0LL, v40);
            if ( started < 0 )
              goto LABEL_36;
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)&v36);
            CmpCleanupKeyNodeStack(v40);
            CmpInitializeKeyNodeStack(v40);
            CmpUnlockKcbStack(&v36);
            v6 = 0;
            CmpUnlockRegistry(v18, v17, v19, v20, v30, &v34);
            *(_QWORD *)(v9 + 1560) = v38;
            v5 = 0;
            started = HvWriteExternal(v9);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_17:
  CmpCleanupKeyNodeStack(v40);
  if ( v6 )
    CmpUnlockKcbStack(&v36);
  if ( v5 )
    CmpUnlockRegistry(v22, v21, v23, v24, v30, v31);
  if ( v7 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v8 + 1640));
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1560) = 0LL;
    CmpDestroyHive((PVOID)v9);
  }
  if ( v32 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
