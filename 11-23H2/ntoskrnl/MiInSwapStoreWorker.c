/*
 * XREFs of MiInSwapStoreWorker @ 0x1406817B0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     SmSwapStore @ 0x140681864 (SmSwapStore.c)
 *     MiInSwapStoreContextDereference @ 0x1406818E8 (MiInSwapStoreContextDereference.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14068190C (EtwTraceWorkingSetInSwapStoreFail.c)
 */

__int64 __fastcall MiInSwapStoreWorker(__int64 a1)
{
  _KPROCESS *v2; // rcx
  int v3; // edi
  $115DCDF994C6370D29323EAB0E0C9502 v5; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_KPROCESS **)(a1 + 32);
  memset(&v5, 0, sizeof(v5));
  KiStackAttachProcess(v2, 0, (__int64)&v5);
  v3 = SmSwapStore(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2520LL), 2LL);
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  if ( v3 < 0 )
    EtwTraceWorkingSetInSwapStoreFail(*(PEPROCESS *)(a1 + 32));
  KiUnstackDetachProcess(&v5);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x73576D4Du);
  return MiInSwapStoreContextDereference(a1);
}
