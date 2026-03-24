/*
 * XREFs of MouseClassPassThrough @ 0x1C000F250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MouseClassPassThrough(__int64 a1, IRP *a2)
{
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 64) + 16LL), a2);
}
