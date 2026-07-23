/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x140390FA0
 * Callers:
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x14039124C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140512CF8 (HalpDmaDereferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(ULONG_PTR BugCheckParameter3)
{
  char v2; // di
  __int64 v4; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject(BugCheckParameter3) >= 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 56);
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    return v4 != 0;
  }
  return v2;
}
