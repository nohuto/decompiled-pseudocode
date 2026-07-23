/*
 * XREFs of RtlpInsertEnvironmentHashTableEntry @ 0x180058A94
 * Callers:
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x180058990 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     RtlpFindEnvironmentHashEntry @ 0x18001EEA0 (RtlpFindEnvironmentHashEntry.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x180058A60 (RtlpAllocateEnvironmentHashTable.c)
 *     RtlpFreeEnvironmentHashTable @ 0x18008C1DC (RtlpFreeEnvironmentHashTable.c)
 */

__int64 __fastcall RtlpInsertEnvironmentHashTableEntry(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdi
  char *EnvironmentHashTable; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r15
  _QWORD *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+68h] [rbp+10h]

  v4 = 0;
  if ( RtlpFindEnvironmentHashEntry(a1, *(const WCHAR **)(a2 + 16), *(_QWORD *)(a2 + 32)) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    v5 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v5 )
    {
      if ( (unsigned int)v5 < 4 )
        v5 = 4LL;
      EnvironmentHashTable = (char *)RtlpAllocateEnvironmentHashTable(8LL * (unsigned int)v5);
      if ( EnvironmentHashTable )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          v11 = -1;
          do
          {
            ++v11;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v11);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v12 = (unsigned int)v5;
        if ( EnvironmentHashTable > &EnvironmentHashTable[8 * v5] )
          v12 = 0LL;
        if ( v12 )
          memset64(EnvironmentHashTable, a1 | 1, v12);
        v13 = 0;
        v14 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v15 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v16 = *(_QWORD **)(v15 + 8LL * v13);
              if ( ((unsigned __int8)v16 & 1) != 0 )
                break;
              *(_QWORD *)(v15 + 8LL * v13) = *v16;
              v20 = v14 & v16[1];
              v17 = (37
                   * (BYTE6(v20)
                    + 37
                    * (BYTE5(v20)
                     + 37
                     * (BYTE4(v20)
                      + 37
                      * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                   + HIBYTE(v20)) & (unsigned int)(v5 - 1);
              *v16 = *(_QWORD *)&EnvironmentHashTable[8 * v17];
              *(_QWORD *)&EnvironmentHashTable[8 * v17] = v16;
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v18 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v5;
        *(_QWORD *)(a1 + 8) = EnvironmentHashTable;
        if ( v18 )
          RtlpFreeEnvironmentHashTable(v18, 0LL, EnvironmentHashTable, v14);
      }
    }
    v6 = *(_DWORD *)(a1 + 4);
    v19 = *(_QWORD *)(a2 + 8) & (-1LL << (v6 & 0x1F));
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (HIBYTE(v19)
        + 37
        * (BYTE6(v19)
         + 37
         * (BYTE5(v19)
          + 37
          * (BYTE4(v19)
           + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & ((v6 >> 5) - 1);
    *(_QWORD *)a2 = *(_QWORD *)(v7 + 8 * v8);
    *(_QWORD *)(v7 + 8 * v8) = a2;
    ++*(_DWORD *)a1;
  }
  return v4;
}
