/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x140A43480
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140200298 (MiProcessWsInSwapSupport.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiFreeWorkingSetSwapContext @ 0x14068196C (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1407B7488 (EtwTraceWorkingSetSwap.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 ProcessPartition; // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h]
  $115DCDF994C6370D29323EAB0E0C9502 v7; // [rsp+48h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  memset(&v7, 0, sizeof(v7));
  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)&v7);
  LODWORD(v5[0]) = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v1 + 2272), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v1 + 2272), 0);
  LODWORD(v6) = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v1, 1, (__int64)v5);
  KiUnstackDetachProcess(&v7);
  ProcessPartition = MiGetProcessPartition(v1);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v1, 0x73576D4Du);
}
