/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140681670
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140208958 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     CmpCompleteUnloadKey @ 0x14067BE48 (CmpCompleteUnloadKey.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x1406A5F0C (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
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
  bool v17; // zf
  signed __int32 v19[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v22[3]; // [rsp+38h] [rbp-38h] BYREF

  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  CmpInitializeThreadInfo((__int64)&v21);
  v2 = 0;
  LODWORD(v20) = 0;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD();
    LOBYTE(v7) = 1;
    CmpLockRegistryFreezeAware(v7);
    v9 = *(_DWORD *)(a1 + 160);
    LODWORD(v20) = 6;
    if ( (v9 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 23;
    }
    else if ( *(_BYTE *)(a1 + 2944) )
    {
      v10 = *(_QWORD *)(a1 + 2936);
      if ( (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
      {
        v2 = 1;
        ++CmpActiveAppHiveUnloadCount;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v10) )
      {
        v11 = *(_QWORD *)(a1 + 2936);
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 30;
        CmpAttachToRegistryProcess(v22);
        CmpCompleteUnloadKey(v11, v12, &v20);
        CmpDetachFromRegistryProcess(v22);
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v11);
        CmpUnlockRegistry(v14, v13, v15, v16, v20, v21);
      }
      else if ( v2 )
      {
        CmpDecrementAppHiveUnloadCount();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 25;
    }
  }
  else
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F;
    *(_DWORD *)(a1 + 4LL * (unsigned int)v8 + 4240) = 24;
  }
  v17 = (v20 & 2) == 0;
  *(_DWORD *)(a1 + 4800) = 0;
  if ( !v17 )
    CmpUnlockRegistry(v8, v3, v5, v6, v20, v21);
  _InterlockedOr(v19, 0);
  if ( *(_QWORD *)(a1 + 4808) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 4808), 0LL);
  if ( (v20 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpDereferenceHive(a1);
  return CmCleanupThreadInfo((__int64 *)&v21);
}
