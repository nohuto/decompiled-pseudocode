/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x140390DC0
 * Callers:
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaReferenceDomainObject @ 0x14039106C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x1405127A8 (HalpDmaDereferenceDomainObject.c)
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
