/*
 * XREFs of MiAddSecureEntry @ 0x140745D84
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A4A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiSecureVad @ 0x1407BAA1C (MiSecureVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1407CFBD8 (MiAllocateVad.c)
 *     MiCloneNoChange @ 0x140A31E38 (MiCloneNoChange.c)
 * Callees:
 *     MiSetVadFlags @ 0x1402876B0 (MiSetVadFlags.c)
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     MmGetCurrentProcessorColor @ 0x140328F80 (MmGetCurrentProcessorColor.c)
 *     MiLocateExclusiveSecure @ 0x14035A950 (MiLocateExclusiveSecure.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *PoolMm; // rax
  __int64 v11; // r9
  _DWORD *v12; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  LOWORD(v9) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v12 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  PoolMm[16] = 2;
  *((_QWORD *)PoolMm + 1) = a2;
  *((_QWORD *)PoolMm + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    PoolMm[2] |= 8u;
  }
  else if ( (a4 & 4) != 0 )
  {
    PoolMm[2] |= 0xAu;
  }
  else if ( (a4 & 2) != 0 )
  {
    PoolMm[2] |= 9u;
  }
  if ( (a5 & 1) != 0 )
    PoolMm[2] |= 0x20u;
  if ( (a5 & 4) != 0 )
    PoolMm[2] |= 0x40u;
  if ( (a5 & 8) != 0 )
    PoolMm[2] |= 0x80u;
  if ( a4 < 0 )
    PoolMm[2] |= 4u;
  if ( (a4 & 0x40000000) != 0 )
    PoolMm[2] |= 0x10u;
  if ( (a4 & 0x20000000) != 0 )
    PoolMm[2] |= 0x100u;
  MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1LL, v11);
  MiSetVadFlags(a1, 1LL, 1);
  return v12;
}
