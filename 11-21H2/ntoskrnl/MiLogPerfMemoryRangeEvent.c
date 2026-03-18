/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x1405852C0
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiCommitPoolMemory @ 0x1403525F0 (MiCommitPoolMemory.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiLogSectionCreate @ 0x14096BF70 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v5 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v9 = 0;
  v6[1] = a1;
  v6[2] = a4;
  v6[0] = v5 | (a3 >> 1) & 0xF;
  v8 = 24;
  v7 = v6;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x20000001u, ((a3 & 1) == 0) | 0x278, 0x11401B04u);
}
