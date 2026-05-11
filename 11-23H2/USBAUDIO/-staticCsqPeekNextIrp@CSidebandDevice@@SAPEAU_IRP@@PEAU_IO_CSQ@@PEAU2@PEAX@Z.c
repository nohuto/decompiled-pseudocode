/*
 * XREFs of ?staticCsqPeekNextIrp@CSidebandDevice@@SAPEAU_IRP@@PEAU_IO_CSQ@@PEAU2@PEAX@Z @ 0x1C0012B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CSidebandDevice::staticCsqPeekNextIrp(
        PIO_CSQ Csq,
        PIRP Irp,
        struct _LIST_ENTRY **PeekContext)
{
  __int64 v3; // r9
  struct _LIST_ENTRY *Flink; // rax

  v3 = 0LL;
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *PeekContext;
  if ( Flink != (struct _LIST_ENTRY *)PeekContext )
    return &Flink[-11].Blink;
  return (struct _LIST_ENTRY **)v3;
}
