/*
 * XREFs of IrqLibAcquireArbiterLock @ 0x1C0023884
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C002C8B0 (IrqLibpGetVectorInput.c)
 *     ProcessorpAddInstanceCallback @ 0x1C006CA20 (ProcessorpAddInstanceCallback.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00975D0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C009A040 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AE1B0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B5AE0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B5D90 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B62D0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall IrqLibAcquireArbiterLock(char a1)
{
  NTSTATUS result; // eax

  result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( a1 )
  {
    while ( byte_1C0080908 )
    {
      KeSetEvent(Object, 0, 0);
      KeWaitForSingleObject(qword_1C0080910, Executive, 0, 0, 0LL);
      result = KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    }
  }
  return result;
}
