/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C000F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0008F1C (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00105AE (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 */

void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  unsigned int dummy; // [rsp+30h] [rbp+8h] BYREF

  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(Buffer, (void **)&this->m_pUrb, 0LL, &dummy);
}
