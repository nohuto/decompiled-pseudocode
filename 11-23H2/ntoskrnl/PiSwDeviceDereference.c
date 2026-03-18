/*
 * XREFs of PiSwDeviceDereference @ 0x14081A5C4
 * Callers:
 *     PiSwDispatch @ 0x14079C620 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x140967008 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1409670C0 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1409676D0 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140967BF4 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1409671E0 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
