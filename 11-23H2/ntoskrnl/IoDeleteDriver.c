/*
 * XREFs of IoDeleteDriver @ 0x140947320
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1407E0C90 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140857DC0 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
