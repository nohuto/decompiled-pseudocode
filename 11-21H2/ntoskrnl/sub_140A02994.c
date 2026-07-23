/*
 * XREFs of sub_140A02994 @ 0x140A02994
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140640EE8 @ 0x140640EE8 (sub_140640EE8.c)
 */

__int64 __fastcall sub_140A02994(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 544, a2, 0) )
    return 1LL;
  sub_140640EE8(a2 - 1);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
