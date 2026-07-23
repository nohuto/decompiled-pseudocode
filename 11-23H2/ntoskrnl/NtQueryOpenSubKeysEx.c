/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140A0DF10
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpSearchForOpenSubKeys @ 0x140875394 (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v17; // rcx
  size_t v18; // r14
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v24; // r10
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v29; // [rsp+40h] [rbp-1F8h]
  char v30; // [rsp+41h] [rbp-1F7h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-1D8h]
  __int128 v34; // [rsp+70h] [rbp-1C8h]
  int v35; // [rsp+80h] [rbp-1B8h]
  __int128 v36; // [rsp+88h] [rbp-1B0h] BYREF
  _OWORD v37[3]; // [rsp+98h] [rbp-1A0h] BYREF
  _OWORD v38[19]; // [rsp+D0h] [rbp-168h] BYREF

  v6 = BufferLength;
  v36 = 0LL;
  v35 = 0;
  memset(v37, 0, sizeof(v37));
  Object = 0LL;
  memset(v38, 0, 0x128uLL);
  LODWORD(v38[6]) = -1;
  *((_QWORD *)&v38[9] + 1) = &v38[9];
  *(_QWORD *)&v38[9] = &v38[9];
  memset((char *)&v38[13] + 8, 0, 0x50uLL);
  *(_OWORD *)Src = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0;
  CmpInitializeThreadInfo((__int64)&v36);
  v30 = CmpAcquireShutdownRundown(v9, v8, v10);
  if ( !v30 )
  {
    v15 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v15 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v15 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)RequiredSize < 0x7FFFFFFF0000LL )
      v17 = (__int64)RequiredSize;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v15 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          0LL,
          131097,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v38,
          (__int64 *)&Object);
  if ( v15 >= 0 )
  {
    LODWORD(Src[0]) = v6;
    v18 = v6;
    Src[1] = (void *)CmpAllocateTransientPoolWithQuota(v12, v6, 825773379LL);
    if ( Src[1] )
    {
      CmpLockRegistryExclusive();
      v29 = 1;
      v19 = Object;
      v15 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v15 >= 0 )
      {
        if ( (*(_DWORD *)(v19[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v15 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Src[1] = 0;
        LODWORD(v33) = 8;
        *((_QWORD *)&v34 + 1) = (char *)Src[1] + v18;
        *(_QWORD *)&v34 = v19;
        *(_QWORD *)((char *)&v33 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess(v37);
        CmpSearchForOpenSubKeys(v19[1], 0, (__int64)Src);
        CmpDetachFromRegistryProcess(v37);
        v15 = DWORD1(v33);
        CmpUnlockRegistry(v21, v20, v22, v23);
        v29 = 0;
        *RequiredSize = v33;
        v11 = (char *)Src[1];
        *(_DWORD *)Buffer = *(_DWORD *)Src[1];
        if ( v15 >= 0 )
        {
          v24 = v11 - (_BYTE *)Buffer;
          v25 = 0;
          if ( *(_DWORD *)v11 )
          {
            do
            {
              *(_QWORD *)&v11[24 * ++v25] -= v24;
              v11 = (char *)Src[1];
            }
            while ( v25 < *(_DWORD *)Src[1] );
          }
          memmove(Buffer, v11, v18);
          v15 = 0;
        }
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_22:
  if ( v29 )
    CmpUnlockRegistry(v12, v11, v13, v14);
  CmpCleanupParseContext(v38, 0LL);
  if ( v30 )
    CmpReleaseShutdownRundown(v27, v26);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Src[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  CmCleanupThreadInfo((__int64 *)&v36);
  return v15;
}
