/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1407D37D0
 * Callers:
 *     NtOpenKeyTransacted @ 0x140A0DB70 (NtOpenKeyTransacted.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140768C18 (CmpTransDereferenceTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  NTSTATUS v17; // edi
  KPROCESSOR_MODE v18; // r9
  NTSTATUS v19; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp-30h] BYREF

  *(_OWORD *)v22 = 0LL;
  CmpInitializeThreadInfo((__int64)v22);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v10, v9, v11) )
  {
    v17 = -1073741431;
    goto LABEL_8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v16 = (__int64)Object;
  v17 = v13;
  if ( v13 != -1073741788 )
  {
    if ( v13 < 0 )
      goto LABEL_5;
    v16 = (unsigned __int64)Object | 1;
    goto LABEL_4;
  }
  v18 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(TransactionHandle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v18, &Object, 0LL);
  v16 = (__int64)Object;
  v17 = v19;
  if ( v19 >= 0 )
LABEL_4:
    v17 = CmOpenKey(
            KeyHandle,
            DesiredAccess,
            (__int64)ObjectAttributes,
            OpenOptions,
            v16,
            KeGetCurrentThread()->PreviousMode);
LABEL_5:
  if ( v16 )
    CmpTransDereferenceTransaction(v16);
  CmpReleaseShutdownRundown(v15, v14);
LABEL_8:
  CmCleanupThreadInfo(v22);
  return v17;
}
