/*
 * XREFs of MiLogPerfMemoryRangeEvent @ 0x14061DDC8
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403C37E0 (MmFreeContiguousMemory.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiLogSectionCreate @ 0x140A2F8F0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryRangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD v6[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v4 = 0LL;
  if ( (a3 & 0x1E) == 0x1A )
    v4 = 16 * (a2 & 0xFFFFFFFFFFFFLL);
  v9 = 0;
  v6[1] = a1;
  v6[2] = a4;
  v8 = 24;
  v6[0] = ((unsigned __int8)v4 ^ (unsigned __int8)((unsigned __int64)a3 >> 1)) & 0xF ^ (unsigned __int64)v4;
  v7 = v6;
  return EtwTraceKernelEvent((int)&v7, 1, 0x20000001u, ((a3 & 1) == 0) | 0x278u, 289413892);
}
