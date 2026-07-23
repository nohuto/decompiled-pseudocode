/*
 * XREFs of RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0
 * Callers:
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x1800D92C8 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x18000DADC (RtlpAllocateEnvironmentHashTable.c)
 *     RtlpFindEnvironmentHashEntry @ 0x180038070 (RtlpFindEnvironmentHashEntry.c)
 *     RtlpFreeEnvironmentHashTable @ 0x1800896A4 (RtlpFreeEnvironmentHashTable.c)
 */

__int64 __fastcall RtlpInsertEnvironmentHashTableEntry(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  char *EnvironmentHashTable; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // r10
  __int64 v12; // r15
  _QWORD *v13; // r9
  __int64 v14; // rdx
  void *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v20; // [rsp+58h] [rbp+10h]
  __int64 v21; // [rsp+58h] [rbp+10h]

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
          v7 = -1;
          do
          {
            ++v7;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v7);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v8 = (unsigned int)v5;
        if ( EnvironmentHashTable > &EnvironmentHashTable[8 * v5] )
          v8 = 0LL;
        if ( v8 )
          memset64(EnvironmentHashTable, a1 | 1, v8);
        v9 = *(_DWORD *)(a1 + 4);
        v10 = 0;
        v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v9 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v12 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v13 = *(_QWORD **)(v12 + 8LL * v10);
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              *(_QWORD *)(v12 + 8LL * v10) = *v13;
              v20 = v11 & v13[1];
              v14 = (37
                   * (BYTE6(v20)
                    + 37
                    * (BYTE5(v20)
                     + 37
                     * (BYTE4(v20)
                      + 37
                      * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                   + HIBYTE(v20)) & (unsigned int)(v5 - 1);
              *v13 = *(_QWORD *)&EnvironmentHashTable[8 * v14];
              *(_QWORD *)&EnvironmentHashTable[8 * v14] = v13;
            }
            v9 = *(_DWORD *)(a1 + 4);
            ++v10;
          }
          while ( v10 < v9 >> 5 );
        }
        v15 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = EnvironmentHashTable;
        *(_DWORD *)(a1 + 4) = (32 * v5) | v9 & 0x1F;
        if ( v15 )
          RtlpFreeEnvironmentHashTable(v15);
      }
    }
    v16 = *(_DWORD *)(a1 + 4);
    v21 = *(_QWORD *)(a2 + 8) & (-1LL << (v16 & 0x1F));
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (HIBYTE(v21)
         + 37
         * (BYTE6(v21)
          + 37
          * (BYTE5(v21)
           + 37
           * (BYTE4(v21)
            + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & ((v16 >> 5) - 1);
    *(_QWORD *)a2 = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = a2;
    ++*(_DWORD *)a1;
  }
  return v4;
}
