/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x1C005CD48
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C0084170 (AcpiUpdateInterruptProperties.c)
 *     IrqLibAllocateMessageTarget @ 0x1C0098FB0 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1C0099260 (IrqLibFreeMessageTarget.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0099730 (LinkNodepAddLinkNodeWorker.c)
 *     IrqTransGetInterruptVector @ 0x1C009A420 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C009A530 (IrqTranslateResources.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
