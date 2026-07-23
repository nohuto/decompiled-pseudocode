/*
 * XREFs of IoGetCurrentIrpStackLocation @ 0x140372E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIO_STACK_LOCATION __stdcall IoGetCurrentIrpStackLocation(PIRP Irp)
{
  return Irp->Tail.Overlay.CurrentStackLocation;
}
