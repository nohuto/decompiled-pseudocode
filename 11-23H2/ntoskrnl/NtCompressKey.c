/*
 * XREFs of NtCompressKey @ 0x140A0D640
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     CmpIsWriteQueueActive @ 0x1402F6BD4 (CmpIsWriteQueueActive.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     CmCheckNoTxContext @ 0x140691C88 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x1407691EC (CmpLockRegistryExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     CmCompressKey @ 0x140A13B04 (CmCompressKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall NtCompressKey(int a1)
{
  int v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  ULONG_PTR v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v23[3]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  CmpInitializeThreadInfo((__int64)&v22);
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      LOBYTE(v5) = PreviousMode;
      v6 = a1 & 3;
      v7 = CmObReferenceObjectByHandle(a1, 131078, v4, v5, (__int64)&Object, 0LL);
      v11 = Object;
      v2 = v7;
      if ( v7 >= 0 )
      {
        if ( (unsigned __int8)CmpAcquireShutdownRundown(v9, v8, v10) )
        {
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck(v11, 0LL);
            if ( v2 < 0 )
              break;
            v14 = v11[1];
            v16 = *(_QWORD **)(v14 + 32);
            v12 = *(unsigned int *)(v16[8] + 36LL);
            if ( *(_DWORD *)(v14 + 40) != (_DWORD)v12 )
            {
              v2 = -1073741811;
              break;
            }
            v17 = (ULONG_PTR)(v16 + 526);
            if ( !CmpIsWriteQueueActive(v16 + 526) )
            {
              v17 = (ULONG_PTR)(v16 + 524);
              if ( !CmpIsWriteQueueActive(v16 + 524) )
              {
                CmpAttachToRegistryProcess(v23);
                v2 = CmCompressKey(*(_QWORD *)(v11[1] + 32LL), v6);
                CmpDetachFromRegistryProcess(v23);
                break;
              }
            }
            HvLockHiveFlusherExclusive(v16);
            CmpWaitOnHiveWriteQueue((__int64)v16, v17);
          }
          CmpUnlockRegistry(v13, v12, v14, v15);
          CmpReleaseShutdownRundown(v19, v18);
        }
        else
        {
          v2 = -1073741431;
        }
      }
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  CmCleanupThreadInfo((__int64 *)&v22);
  return (unsigned int)v2;
}
