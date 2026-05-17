/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x18007E140
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180010B40 (RtlQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  while ( 1 )
  {
    v4 = MEMORY[0x7FFE0340];
    if ( (MEMORY[0x7FFE0340] & 1) == 0 )
    {
      v5 = MEMORY[0x7FFE0350];
      v6 = MEMORY[0x7FFE0008];
      RtlQueryPerformanceCounter(&v10, a2);
      if ( MEMORY[0x7FFE0340] == v4 )
        break;
    }
    _mm_pause();
  }
  v7 = v10;
  *a1 = v10;
  if ( v7 > v5 )
  {
    v8 = v7 - v5 - 1;
    if ( MEMORY[0x7FFE0369] )
      v8 <<= MEMORY[0x7FFE0369];
    v3 = ((unsigned __int64)v8 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64;
  }
  return v6 + v3;
}
