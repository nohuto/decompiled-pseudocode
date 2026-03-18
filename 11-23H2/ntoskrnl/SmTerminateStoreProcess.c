/*
 * XREFs of SmTerminateStoreProcess @ 0x1405C9BE8
 * Callers:
 *     SmFirstTimeInit @ 0x1407B7D14 (SmFirstTimeInit.c)
 *     SmPartitionCleanup @ 0x1409D6BB8 (SmPartitionCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     PsTerminateMinimalProcess @ 0x1409B3850 (PsTerminateMinimalProcess.c)
 */

LONG __fastcall SmTerminateStoreProcess(__int64 a1)
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  PsTerminateMinimalProcess(*(_QWORD *)(a1 + 2008));
  Timeout.QuadPart = -3000000000LL;
  while ( KeWaitForSingleObject(*(PVOID *)(a1 + 2008), WrKernel, 0, 0, &Timeout) )
    ;
  ZwClose(*(HANDLE *)(a1 + 2000));
  ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 2008), 0x746C6644u);
  Timeout.QuadPart = -6000000000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 2016), WrKernel, 0, 0, &Timeout) )
    ;
  result = KeResetEvent((PRKEVENT)(a1 + 2016));
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  return result;
}
