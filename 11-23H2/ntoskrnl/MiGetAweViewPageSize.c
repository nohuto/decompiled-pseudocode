/*
 * XREFs of MiGetAweViewPageSize @ 0x14064A9B8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140649968 (MiDeleteVadAwePtes.c)
 *     MiGetAwePageSizeFromVa @ 0x14064A924 (MiGetAwePageSizeFromVa.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x140A414B8 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x140A41D5C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A41DB8 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42880 (NtMapUserPhysicalPages.c)
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
