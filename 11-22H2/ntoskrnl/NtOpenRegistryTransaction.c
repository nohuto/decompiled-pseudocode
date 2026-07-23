/*
 * XREFs of NtOpenRegistryTransaction @ 0x140A0D990
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtOpenRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // si
  NTSTATUS v11; // ebx
  char PreviousMode; // r14
  __int64 v13; // rax
  HANDLE v14; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)&v17);
  v10 = CmpAcquireShutdownRundown(v7, v6, v8);
  if ( v10 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
        v13 = (__int64)RegistryTransactionHandle;
      *(_QWORD *)v13 = 0LL;
    }
    else
    {
      *RegistryTransactionHandle = 0LL;
    }
    v11 = ObOpenObjectByName(
            (__int64)ObjAttributes,
            (__int64)CmRegistryTransactionType,
            PreviousMode,
            0LL,
            DesiredAccess,
            0LL,
            (__int64)&Handle);
    if ( v11 >= 0 )
    {
      *RegistryTransactionHandle = Handle;
      Handle = 0LL;
      v11 = 0;
    }
  }
  else
  {
    v11 = -1073741431;
  }
  v14 = Handle;
  if ( Handle )
    NtClose(Handle);
  if ( v10 )
    CmpReleaseShutdownRundown(v14, v9);
  CmCleanupThreadInfo((__int64 *)&v17);
  return v11;
}
