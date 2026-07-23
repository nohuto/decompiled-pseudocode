/*
 * XREFs of IopIsActivityTracingEnabled @ 0x140290540
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x140290050 (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x140290198 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x1405550A0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140555338 (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140AC0CD0 (IovAllocateIrp.c)
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
