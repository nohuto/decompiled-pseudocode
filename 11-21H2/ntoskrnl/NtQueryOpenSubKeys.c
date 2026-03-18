/*
 * XREFs of NtQueryOpenSubKeys @ 0x14090E9C0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x14069E3E0 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryOpenSubKeys(__int64 a1, _DWORD *a2)
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
  int v13; // ebx
  char PreviousMode; // dl
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID Object; // [rsp+48h] [rbp-1B0h] BYREF
  int v27; // [rsp+50h] [rbp-1A8h]
  __int128 v28; // [rsp+58h] [rbp-1A0h] BYREF
  _OWORD v29[3]; // [rsp+68h] [rbp-190h] BYREF
  _OWORD v30[19]; // [rsp+A0h] [rbp-158h] BYREF

  v28 = 0LL;
  v27 = 0;
  memset(v29, 0, sizeof(v29));
  Object = 0LL;
  memset(v30, 0, 0x128uLL);
  LODWORD(v30[6]) = -1;
  *((_QWORD *)&v30[9] + 1) = &v30[9];
  *(_QWORD *)&v30[9] = &v30[9];
  memset((char *)&v30[13] + 8, 0, 0x50uLL);
  v4 = 0;
  CmpInitializeThreadInfo((__int64)&v28);
  v12 = CmpAcquireShutdownRundown(v6, v5, v7);
  if ( v12 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a2;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    v13 = ObReferenceObjectByNameEx(
            a1,
            0LL,
            0x20019u,
            (__int64)CmKeyObjectType,
            PreviousMode,
            (__int64)v30,
            (PADAPTER_OBJECT *)&Object);
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
          CmpAttachToRegistryProcess(v29);
          v17 = CmpSearchForOpenSubKeys(v16[1], 0, 0LL);
          CmpDetachFromRegistryProcess(v29);
          CmpUnlockRegistry(v19, v18, v20, v21);
          v4 = 0;
          *a2 = v17;
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
  CmpCleanupParseContext(v30, 0LL);
  if ( v12 )
    CmpReleaseShutdownRundown(v23, v22, v24);
  if ( Object )
    ObfDereferenceObject(Object);
  CmCleanupThreadInfo((__int64 *)&v28);
  return (unsigned int)v13;
}
