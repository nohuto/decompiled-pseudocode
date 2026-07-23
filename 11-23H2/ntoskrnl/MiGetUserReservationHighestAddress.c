/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1407221D0
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6DC0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapParametersInitialize @ 0x14072174C (MiMapParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
 *     MiMapExParametersInitialize @ 0x1407A3990 (MiMapExParametersInitialize.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCE34 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapImageInSystemProcess @ 0x140A30E64 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x140A3CF38 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1496) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
