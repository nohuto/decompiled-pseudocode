/*
 * XREFs of RtlGetMultiTimePrecise @ 0x18000BC10
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x18008FE50 (RtlConvertHostPerfCounterToPerfCounter.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x1800129A0 (RtlQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rdi
  char v4; // bp
  __int64 v5; // r15
  char v6; // r13
  __int64 v7; // rsi
  int v8; // r12d
  int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // r14
  LARGE_INTEGER v12; // rdx
  int v13; // esi
  __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-80h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned __int64 v20; // [rsp+48h] [rbp-60h]
  unsigned __int64 v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp+10h]
  int v26; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v20 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v6 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    v7 = RtlpHypervisorSharedUserVa;
    v8 = a2 & 4;
    v16 = RtlpHypervisorSharedUserVa;
    v26 = v8;
    v9 = a2 & 2;
    v24 = v9;
    while ( 1 )
    {
      v10 = MEMORY[0x7FFE0340];
      if ( (MEMORY[0x7FFE0340] & 1) == 0 )
      {
        if ( v8 )
        {
          v6 = MEMORY[0x7FFE0368];
          v20 = MEMORY[0x7FFE0348];
          v21 = MEMORY[0x7FFE0358];
          v22 = MEMORY[0x7FFE0014];
        }
        if ( v9 && v7 )
        {
          v18 = MEMORY[0x7FFE03C7];
          do
          {
            do
            {
              v5 = *(_QWORD *)(v16 + 24);
              v11 = MEMORY[0x7FFE03B8];
              v19 = MEMORY[0x7FFE03B8];
              RtlQueryPerformanceCounter(&PerformanceCounter);
            }
            while ( v5 != *(_QWORD *)(v16 + 24) );
          }
          while ( v11 != MEMORY[0x7FFE03B8] );
          v9 = v24;
          v8 = v26;
          v7 = v16;
        }
        else
        {
          RtlQueryPerformanceCounter(&PerformanceCounter);
        }
        if ( MEMORY[0x7FFE0340] == v10 )
          break;
      }
      _mm_pause();
    }
    v12 = PerformanceCounter;
    v13 = 0;
    if ( (v4 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v13 = 1;
    }
    if ( v24 && !v18 && v5 )
    {
      a1[1].QuadPart = v5 + v12.QuadPart - v19;
      v13 |= 2u;
    }
    if ( v26 )
    {
      if ( v12.QuadPart > v20 )
      {
        v15 = v12.QuadPart - v20 - 1;
        if ( v6 )
          v15 <<= v6;
        v3 = ((unsigned __int64)v15 * (unsigned __int128)v21) >> 64;
      }
      a1[2].QuadPart = v3 + v22;
      v13 |= 4u;
    }
    *a3 = v13;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
