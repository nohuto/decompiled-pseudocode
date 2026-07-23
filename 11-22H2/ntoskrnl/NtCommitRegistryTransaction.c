/*
 * XREFs of NtCommitRegistryTransaction @ 0x140A0D300
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C51C (CmpCommitLightWeightTransaction.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCommitRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  PVOID v11; // rdi
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v15[3]; // [rsp+48h] [rbp-40h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  CmpInitializeThreadInfo((__int64)&v14);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v5, v4, v6) )
  {
    if ( Flags )
    {
      v9 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(
              RegistryTransactionHandle,
              8u,
              CmRegistryTransactionType,
              KeGetCurrentThread()->PreviousMode,
              &Object,
              0LL);
      v11 = Object;
      v9 = v10;
      if ( v10 >= 0 )
      {
        CmpAttachToRegistryProcess(v15);
        v9 = CmpCommitLightWeightTransaction(v11);
        CmpDetachFromRegistryProcess(v15);
        if ( v9 >= 0 )
          v9 = 0;
      }
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    CmpReleaseShutdownRundown(v8, v7);
  }
  else
  {
    v9 = -1073741431;
  }
  CmCleanupThreadInfo((__int64 *)&v14);
  return v9;
}
