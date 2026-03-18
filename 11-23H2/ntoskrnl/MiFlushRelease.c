/*
 * XREFs of MiFlushRelease @ 0x14029F980
 * Callers:
 *     MmFlushSection @ 0x140287490 (MmFlushSection.c)
 *     MmTrimSection @ 0x1402EF8D8 (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x140635FE0 (MiFreeOverlappedFlushEntry.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407B4258 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsections @ 0x14029FA30 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14029FBC0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B3B4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = MiDecrementSubsections(a2);
    v6 = MiDecrementSubsections(a3) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v8) = v9;
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
