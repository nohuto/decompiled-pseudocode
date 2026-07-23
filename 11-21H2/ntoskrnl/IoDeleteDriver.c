/*
 * XREFs of IoDeleteDriver @ 0x140936380
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     sub_140857064 @ 0x140857064 (sub_140857064.c)
 */

LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  sub_140857064(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
