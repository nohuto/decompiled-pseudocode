/*
 * XREFs of MiValidateZeroBits @ 0x1407210B0
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6BB0 (MiAllocateVirtualMemoryPrepare.c)
 *     NtMapViewOfSection @ 0x140720E50 (NtMapViewOfSection.c)
 *     NtCreateEnclave @ 0x140A3EAB0 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x140356460 (RtlFindMostSignificantBit.c)
 */

ULONGLONG __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG result; // rax
  unsigned __int64 v3; // rax

  result = *a1;
  if ( *a1 )
  {
    if ( result < 0x20 )
      v3 = result + 32;
    else
      v3 = 63 - RtlFindMostSignificantBit(*a1);
    *a1 = v3;
    return v3 > 0x35 ? 0xC000000D : 0;
  }
  return result;
}
