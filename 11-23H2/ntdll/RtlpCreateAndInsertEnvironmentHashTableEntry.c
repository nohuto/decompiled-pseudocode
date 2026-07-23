/*
 * XREFs of RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x180058990
 * Callers:
 *     RtlpScanEnvironment @ 0x180058770 (RtlpScanEnvironment.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpAllocateEnvironmentHashTable @ 0x180058A60 (RtlpAllocateEnvironmentHashTable.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x180058A94 (RtlpInsertEnvironmentHashTableEntry.c)
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
  __int64 v11; // r10
  unsigned __int16 *v12; // r11
  __int64 v13; // r10
  int inserted; // edi
  __int16 v16; // [rsp+20h] [rbp-18h]

  EnvironmentHashTable = (_QWORD *)RtlpAllocateEnvironmentHashTable(48LL, 0LL);
  v10 = EnvironmentHashTable;
  if ( EnvironmentHashTable )
  {
    EnvironmentHashTable[2] = a2;
    v11 = 314159LL;
    EnvironmentHashTable[3] = a4;
    EnvironmentHashTable[4] = a3;
    EnvironmentHashTable[5] = a5;
    v12 = &a2[(unsigned int)a3];
    while ( a2 < v12 )
    {
      v16 = NLS_UPCASE(qword_180184808, *a2++);
      v11 = HIBYTE(v16) + 37 * ((unsigned __int8)v16 + 37 * v13);
    }
    v10[1] = v11;
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
