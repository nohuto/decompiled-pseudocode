/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x14084A750
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140849B04 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  char v0; // r14
  __int64 *v2; // rcx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  char v5; // si
  char v6; // cl
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 Prcb; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned int v15; // r11d
  unsigned __int64 i; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rdx
  int v19; // r8d
  char v20; // r9
  __int64 *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  char v25; // dl
  int v26; // r9d
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rcx

  v0 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v2 = (__int64 *)PpmPerfDomainHead;
        v3 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v4 = v3;
            v3 = v2[59];
            v2 = (__int64 *)*v2;
            if ( v4 > v3 )
              v3 = v4;
          }
          while ( v2 != &PpmPerfDomainHead );
          if ( v3 )
          {
            v5 = 0;
            v6 = 0;
            if ( v3 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v7, HIDWORD(v3) + 0xFFFF);
              v5 = v7 - 14;
              v6 = v5;
            }
            v8 = v3 >> v6;
            v9 = -1;
            Prcb = KeGetPrcb(0);
            v11 = PpmPerfDomainHead;
            v12 = *(_QWORD *)(Prcb + 33968);
            while ( 1 )
            {
              v18 = 0LL;
              if ( (__int64 *)v11 == &PpmPerfDomainHead )
                break;
              v13 = *(_QWORD *)(v11 + 472);
              *(_BYTE *)(v11 + 480) = 100 * (v13 >> v5) / v8;
              if ( v13 >> v5 == v8 )
              {
                v14 = 0x10000LL;
              }
              else
              {
                v14 = ((v13 >> v5 << 16) + (v8 >> 1)) / v8;
                if ( v14 <= 1 )
                  v14 = 1LL;
              }
              v15 = 0;
              for ( i = ((v13 * *(unsigned int *)(v12 + 440)) << 16)
                      / (*(_QWORD *)(v12 + 472)
                       * (unsigned __int64)*(unsigned int *)(v11 + 440)); v15 < *(_DWORD *)(v11 + 296); ++v15 )
              {
                v17 = *(_QWORD *)(136LL * v15 + *(_QWORD *)(v11 + 312));
                if ( v17 )
                {
                  if ( *(_BYTE *)(v17 + 64) )
                    *(_DWORD *)(v17 - 760) = i;
                  *(_DWORD *)(v17 + 60) = v14;
                }
              }
              v11 = *(_QWORD *)v11;
              if ( v9 >= v14 )
                v9 = v14;
            }
            v19 = PpmPerfDomainCount;
            v20 = 0;
            for ( PpmHeteroMinRelativePerformance = v9; v19; ++v20 )
            {
              v21 = (__int64 *)PpmPerfDomainHead;
              v22 = -1LL;
              if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
              {
                v18 = -1LL;
              }
              else
              {
                do
                {
                  v23 = v21[59];
                  if ( v23 > v18 && v22 >= v23 )
                    v22 = v21[59];
                  v21 = (__int64 *)*v21;
                }
                while ( v21 != &PpmPerfDomainHead );
                v18 = v22;
                v24 = PpmPerfDomainHead;
                do
                {
                  if ( *(_QWORD *)(v24 + 472) == v18 )
                  {
                    *(_BYTE *)(v24 + 301) = v20;
                    --v19;
                  }
                  v24 = *(_QWORD *)v24;
                }
                while ( (__int64 *)v24 != &PpmPerfDomainHead );
              }
            }
            v25 = 0;
            PpmHeteroNominalPerformanceClasses = v20;
            v26 = PpmPerfDomainCount;
            v27 = 0LL;
            while ( v26 )
            {
              v28 = PpmPerfDomainHead;
              v29 = 0xFFFFFFFFLL;
              if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
              {
                v27 = 0xFFFFFFFFLL;
              }
              else
              {
                do
                {
                  v30 = *(_QWORD *)(v28 + 472) * *(unsigned int *)(v28 + 444);
                  if ( v30 > v27 && v29 >= v30 )
                    v29 = *(_QWORD *)(v28 + 472) * *(unsigned int *)(v28 + 444);
                  v28 = *(_QWORD *)v28;
                }
                while ( (__int64 *)v28 != &PpmPerfDomainHead );
                v27 = v29;
                v31 = PpmPerfDomainHead;
                do
                {
                  if ( *(_QWORD *)(v31 + 472) * *(unsigned int *)(v31 + 444) == v27 )
                  {
                    if ( *(_BYTE *)(v31 + 302) != v25 )
                    {
                      v0 = 1;
                      *(_BYTE *)(v31 + 302) = v25;
                    }
                    --v26;
                  }
                  v31 = *(_QWORD *)v31;
                }
                while ( (__int64 *)v31 != &PpmPerfDomainHead );
              }
              ++v25;
            }
            PpmHeteroHighestPerformanceClasses = v25;
          }
        }
      }
    }
  }
  return v0;
}
