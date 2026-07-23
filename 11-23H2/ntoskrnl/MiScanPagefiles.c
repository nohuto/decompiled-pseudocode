/*
 * XREFs of MiScanPagefiles @ 0x14021D8FC
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     MiSufficientAvailablePages @ 0x1402E383C (MiSufficientAvailablePages.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // edx
  int v10; // ecx
  __int64 i; // r8
  __int64 v12; // rcx

  v4 = *(_DWORD *)(a1 + 17048);
  if ( v4 )
  {
    v6 = (_QWORD *)(a1 + 17056);
    v7 = v4;
    do
    {
      MiFreePageFileHashPfns(*v6++);
      --v7;
    }
    while ( v7 );
  }
  result = MiSufficientAvailablePages(a1, 1056LL, a3, a4);
  if ( !(_DWORD)result )
  {
    v9 = *(_DWORD *)(a1 + 17048);
    if ( v9 )
    {
      if ( *(_QWORD *)(a1 + 17824) && !*(_QWORD *)(a1 + 1024) )
      {
        result = *(unsigned int *)(a1 + 1032);
        if ( (unsigned int)result >= 0x1E )
        {
          v10 = 0;
          for ( i = a1 + 17056;
                (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL);
                i += 8LL )
          {
            if ( ++v10 >= v9 )
            {
              if ( *(_BYTE *)(a1 + 715) )
              {
                v12 = *(_QWORD *)(a1 + 200);
                *(_DWORD *)(a1 + 1032) = 0;
                *(_BYTE *)(a1 + 715) = 0;
                result = PsReferencePartitionSafe(v12);
                if ( (_BYTE)result )
                {
                  *(_QWORD *)(a1 + 1000) = 0LL;
                  *(_QWORD *)(a1 + 1016) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 1024) = a1;
                  return ExQueueWorkItemToPartition(a1 + 1000);
                }
              }
              return result;
            }
          }
        }
        else
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)(a1 + 1032) = result;
        }
      }
    }
  }
  return result;
}
