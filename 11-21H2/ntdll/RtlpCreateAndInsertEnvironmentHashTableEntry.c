/*
 * XREFs of RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x1800D92C8
 * Callers:
 *     RtlpScanEnvironment @ 0x180033880 (RtlpScanEnvironment.c)
 * Callees:
 *     RtlpAllocateEnvironmentHashTable @ 0x18000DADC (RtlpAllocateEnvironmentHashTable.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x1800D93B0 (RtlpInsertEnvironmentHashTableEntry.c)
 */

__int64 __fastcall RtlpCreateAndInsertEnvironmentHashTableEntry(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *EnvironmentHashTable; // rax
  _QWORD *v10; // rbx
  int inserted; // edi
  __int64 v12; // r9
  unsigned __int16 *v13; // r10
  __int64 v14; // r9
  unsigned __int16 v16; // [rsp+20h] [rbp-18h]

  EnvironmentHashTable = RtlpAllocateEnvironmentHashTable(0x30uLL);
  v10 = EnvironmentHashTable;
  if ( EnvironmentHashTable )
  {
    EnvironmentHashTable[2] = a2;
    v12 = 314159LL;
    EnvironmentHashTable[3] = a4;
    EnvironmentHashTable[4] = a3;
    EnvironmentHashTable[5] = a5;
    v13 = &a2[(unsigned int)a3];
    while ( a2 < v13 )
    {
      v16 = NLS_UPCASE(qword_1801776F8, *a2++);
      v12 = HIBYTE(v16) + 37 * ((unsigned __int8)v16 + 37 * v14);
    }
    v10[1] = v12;
    inserted = RtlpInsertEnvironmentHashTableEntry(a1, v10);
    if ( inserted < 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
