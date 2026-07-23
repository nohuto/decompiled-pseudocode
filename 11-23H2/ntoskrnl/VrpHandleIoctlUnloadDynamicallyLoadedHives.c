/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077A9D8
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14077B270 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsGetJobSilo @ 0x14031CA70 (PsGetJobSilo.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x14031CB28 (PsIsThreadInSilo.c)
 *     ZwUnloadKey2 @ 0x14041EBF0 (ZwUnloadKey2.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x14077B7F4 (VrpDestroyNamespaceNode.c)
 *     VrpCleanupNamespace @ 0x14077BFE8 (VrpCleanupNamespace.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // r13
  unsigned __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  char v19; // bl
  unsigned __int64 v21; // rcx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v23 = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    goto LABEL_26;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_21;
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo < 0 )
    goto LABEL_21;
  if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
  {
LABEL_26:
    JobSilo = -1073741811;
    goto LABEL_21;
  }
  PermanentSiloContext = PsGetPermanentSiloContext(a5, VrpSiloContextSlot, &v23);
  JobSilo = PermanentSiloContext;
  if ( PermanentSiloContext < 0 )
  {
    if ( PermanentSiloContext == -1073741275 )
LABEL_20:
      JobSilo = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)v23;
    v10 = (unsigned __int64 *)(v23 + 16);
    v11 = v23 + 16;
    --CurrentThread->KernelApcDisable;
    v12 = KeAbPreAcquire(v11, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    v14 = v23;
    if ( !*(_DWORD *)(v23 + 84) )
    {
      v15 = v9[6];
      for ( i = 0LL; i < v15; v15 = v9[6] )
      {
        v17 = 0LL;
        if ( i < v15 )
        {
          if ( !is_mul_ok(v9[5], i) || (v21 = v9[9], v17 = v21 + v9[5] * i, v17 < v21) )
            v17 = 0LL;
        }
        v18 = *(_QWORD *)v17;
        if ( *(int *)(*(_QWORD *)v17 + 56LL) < 0 )
        {
          memset(&TargetKey.Attributes + 1, 0, 20);
          TargetKey.RootDirectory = 0LL;
          *(_QWORD *)&TargetKey.Length = 48LL;
          TargetKey.ObjectName = (PUNICODE_STRING)(v18 + 24);
          TargetKey.Attributes = 576;
          ZwUnloadKey2(&TargetKey, 1u);
          VrpDestroyNamespaceNode(v14, v18);
        }
        else
        {
          ++i;
        }
      }
      VrpCleanupNamespace(v14);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_20;
    }
    JobSilo = -1073741738;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 16));
    KeAbPostRelease(v14 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
