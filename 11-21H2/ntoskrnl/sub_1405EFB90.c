/*
 * XREFs of sub_1405EFB90 @ 0x1405EFB90
 * Callers:
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 *     sub_1405EFE44 @ 0x1405EFE44 (sub_1405EFE44.c)
 *     sub_1405F0120 @ 0x1405F0120 (sub_1405F0120.c)
 *     sub_1405F0224 @ 0x1405F0224 (sub_1405F0224.c)
 *     sub_1405F0510 @ 0x1405F0510 (sub_1405F0510.c)
 */

__int64 __fastcall sub_1405EFB90(unsigned __int64 Source)
{
  char *v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rdx
  char *i; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (char *)Source;
  v3 = 1024LL;
  v4 = __rdtsc() >> 4;
  if ( (Source & 4) != 0 )
  {
    *(_DWORD *)Source = v4;
    v2 = (char *)(Source + 4);
    v3 = 1023LL;
  }
  memset64(v2, (unsigned int)v4 | ((unsigned __int64)(unsigned int)v4 << 32), v3 >> 1);
  if ( (v3 & 1) != 0 )
    *(_DWORD *)&v2[4 * v3 - 4] = v4;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *((unsigned int *)CurrentPrcb + 58);
  if ( *((_DWORD *)CurrentPrcb + 58) )
  {
    _InterlockedOr(v11, 0);
    for ( i = (char *)(Source & ~(v6 - 1)); (unsigned __int64)i < Source + 4096; i += v6 )
      _mm_clflush(i);
  }
  if ( RtlCompareMemoryUlong((PVOID)Source, 0x1000uLL, v4) == 4096
    && (unsigned __int8)sub_1405F0120(0LL, 0xFFFFFFFFLL, Source)
    && (unsigned __int8)sub_1405F0120(0xFFFFFFFFLL, 0LL, Source)
    && (unsigned __int8)sub_1405EFE44(0LL, 0xFFFFFFFFLL, Source)
    && (unsigned __int8)sub_1405EFE44(0xFFFFFFFFLL, 0LL, Source)
    && (unsigned __int8)sub_1405F0510(0LL, 0xFFFFFFFFLL, v8, Source)
    && (unsigned __int8)sub_1405F0510(0xFFFFFFFFLL, 0LL, v9, Source)
    && (unsigned __int8)sub_1405F0224(Source) )
  {
    return 0LL;
  }
  else
  {
    return 3221227273LL;
  }
}
