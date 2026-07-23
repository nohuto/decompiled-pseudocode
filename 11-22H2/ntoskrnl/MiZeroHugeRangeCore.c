/*
 * XREFs of MiZeroHugeRangeCore @ 0x140A2DF6C
 * Callers:
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 * Callees:
 *     MiAllocateAcceleratorDescriptor @ 0x140222100 (MiAllocateAcceleratorDescriptor.c)
 *     MiInitializeAffinityWalker @ 0x140223124 (MiInitializeAffinityWalker.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeInitializeGate @ 0x140293114 (KeInitializeGate.c)
 *     KeSetPriorityThread @ 0x1402B0310 (KeSetPriorityThread.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 *     KeQueryPriorityThread @ 0x140304B70 (KeQueryPriorityThread.c)
 *     KeWaitForGate @ 0x14034A780 (KeWaitForGate.c)
 *     MiSelectEngine @ 0x14035B1FC (MiSelectEngine.c)
 *     MiInitializeZeroGroup @ 0x140360150 (MiInitializeZeroGroup.c)
 *     MiGetNextAffinityWalker @ 0x1403BF268 (MiGetNextAffinityWalker.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeClearSystemPriorityThread @ 0x140576D0C (KeClearSystemPriorityThread.c)
 *     KeSetSystemPriorityThread @ 0x140576D40 (KeSetSystemPriorityThread.c)
 *     MiFreeNextAffinityWalker @ 0x1405B7A4C (MiFreeNextAffinityWalker.c)
 *     MiPageToNode @ 0x140617860 (MiPageToNode.c)
 *     MiDereferenceHugeIoRange @ 0x14061F9D4 (MiDereferenceHugeIoRange.c)
 *     MiReturnUnusedHugeDescriptors @ 0x140622780 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MiRestoreIdealProcessorThread @ 0x1406670B4 (MiRestoreIdealProcessorThread.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140772B10 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiZeroHugeRangeCore(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rsi
  int v6; // r14d
  unsigned int v7; // eax
  char v8; // bl
  unsigned int v9; // r13d
  _DWORD *Pool; // rax
  __int64 v11; // r8
  _DWORD *v12; // r15
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // r12d
  void *v18; // rdi
  KPRIORITY PriorityThread; // r14d
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // ebx
  __int16 v22; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-65h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-61h] BYREF
  int v25; // [rsp+5Ch] [rbp-5Dh]
  int v26; // [rsp+60h] [rbp-59h]
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  PKTHREAD Thread; // [rsp+70h] [rbp-49h]
  ULONG_PTR v29; // [rsp+78h] [rbp-41h]
  PVOID Object; // [rsp+80h] [rbp-39h] BYREF
  __int64 v31; // [rsp+88h] [rbp-31h]
  _GROUP_AFFINITY Affinity; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v33[3]; // [rsp+A0h] [rbp-19h] BYREF

  v29 = a1;
  v26 = a4;
  v31 = a2;
  v23 = 0;
  v5 = a3 & 0x3FFFFF;
  v24 = 0;
  Handle = 0LL;
  v22 = 0;
  memset(v33, 0, sizeof(v33));
  v6 = MiPageToNode(v5 << 18);
  v25 = MiSelectEngine(v6, 0, &v24, &v23);
  Thread = KeGetCurrentThread();
  v7 = MiInitializeZeroGroup(&v22, a1, 0, v23, v6);
  v8 = v22;
  v9 = v7;
  v23 = v7;
  if ( v7 == 1 && (_BYTE)v22 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x98uLL, 0x6D5A694Du);
  v12 = Pool;
  if ( !Pool )
    return 0LL;
  v14 = v24;
  if ( !v25 && !(unsigned int)MiAllocateAcceleratorDescriptor(0LL, v24, v11, (_QWORD *)Pool + 18) )
  {
LABEL_7:
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  *v12 = 512;
  *((_QWORD *)v12 + 1) = v12 + 4;
  *((_QWORD *)v12 + 10) = v31;
  v15 = v26;
  *((_QWORD *)v12 + 11) = qword_140C67EF0 + 8 * v5;
  v12[26] = v15;
  KeInitializeGate((__int64)(v12 + 28), 0);
  if ( (unsigned __int16 *)a1 == MiSystemPartition )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 200);
    *((_QWORD *)v12 + 17) = v16;
  }
  v12[25] = v9 + 1;
  if ( v8 )
    --v9;
  v17 = 0;
  if ( v9 || v8 )
  {
    v18 = (void *)MiInitializeAffinityWalker(v25, v14, v6);
    if ( !v9 )
      goto LABEL_34;
    v29 = *(_QWORD *)(*(_QWORD *)(v29 + 200) + 120LL);
    PriorityThread = KeQueryPriorityThread(Thread);
    KeSetSystemPriorityThread((ULONG_PTR)Thread, 15);
    while ( (int)MiGetNextAffinityWalker((__int64)v18, v33) >= 0 )
    {
      if ( v16 && _InterlockedIncrement64((volatile signed __int64 *)(v16 + 32)) <= 1 )
        __fastfail(0xEu);
      if ( (int)PsCreateSystemThreadEx(
                  (__int64)&Handle,
                  0x1FFFFF,
                  0LL,
                  v29,
                  0LL,
                  (__int64)MiZeroHugeRangeWorker,
                  (__int64)v12,
                  0LL,
                  (_DWORD *)v33 + 1) < 0 )
      {
        if ( v16 )
          PsDereferencePartition(v16);
        break;
      }
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v20 = (struct _KTHREAD *)Object;
      if ( KeQueryPriorityThread((PKTHREAD)Object) != PriorityThread )
        KeSetPriorityThread(v20, PriorityThread);
      ObfDereferenceObject(v20);
      ObCloseHandle(Handle, 0);
      if ( ++v17 >= v9 )
        goto LABEL_30;
    }
    _InterlockedExchangeAdd(v12 + 25, v17 - v9);
LABEL_30:
    v8 = v22;
    KeClearSystemPriorityThread((ULONG_PTR)Thread, 15);
    if ( v17 )
    {
LABEL_34:
      if ( !v8 )
        goto LABEL_43;
    }
    else if ( !v8 )
    {
      MiFreeNextAffinityWalker(v18);
      goto LABEL_7;
    }
    v21 = -1;
    if ( HIBYTE(v22) && (int)MiGetNextAffinityWalker((__int64)v18, v33) >= 0 )
    {
      Affinity = *(_GROUP_AFFINITY *)((char *)v33 + 8);
      v21 = MiSetIdealProcessorThread(&Affinity);
    }
    if ( v16 && _InterlockedIncrement64((volatile signed __int64 *)(v16 + 32)) <= 1 )
      __fastfail(0xEu);
    MiZeroHugeRangeWorker((PRTL_BITMAP)v12);
    if ( v21 != -1 )
      MiRestoreIdealProcessorThread(v21);
    goto LABEL_43;
  }
  v18 = 0LL;
LABEL_43:
  MiFreeNextAffinityWalker(v18);
  if ( v17 )
    KeWaitForGate((__int64)(v12 + 28), 0, 0);
  if ( *((_QWORD *)v12 + 18) )
    MiReturnUnusedHugeDescriptors((__int64)v12);
  MiDereferenceHugeIoRange(v12);
  return 1LL;
}
