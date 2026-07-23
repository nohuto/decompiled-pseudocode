/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1408AB940
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408AADC0 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1406D5668 (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructAndCacheName @ 0x1407E1D10 (CmpConstructAndCacheName.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  NTSTATUS started; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  const UNICODE_STRING *v20; // [rsp+20h] [rbp-39h] BYREF
  __int128 v21; // [rsp+28h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-21h]
  __int128 v23; // [rsp+48h] [rbp-11h] BYREF
  _OWORD v24[3]; // [rsp+58h] [rbp-1h] BYREF

  v20 = 0LL;
  v23 = 0LL;
  memset(v24, 0, sizeof(v24));
  CmpInitializeThreadInfo((__int64)&v23);
  v21 = 0LL;
  WORD1(v21) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v7 )
    goto LABEL_16;
  v8 = *((_QWORD *)Object + 1);
  if ( v6 )
    *v6 = v8;
  if ( !ObjectName )
  {
    started = 0;
    goto LABEL_17;
  }
  if ( (v8 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v24);
    CmpLockRegistry(v11, v10, v12, v13);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v21, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v21);
      if ( *(_QWORD *)(v8 + 80) && (int)CmpConstructAndCacheName(v8, &v20, v18) >= 0 )
      {
        started = 0;
        *ObjectName = v20;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v21);
    }
    CmpUnlockRegistry(v15, v14, v16, v17);
    CmpDetachFromRegistryProcess(v24);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((__int64 *)&v23);
  return started;
}
