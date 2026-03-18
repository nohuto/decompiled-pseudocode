/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C002385C
 * Callers:
 *     LinkNodepAddLinkNodeWorker @ 0x1C00975D0 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTranslateResources @ 0x1C009A040 (IrqTranslateResources.c)
 *     AcpiUpdateInterruptProperties @ 0x1C00AE1B0 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B5AE0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C00B5D90 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B62D0 (IrqTransGetInterruptVector.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent(Object, 0, 0);
}
