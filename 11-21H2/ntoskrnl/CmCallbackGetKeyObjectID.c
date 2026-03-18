/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1408812B0
 * Callers:
 *     EtwpRegTraceCallback @ 0x1409E5BF0 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpConstructAndCacheName @ 0x1406815C0 (CmpConstructAndCacheName.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const UNICODE_STRING *v18; // [rsp+20h] [rbp-29h] BYREF
  __int128 v19; // [rsp+28h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-11h]
  __int128 v21; // [rsp+48h] [rbp-1h] BYREF
  _OWORD v22[3]; // [rsp+58h] [rbp+Fh] BYREF

  v18 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  CmpInitializeThreadInfo((__int64)&v21);
  v19 = 0LL;
  WORD1(v19) = -1;
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
    CmpAttachToRegistryProcess(v22);
    CmpLockRegistry(v11, v10, v12);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v19, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)&v19);
      if ( *(_QWORD *)(v8 + 80) && (int)CmpConstructAndCacheName(v8, &v18) >= 0 )
      {
        started = 0;
        *ObjectName = v18;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)&v19);
    }
    CmpUnlockRegistry(v14, v13, v15, v16);
    CmpDetachFromRegistryProcess(v22);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((__int64 *)&v21);
  return started;
}
