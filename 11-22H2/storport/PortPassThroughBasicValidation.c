/*
 * XREFs of PortPassThroughBasicValidation @ 0x1C001DED8
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC (RaUnitScsiPassThroughIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  return CurrentStackLocation->Parameters.Create.Options < (IoIs32bitProcess(a1) != 0 ? 44 : 56) ? 0xC0000023 : 0;
}
