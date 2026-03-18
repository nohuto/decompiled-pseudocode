/*
 * XREFs of ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C00133E0
 * Callers:
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00133A8 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

_IRP *__fastcall FxIrpQueue::PeekNextIrpFromQueue(FxIrpQueue *this, _IRP *Irp, _FILE_OBJECT *PeekContext)
{
  _IRP *result; // rax
  FxIrpQueue *Flink; // rdx

  result = 0LL;
  if ( Irp )
    Flink = (FxIrpQueue *)Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (FxIrpQueue *)this->m_Queue.Flink;
  while ( Flink != this )
  {
    result = (_IRP *)&Flink[-5].m_RequestCount;
    if ( !PeekContext || result->Tail.Overlay.CurrentStackLocation->FileObject == PeekContext )
      break;
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
    result = 0LL;
  }
  return result;
}
