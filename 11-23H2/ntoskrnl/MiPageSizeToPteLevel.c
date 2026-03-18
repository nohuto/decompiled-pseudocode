/*
 * XREFs of MiPageSizeToPteLevel @ 0x14064E280
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x140277C10 (MiVadPageTableChargeLevel.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x140A414B8 (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x140A42880 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageSizeToPteLevel(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 2LL; i >= -1; --i )
  {
    if ( a1 <= MiLargePageSizes[i] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
