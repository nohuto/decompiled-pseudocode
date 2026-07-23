/*
 * XREFs of SepFreeTokenCapabilities @ 0x14035F254
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406BD648 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140729790 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1409D14E0 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
