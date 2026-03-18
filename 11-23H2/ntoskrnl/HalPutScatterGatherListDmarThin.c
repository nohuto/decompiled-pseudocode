/*
 * XREFs of HalPutScatterGatherListDmarThin @ 0x14045CFF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14050087C (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpPutScatterGatherListDmarThin @ 0x1405141C0 (HalpPutScatterGatherListDmarThin.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListDmarThin(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char v5; // bp

  v2 = a2[1];
  v5 = HalpPutScatterGatherListDmarThin();
  if ( *(_BYTE *)(v2 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v5 )
    HalpDmaReturnEmergencyLogicalAddressResources(a1);
}
