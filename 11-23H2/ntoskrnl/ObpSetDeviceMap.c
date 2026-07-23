/*
 * XREFs of ObpSetDeviceMap @ 0x1407AFCAC
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     ObpSetSiloDeviceMap @ 0x140858AE4 (ObpSetSiloDeviceMap.c)
 *     ObSetProcessDeviceMap @ 0x14097C62C (ObSetProcessDeviceMap.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407376C0 (ObOpenObjectByPointer.c)
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 *     ObpDeleteDeviceMap @ 0x1407B0174 (ObpDeleteDeviceMap.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, __int64 *a6)
{
  __int64 v6; // rbx
  NTSTATUS result; // eax
  PVOID v10; // rsi
  __int64 Pool2; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // r15d
  _QWORD *v14; // rsi
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v17; // r15
  volatile signed __int64 *v18; // rbp
  PVOID v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  struct _KTHREAD *v23; // rax
  bool v24; // zf
  int v25; // ebx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  Objecta = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v10 = Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v25 = -1073741811;
LABEL_37:
    ObfDereferenceObject(v10);
    return v25;
  }
  Pool2 = ExAllocatePool2(256LL, 296LL, 1833198159LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v25 = -1073741670;
    goto LABEL_37;
  }
  *(_QWORD *)(Pool2 + 240) = 1LL;
  *(_QWORD *)Pool2 = v10;
  v13 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)(Pool2 + 248));
  if ( v13 < 0 )
  {
    ObfDereferenceObject(v10);
    ExFreePoolWithTag((PVOID)v12, 0x6D44624Fu);
    return v13;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      *(_QWORD *)(v12 + 16) = Object;
    }
    v14 = 0LL;
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = (volatile signed __int64 *)ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    v18 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
    v19 = Objecta;
    v20 = (__int64 *)((char *)Objecta + 304);
    v21 = *((_QWORD *)Objecta + 38);
    if ( v21 )
    {
      v14 = (_QWORD *)v12;
      v12 = *((_QWORD *)Objecta + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 240), 1uLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      if ( (a5 & 1) != 0 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        v19 = Objecta;
        *v17 = v12 + 15;
      }
      *v20 = v12;
      if ( (a5 & 2) != 0 )
      {
        v22 = *v17 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v19 != *(PVOID *)v22 )
        {
          *(_QWORD *)(v12 + 8) = *(_QWORD *)v22;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
          *(_QWORD *)(v12 + 24) = v22;
        }
      }
    }
    if ( a2 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      v6 = _InterlockedExchange64((volatile __int64 *)(a2 + 1416), (v12 | 0xF) & -(__int64)(v12 != 0));
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17 + 15);
    KeAbPostRelease((ULONG_PTR)(v17 + 15));
    v23 = KeGetCurrentThread();
    v24 = v23->SpecialApcDisable++ == -1;
    if ( v24 && ($C71981A45BEB2B45F82C232A7085991E *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery();
    if ( v14 )
    {
      --v14[30];
      ObpDeleteDeviceMap(v14);
    }
    if ( v6 )
      ObDereferenceDeviceMap((PVOID)(v6 & 0xFFFFFFFFFFFFFFF0uLL));
    if ( a6 )
      *a6 = v12;
    else
      ObDereferenceDeviceMap((PVOID)v12);
    return 0;
  }
}
