/*
 * XREFs of ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00011F8
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0005B00 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00062F4 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0001238 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003AC98 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 */

void __fastcall FxRequest::PostProcessSendAndForget(FxRequest *this)
{
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // r8

  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  this->m_Irp.m_Irp = 0LL;
  this->m_CompletionState = 0;
  if ( this->m_Reserved )
  {
    this->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    FxRequest::PostProcessCompletion(this, m_CompletionState, m_IoQueue);
  }
}
