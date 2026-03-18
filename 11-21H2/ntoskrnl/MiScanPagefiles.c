/*
 * XREFs of MiScanPagefiles @ 0x140268BEC
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x140268C20 (MiFreePageFileHashPfns.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns();
  result = MiSufficientAvailablePages(a1, 1056LL);
  if ( !(_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 16728);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 17504) && !*(_QWORD *)(a1 + 1008) )
      {
        result = *(unsigned int *)(a1 + 1016);
        if ( (unsigned int)result >= 0x1E )
        {
          LODWORD(v4) = 0;
          v5 = a1 + 16736;
          while ( (*(_BYTE *)(*(_QWORD *)v5 + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)v5 + 24LL) )
          {
            v4 = (unsigned int)(v4 + 1);
            v5 += 8LL;
            if ( (unsigned int)v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 699) )
              {
                v6 = *(_QWORD *)(a1 + 176);
                *(_BYTE *)(a1 + 699) = 0;
                *(_DWORD *)(a1 + 1016) = 0;
                result = PsReferencePartitionSafe(v6, v4, v5);
                if ( (_BYTE)result )
                {
                  *(_QWORD *)(a1 + 1008) = a1;
                  *(_QWORD *)(a1 + 1000) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 984) = v7;
                  return ExQueueWorkItemToPartition(a1 + 984);
                }
              }
              return result;
            }
          }
        }
        else
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)(a1 + 1016) = result;
        }
      }
    }
  }
  return result;
}
