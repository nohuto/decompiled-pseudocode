/*
 * XREFs of sub_14092972C @ 0x14092972C
 * Callers:
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E21F0 @ 0x1406E21F0 (sub_1406E21F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092972C(__int64 Object, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r14
  char *PoolWithTag; // rdi
  _OWORD *v9; // rcx
  char v10; // al
  PEPROCESS ThreadProcess; // rax
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v14; // ebp
  _OWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = 0;
  memset(v15, 0, sizeof(v15));
  if ( !dword_140D05310 )
    return 3221226326LL;
  if ( (*(_DWORD *)(Object + 116) & 0x400) != 0 || (*((_DWORD *)PsGetThreadProcess((PETHREAD)Object) + 543) & 1) != 0 )
    return 3221225659LL;
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1376), 0x15u) )
    return 3221227268LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x4B474244u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObfReferenceObject((PVOID)Object);
  *(_QWORD *)PoolWithTag = Object;
  v9 = PoolWithTag + 24;
  *((_QWORD *)PoolWithTag + 1) = v3;
  if ( a3 )
  {
    *v9 = *(_OWORD *)a3;
    *(_OWORD *)(PoolWithTag + 40) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(PoolWithTag + 56) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(PoolWithTag + 72) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(PoolWithTag + 88) = *(_OWORD *)(a3 + 64);
    *(_OWORD *)(PoolWithTag + 104) = *(_OWORD *)(a3 + 80);
    *(_OWORD *)(PoolWithTag + 120) = *(_OWORD *)(a3 + 96);
    *(_OWORD *)(PoolWithTag + 136) = *(_OWORD *)(a3 + 112);
    *(_OWORD *)(PoolWithTag + 152) = *(_OWORD *)(a3 + 128);
    *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a3 + 144);
    v10 = 1;
  }
  else
  {
    memset(v9, 0, 0x98uLL);
    v10 = 0;
  }
  PoolWithTag[16] = v10;
  *((_QWORD *)PoolWithTag + 22) = 0LL;
  *((_QWORD *)PoolWithTag + 24) = sub_140929C60;
  *((_QWORD *)PoolWithTag + 25) = PoolWithTag;
  ThreadProcess = PsGetThreadProcess((PETHREAD)Object);
  if ( ThreadProcess != *((PEPROCESS *)KeGetCurrentThread() + 23) )
  {
    sub_14030D5C0((ULONG_PTR)ThreadProcess, 0LL, (__int64)v15, v12);
    v4 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v14 = sub_1406E21F0(Object, 0LL);
  if ( v14 < 0 )
  {
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(PoolWithTag, 0x4B474244u);
    _InterlockedAnd((volatile signed __int32 *)(Object + 1376), 0xFFDFFFFF);
    ObfDereferenceObject((PVOID)Object);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(PoolWithTag + 176), DelayedWorkQueue);
    KeLeaveCriticalRegion();
  }
  if ( v4 )
    sub_1402D0930((__int64)v15, 0LL);
  return (unsigned int)v14;
}
