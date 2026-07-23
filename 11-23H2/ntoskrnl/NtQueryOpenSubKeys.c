/*
 * XREFs of NtQueryOpenSubKeys @ 0x140A0DCD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpSearchForOpenSubKeys @ 0x140875394 (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r14
  NTSTATUS v13; // ebx
  char PreviousMode; // dl
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  ULONG v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID Object; // [rsp+48h] [rbp-1B0h] BYREF
  int v26; // [rsp+50h] [rbp-1A8h]
  __int128 v27; // [rsp+58h] [rbp-1A0h] BYREF
  _OWORD v28[3]; // [rsp+68h] [rbp-190h] BYREF
  _OWORD v29[19]; // [rsp+A0h] [rbp-158h] BYREF

  v27 = 0LL;
  v26 = 0;
  memset(v28, 0, sizeof(v28));
  Object = 0LL;
  memset(v29, 0, 0x128uLL);
  LODWORD(v29[6]) = -1;
  *((_QWORD *)&v29[9] + 1) = &v29[9];
  *(_QWORD *)&v29[9] = &v29[9];
  memset((char *)&v29[13] + 8, 0, 0x50uLL);
  v4 = 0;
  CmpInitializeThreadInfo((__int64)&v27);
  v12 = CmpAcquireShutdownRundown(v6, v5, v7);
  if ( v12 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)HandleCount < 0x7FFFFFFF0000LL )
        v15 = (__int64)HandleCount;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    v13 = ObReferenceObjectByNameEx(
            (__int64)TargetKey,
            0LL,
            131097,
            (__int64)CmKeyObjectType,
            PreviousMode,
            (__int64)v29,
            (__int64 *)&Object);
    if ( v13 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v16 = Object;
      v13 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v13 >= 0 )
      {
        if ( (*(_DWORD *)(v16[1] + 184LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess(v28);
          v17 = CmpSearchForOpenSubKeys(v16[1], 0, 0LL);
          CmpDetachFromRegistryProcess(v28);
          CmpUnlockRegistry(v19, v18, v20, v21);
          v4 = 0;
          *HandleCount = v17;
          v13 = 0;
        }
        else
        {
          v13 = -1073741811;
        }
      }
    }
  }
  else
  {
    v13 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry(v9, v8, v10, v11);
  CmpCleanupParseContext(v29, 0LL);
  if ( v12 )
    CmpReleaseShutdownRundown(v23, v22);
  if ( Object )
    ObfDereferenceObject(Object);
  CmCleanupThreadInfo((__int64 *)&v27);
  return v13;
}
