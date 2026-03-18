/*
 * XREFs of MiGetAweViewPageSize @ 0x1405AB030
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1405AA614 (MiDeleteVadAwePtes.c)
 *     MiGetAwePageSizeFromVa @ 0x1405AAF9C (MiGetAwePageSizeFromVa.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x14097CA4C (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x14097D244 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
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
