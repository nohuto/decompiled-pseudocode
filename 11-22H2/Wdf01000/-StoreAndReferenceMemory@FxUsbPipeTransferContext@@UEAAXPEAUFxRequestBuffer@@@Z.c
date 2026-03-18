/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00613F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0008F1C (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00105AE (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 */

void __fastcall FxUsbPipeTransferContext::StoreAndReferenceMemory(
        FxUsbPipeTransferContext *this,
        FxRequestBuffer *Buffer)
{
  _MDL *m_PartialMdl; // rcx

  memset(this->m_Urb, 0, sizeof(_URB_BULK_OR_INTERRUPT_TRANSFER));
  this->m_Urb->Hdr.Function = 9;
  this->m_Urb->Hdr.Length = 128;
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(
    Buffer,
    (_MDL **)&this->m_Urb->TransferBuffer,
    &this->m_Urb->TransferBufferMDL,
    &this->m_Urb->TransferBufferLength);
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
