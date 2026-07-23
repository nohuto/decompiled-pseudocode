/*
 * XREFs of CmpLoadKeyCommon @ 0x1402F682C
 * Callers:
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x14036E3BC (CmpJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     TmEnableCallbacks @ 0x1403D8690 (TmEnableCallbacks.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpTrimHive @ 0x14074EA74 (CmpTrimHive.c)
 *     CmpLockHiveListExclusive @ 0x14074EBA4 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x140750B28 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpVEAddHiveToSIDMappingTable @ 0x1407E4120 (CmpVEAddHiveToSIDMappingTable.c)
 *     CmpAddToHiveFileList @ 0x1407E5134 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1407E89F8 (CmRmFinalizeRecovery.c)
 *     CmpSetGlobalQuotaAllowed @ 0x1407EB2A0 (CmpSetGlobalQuotaAllowed.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLoadKeyCommon(
        char *P,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        char a7,
        ULONG_PTR *a8,
        char a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r13
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  ULONG_PTR v22; // rdi
  ULONG_PTR *v23; // r12
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  unsigned int v31; // r9d
  __int64 v32; // rcx
  int v33; // [rsp+20h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  PRKEVENT Event; // [rsp+78h] [rbp-41h]
  _OWORD v38[3]; // [rsp+80h] [rbp-39h] BYREF

  *((_DWORD *)P + 40) |= 0x20u;
  v11 = 0LL;
  BugCheckParameter2 = 0LL;
  Event = a6;
  v36 = a8;
  memset(v38, 0, sizeof(v38));
  *((_QWORD *)P + 521) = KeGetCurrentThread();
  v15 = a3 & 0x10;
  if ( (a3 & 0x10) != 0 )
  {
    v16 = *((_DWORD *)P + 1028) | 0x20;
    *((_DWORD *)P + 1028) = v16;
    if ( (a3 & 0x20) != 0 )
      *((_DWORD *)P + 1028) = v16 | 0x40;
  }
  *((_DWORD *)P + 1028) |= 1u;
  LOCK_HIVE_LOAD();
  LOBYTE(v17) = 1;
  CmpLockRegistryFreezeAware(v17);
  if ( a4 && !v15 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
    {
      v21 = -1073741444;
      v33 = 16;
      goto LABEL_37;
    }
    LOBYTE(v29) = a7;
    v28 = CmpJoinClassOfTrust(P, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL), v29);
    v21 = v28;
    if ( v28 < 0 )
    {
      v33 = 32;
      goto LABEL_39;
    }
    v28 = CmpVEAddHiveToSIDMappingTable(P, a2);
    v21 = v28;
    if ( v28 < 0 )
    {
      v33 = 48;
LABEL_39:
      v31 = v28;
      goto LABEL_40;
    }
  }
  if ( a5 )
  {
    v28 = CmpPerformKeyBodyDeletionCheck(a5, 0LL);
    v21 = v28;
    if ( v28 < 0 )
    {
      v33 = 64;
      goto LABEL_39;
    }
    v11 = *(_QWORD *)(a5 + 8);
    if ( (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
    {
      v21 = -1073741811;
      v33 = 80;
LABEL_37:
      v31 = v21;
LABEL_40:
      SetFailureLocation(a11, 0, 29, v31, v33);
      goto LABEL_30;
    }
  }
  CmpUnlockRegistry();
  LOBYTE(v18) = a9;
  v19 = CmpLinkHiveToMaster(
          a2[2],
          a2[1],
          (int)P,
          v18,
          512,
          v15 != 0,
          Event,
          a2[4],
          v11,
          (__int64)&BugCheckParameter2,
          0,
          a11);
  v21 = v19;
  if ( v19 < 0 )
  {
    SetFailureLocation(a11, 0, 29, v19, 96);
    LOBYTE(v32) = 1;
    CmpLockRegistryFreezeAware(v32);
LABEL_30:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( P )
    {
      CmpAttachToRegistryProcess(v38);
      CmpDestroyHive(P);
      CmpDetachFromRegistryProcess(v38);
    }
    goto LABEL_32;
  }
  v22 = BugCheckParameter2;
  if ( (a3 & 0x800) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2);
    v23 = v36;
    *v36 = v22;
  }
  else
  {
    v23 = v36;
  }
  LOBYTE(v20) = 1;
  CmpLockRegistryFreezeAware(v20);
  if ( v15 )
  {
    CmpReferenceKeyControlBlockUnsafe(*((_QWORD *)P + 367));
    *v23 = *((_QWORD *)P + 367);
  }
  CmpLockHiveListExclusive();
  v24 = (_QWORD *)qword_140D54C70;
  v25 = P + 1608;
  if ( *(__int64 **)qword_140D54C70 != &CmpHiveListHead )
    __fastfail(3u);
  *v25 = &CmpHiveListHead;
  *((_QWORD *)P + 202) = v24;
  *v24 = v25;
  qword_140D54C70 = (__int64)(P + 1608);
  CmpUnlockHiveList();
  CmpUnlockRegistry();
  CmpAttachToRegistryProcess(v38);
  CmpRecheckHiveVolumePolicy((__int64)P);
  CmpDetachFromRegistryProcess(v38);
  CmpDereferenceKeyControlBlockUnsafe(v22);
  UNLOCK_HIVE_LOAD();
  if ( (a3 & 0x110) == 0 )
  {
    LOBYTE(v26) = a10;
    CmpInitCmRM(P, v26);
    *((_DWORD *)P + 1028) |= 8u;
  }
  if ( a9 )
  {
    CmpAttachToRegistryProcess(v38);
    CmpFlushHive((ULONG_PTR)P);
    CmpDetachFromRegistryProcess(v38);
  }
  if ( !v15 )
    CmpAddToHiveFileList(P);
  v27 = *((_QWORD *)P + 519);
  if ( v27 )
  {
    TmEnableCallbacks(*(PKRESOURCEMANAGER *)(v27 + 56), CmKtmNotification, *((PVOID *)P + 519));
    CmRmFinalizeRecovery(*((_QWORD *)P + 519));
  }
  CmpTrimHive(P);
  LOCK_HIVE_LOAD();
  *((_DWORD *)P + 40) &= ~0x20u;
  *((_QWORD *)P + 521) = 0LL;
  UNLOCK_HIVE_LOAD();
  v21 = 0;
LABEL_32:
  if ( !CmpProfileLoaded && !CmpWasSetupBoot )
  {
    CmpProfileLoaded = 1;
    CmpSetGlobalQuotaAllowed();
  }
  return v21;
}
