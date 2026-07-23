/*
 * XREFs of RtlGetSystemTimePrecise @ 0x1800128E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x1800129A0 (RtlQueryPerformanceCounter.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 v0; // rbx
  __int64 v1; // r14
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r15
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v0 = MEMORY[0x7FFE0340];
    if ( (MEMORY[0x7FFE0340] & 1) == 0 )
    {
      v1 = MEMORY[0x7FFE0014];
      v2 = MEMORY[0x7FFE0348];
      v3 = MEMORY[0x7FFE0358];
      v4 = MEMORY[0x7FFE0368];
      RtlQueryPerformanceCounter(&PerformanceCounter);
      if ( MEMORY[0x7FFE0340] == v0 )
        break;
    }
    _mm_pause();
  }
  v5 = 0LL;
  if ( PerformanceCounter.QuadPart > v2 )
  {
    v6 = PerformanceCounter.QuadPart - v2 - 1;
    if ( v4 )
      v6 <<= v4;
    v5 = ((unsigned __int64)v6 * (unsigned __int128)v3) >> 64;
  }
  return (LARGE_INTEGER)(v1 + v5);
}
