/*
 * XREFs of ExpAssignPasid @ 0x140A019E0
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x14060DD80 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 544, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1, (void *)Object);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
