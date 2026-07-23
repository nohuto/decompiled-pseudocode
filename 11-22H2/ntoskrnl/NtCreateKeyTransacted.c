/*
 * XREFs of NtCreateKeyTransacted @ 0x140692240
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140768F38 (CmpTransDereferenceTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v12; // eax
  unsigned __int64 v13; // rbx
  NTSTATUS Key; // edi
  KPROCESSOR_MODE v15; // r9
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_OWORD *)v19 = 0LL;
  CmpInitializeThreadInfo((__int64)v19);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    Key = -1073741431;
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v13 = (unsigned __int64)Object;
  Key = v12;
  if ( v12 == -1073741788 )
  {
    v15 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(TransactionHandle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v15, &Object, 0LL);
    v13 = (unsigned __int64)Object;
    Key = v16;
    if ( v16 >= 0 )
      goto LABEL_6;
  }
  else if ( v12 >= 0 )
  {
    v13 = (unsigned __int64)Object | 1;
LABEL_6:
    Key = CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes);
  }
  if ( v13 )
    CmpTransDereferenceTransaction(v13);
  CmpReleaseShutdownRundown();
LABEL_10:
  CmCleanupThreadInfo(v19);
  return Key;
}
