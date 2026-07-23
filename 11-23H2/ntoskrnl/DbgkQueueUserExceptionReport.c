/*
 * XREFs of DbgkQueueUserExceptionReport @ 0x14093990C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x1405B82D8 (SepLogLpacAccessFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     IoThreadToProcess @ 0x14028A210 (IoThreadToProcess.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PsSuspendThread @ 0x1407DB960 (PsSuspendThread.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkQueueUserExceptionReport(__int64 Object, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r14
  __int64 Pool2; // rdi
  char v9; // al
  _KPROCESS *v10; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebp
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  memset(&v13, 0, sizeof(v13));
  if ( !DbgkEnableWerUserReporting )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0
    || (HIDWORD(IoThreadToProcess((PETHREAD)Object)[2].Header.WaitListHead.Flink) & 1) != 0 )
  {
    return 3221225659LL;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1376), 0x15u) )
    return 3221227268LL;
  Pool2 = ExAllocatePool2(64LL, 208LL, 1262961220LL);
  if ( !Pool2 )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)Pool2 = Object;
  *(_QWORD *)(Pool2 + 8) = v3;
  if ( a3 )
  {
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a3;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(Pool2 + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(Pool2 + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(Pool2 + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(Pool2 + 152) = *(_OWORD *)(a3 + 128);
    *(_QWORD *)(Pool2 + 168) = *(_QWORD *)(a3 + 144);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_BYTE *)(Pool2 + 16) = v9;
  *(_QWORD *)(Pool2 + 176) = 0LL;
  *(_QWORD *)(Pool2 + 192) = DbgkUserReportWorkRoutine;
  *(_QWORD *)(Pool2 + 200) = Pool2;
  v10 = IoThreadToProcess((PETHREAD)Object);
  if ( v10 != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(v10, 0, (__int64)&v13);
    v4 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = PsSuspendThread(Object, 0LL);
  if ( v12 < 0 )
  {
    KeLeaveCriticalRegion();
    ExFreePoolWithTag((PVOID)Pool2, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1376), 0xFFDFFFFF);
    ObfDereferenceObject((PVOID)Object);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 176), DelayedWorkQueue);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    KiUnstackDetachProcess(&v13);
  return (unsigned int)v12;
}
