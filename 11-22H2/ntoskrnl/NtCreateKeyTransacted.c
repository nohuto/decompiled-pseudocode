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

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v11; // eax
  unsigned __int64 v12; // rbx
  unsigned int Key; // edi
  KPROCESSOR_MODE v14; // r9
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-20h] BYREF

  *(_OWORD *)v18 = 0LL;
  CmpInitializeThreadInfo((__int64)v18);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    Key = -1073741431;
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v12 = (unsigned __int64)Object;
  Key = v11;
  if ( v11 == -1073741788 )
  {
    v14 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v14, &Object, 0LL);
    v12 = (unsigned __int64)Object;
    Key = v15;
    if ( v15 >= 0 )
      goto LABEL_6;
  }
  else if ( v11 >= 0 )
  {
    v12 = (unsigned __int64)Object | 1;
LABEL_6:
    Key = CmCreateKey(a1, a2, a3);
  }
  if ( v12 )
    CmpTransDereferenceTransaction(v12);
  CmpReleaseShutdownRundown();
LABEL_10:
  CmCleanupThreadInfo(v18);
  return Key;
}
