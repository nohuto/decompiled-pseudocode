/*
 * XREFs of IopIsActivityTracingEnabled @ 0x1402902B0
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x14028FDC0 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FF08 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1405549E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554C78 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140AC0CE0 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

char IopIsActivityTracingEnabled()
{
  char v0; // cl

  if ( (IopFunctionPointerMask & 4) == 0 )
    return 0;
  v0 = 1;
  if ( (IopIrpExtensionStatus & 1) == 0 )
    return 0;
  return v0;
}
