/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x140390E44
 * Callers:
 *     HalpDispatchPnp @ 0x140828520 (HalpDispatchPnp.c)
 *     HalpDispatchWmi @ 0x140865E20 (HalpDispatchWmi.c)
 *     HalpDispatchPower @ 0x140A95A50 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
