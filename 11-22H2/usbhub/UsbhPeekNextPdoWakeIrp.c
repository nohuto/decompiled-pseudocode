/*
 * XREFs of UsbhPeekNextPdoWakeIrp @ 0x1C0022550
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoWakeIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  _LIST_ENTRY **v4; // r10
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  v4 = (_LIST_ENTRY **)(Csq - 16);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *v4;
  while ( Flink != (_LIST_ENTRY *)v4 )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)Csq - 137), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)Csq - 137), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
