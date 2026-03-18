/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x140721FD0
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6BB0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapParametersInitialize @ 0x14072154C (MiMapParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiMapExParametersInitialize @ 0x1407A37A0 (MiMapExParametersInitialize.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapImageInSystemProcess @ 0x140A30BB4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x140A3CC88 (MiAllocateEnclaveVad.c)
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
