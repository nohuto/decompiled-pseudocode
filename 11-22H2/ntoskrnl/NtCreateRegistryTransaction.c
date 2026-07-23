/*
 * XREFs of NtCreateRegistryTransaction @ 0x1407D22C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  char v12; // r14
  char PreviousMode; // r15
  __int64 v14; // rax
  NTSTATUS inserted; // edi
  _OWORD *v16; // rcx
  PVOID v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-78h]
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22[3]; // [rsp+68h] [rbp-30h] BYREF

  *(_OWORD *)v22 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((__int64)v22);
  v12 = CmpAcquireShutdownRundown(v9, v8, v10);
  if ( v12 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v14 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
          v14 = (__int64)RegistryTransactionHandle;
        *(_QWORD *)v14 = 0LL;
      }
      else
      {
        *RegistryTransactionHandle = 0LL;
      }
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   (__int64)ObjAttributes,
                   PreviousMode,
                   v19,
                   32,
                   0,
                   0,
                   &Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v16 = Object;
        *(_OWORD *)Object = 0LL;
        v16[1] = 0LL;
        *((_QWORD *)v16 + 1) = 0LL;
        inserted = ObInsertObjectEx((char *)v16, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  v17 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    CmpReleaseShutdownRundown(v17, v11);
  CmCleanupThreadInfo(v22);
  return inserted;
}
