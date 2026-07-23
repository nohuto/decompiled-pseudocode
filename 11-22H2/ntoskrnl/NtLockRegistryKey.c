/*
 * XREFs of NtLockRegistryKey @ 0x140848FA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF63D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtLockRegistryKey(HANDLE KeyHandle)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (int)KeyHandle;
  *(_OWORD *)v10 = 0LL;
  CmpInitializeThreadInfo((__int64)v10);
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = -1073741727;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(v3, v2, v4) )
  {
    v8 = CmObReferenceObjectByHandle(v1, 131078, v5, 0, (__int64)&Object, 0LL);
    if ( v8 >= 0 )
    {
      v8 = CmLockKeyForWrite(Object);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    CmpReleaseShutdownRundown(v7, v6);
  }
  else
  {
    v8 = -1073741431;
  }
  CmCleanupThreadInfo(v10);
  return v8;
}
