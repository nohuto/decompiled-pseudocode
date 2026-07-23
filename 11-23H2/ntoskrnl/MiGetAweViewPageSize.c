/*
 * XREFs of MiGetAweViewPageSize @ 0x14064AF08
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140649EB8 (MiDeleteVadAwePtes.c)
 *     MiGetAwePageSizeFromVa @ 0x14064AE74 (MiGetAwePageSizeFromVa.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x140A41768 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A42068 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42B30 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweViewPageSize(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return 16LL;
  if ( v1 == 2 )
    return 512LL;
  result = 0LL;
  if ( v1 == 3 )
    return 0x40000LL;
  return result;
}
