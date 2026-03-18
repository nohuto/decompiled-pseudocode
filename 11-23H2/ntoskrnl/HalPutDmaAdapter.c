/*
 * XREFs of HalPutDmaAdapter @ 0x140504FA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
