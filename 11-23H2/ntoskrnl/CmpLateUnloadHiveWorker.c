/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140693350
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140207A0C (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  char v2; // bl
  __int64 v3; // rdx
  char UnloadRundown; // si
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  __int128 v25; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v26[3]; // [rsp+38h] [rbp-38h] BYREF

  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  CmpInitializeThreadInfo((__int64)&v25);
  v2 = 0;
  LODWORD(v24) = 0;
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD();
    LOBYTE(v7) = 1;
    CmpLockRegistryFreezeAware(v7);
    v9 = *((_DWORD *)P + 40);
    LODWORD(v24) = 6;
    if ( (v9 & 0x40) != 0 )
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 23;
    }
    else if ( *((_BYTE *)P + 2944) )
    {
      v10 = *((_QWORD *)P + 367);
      if ( (*((_DWORD *)P + 1028) & 0x20) != 0 )
      {
        v2 = 1;
        ++CmpActiveAppHiveUnloadCount;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v10) )
      {
        v11 = *((_QWORD *)P + 367);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 30;
        CmpAttachToRegistryProcess(v26);
        CmpCompleteUnloadKey(v11, v12, &v24);
        CmpDetachFromRegistryProcess(v26);
        CmpLockRegistry(v14, v13, v15, v16);
        CmpDereferenceKeyControlBlock(v11);
        CmpUnlockRegistry(v18, v17, v19, v20, v24, v25);
      }
      else if ( v2 )
      {
        CmpDecrementAppHiveUnloadCount();
      }
    }
    else
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 25;
    }
  }
  else
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F;
    *((_DWORD *)P + (unsigned int)v8 + 1060) = 24;
  }
  v21 = (v24 & 2) == 0;
  *((_DWORD *)P + 1200) = 0;
  if ( !v21 )
    CmpUnlockRegistry(v8, v3, v5, v6, v24, v25);
  _InterlockedOr(v23, 0);
  if ( *((_QWORD *)P + 601) )
    ExfUnblockPushLock((volatile __int64 *)P + 601, 0LL);
  if ( (v24 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  return CmCleanupThreadInfo((__int64 *)&v25);
}
