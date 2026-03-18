/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x14038F0E4
 * Callers:
 *     HalpDispatchPnp @ 0x140829D70 (HalpDispatchPnp.c)
 *     HalpDispatchWmi @ 0x1408660B0 (HalpDispatchWmi.c)
 *     HalpDispatchPower @ 0x140A95CA0 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
