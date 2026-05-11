/*
 * XREFs of CsPeekNextIrp @ 0x1C0002AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CsPeekNextIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  __int64 v3; // r8
  struct _LIST_ENTRY *v4; // r9
  struct _LIST_ENTRY *Flink; // rax

  v3 = 0LL;
  v4 = (struct _LIST_ENTRY *)(Csq + 72);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = v4->Flink;
  if ( Flink != v4 )
    return &Flink[-11].Blink;
  return (struct _LIST_ENTRY **)v3;
}
