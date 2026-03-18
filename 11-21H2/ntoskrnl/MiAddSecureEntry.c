/*
 * XREFs of MiAddSecureEntry @ 0x1407B9190
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiSecureVad @ 0x1406A2588 (MiSecureVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1406C3FB4 (MiAllocateVad.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiCloneNoChange @ 0x14096D6A8 (MiCloneNoChange.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140221E50 (MmGetCurrentProcessorColor.c)
 *     MiLocateExclusiveSecure @ 0x140246BC8 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MiSetVadFlags @ 0x14030B950 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v11; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  LOWORD(v9) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v11 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  PoolMm[16] = 2;
  *((_QWORD *)PoolMm + 1) = a2;
  *((_QWORD *)PoolMm + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 8;
  }
  else if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
  }
  else
  {
    if ( (a4 & 2) == 0 )
      goto LABEL_7;
    LODWORD(a2) = a2 | 9;
  }
  PoolMm[2] = a2;
LABEL_7:
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    PoolMm[2] = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    PoolMm[2] = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    PoolMm[2] = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    PoolMm[2] = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    LODWORD(a2) = a2 | 0x10;
    PoolMm[2] = a2;
  }
  if ( (a4 & 0x20000000) != 0 )
    PoolMm[2] = a2 | 0x100;
  MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1);
  MiSetVadFlags(a1, 1LL, 1);
  return v11;
}
