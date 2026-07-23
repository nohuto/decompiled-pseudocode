/*
 * XREFs of RtlGetMultiTimePrecise @ 0x18007DFC0
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x180089C90 (RtlConvertHostPerfCounterToPerfCounter.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180010B40 (RtlQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  char v5; // r13
  __int64 v6; // rsi
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // esi
  LARGE_INTEGER v12; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned __int64 v20; // [rsp+48h] [rbp-60h]
  unsigned __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  char v24; // [rsp+B8h] [rbp+10h]
  int v26; // [rsp+C8h] [rbp+20h]

  v24 = a2;
  v3 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    v6 = RtlpHypervisorSharedUserVa;
    v7 = a2 & 4;
    v16 = RtlpHypervisorSharedUserVa;
    v15 = v7;
    v8 = a2 & 2;
    v26 = v8;
    while ( 1 )
    {
      v9 = MEMORY[0x7FFE0340];
      if ( (MEMORY[0x7FFE0340] & 1) == 0 )
      {
        if ( v7 )
        {
          v5 = MEMORY[0x7FFE0368];
          v20 = MEMORY[0x7FFE0348];
          v21 = MEMORY[0x7FFE0358];
          v22 = MEMORY[0x7FFE0014];
        }
        if ( v8 && v6 )
        {
          v18 = MEMORY[0x7FFE03C7];
          do
          {
            do
            {
              v4 = *(_QWORD *)(v16 + 24);
              v10 = MEMORY[0x7FFE03B8];
              v19 = MEMORY[0x7FFE03B8];
              RtlQueryPerformanceCounter(&PerformanceCounter);
            }
            while ( v4 != *(_QWORD *)(v16 + 24) );
          }
          while ( v10 != MEMORY[0x7FFE03B8] );
          v8 = v26;
          v7 = v15;
          v6 = v16;
        }
        else
        {
          RtlQueryPerformanceCounter(&PerformanceCounter);
        }
        if ( MEMORY[0x7FFE0340] == v9 )
          break;
      }
      _mm_pause();
    }
    v11 = 0;
    v12 = PerformanceCounter;
    if ( (v24 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v11 = 1;
    }
    if ( v26 && !v18 && v4 )
    {
      a1[1].QuadPart = v4 + v12.QuadPart - v19;
      v11 |= 2u;
    }
    if ( v15 )
    {
      if ( v12.QuadPart > v20 )
      {
        v14 = v12.QuadPart - v20 - 1;
        if ( v5 )
          v14 <<= v5;
        v3 = ((unsigned __int64)v14 * (unsigned __int128)v21) >> 64;
      }
      a1[2].QuadPart = v3 + v22;
      v11 |= 4u;
    }
    *a3 = v11;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
