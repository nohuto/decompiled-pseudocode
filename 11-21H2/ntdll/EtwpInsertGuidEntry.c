/*
 * XREFs of EtwpInsertGuidEntry @ 0x180007C68
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180007BF8 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     EtwpGuidEntryCompare @ 0x180088934 (EtwpGuidEntryCompare.c)
 */

__int64 __fastcall EtwpInsertGuidEntry(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  char v4; // bl
  int v5; // esi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v3 = EtwpGuidEntryTable;
  v4 = 0;
  if ( (qword_18017AFA8 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v3 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v3 = 0LL;
  }
  v5 = qword_18017AFA8 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)EtwpGuidEntryCompare(a1 + 24, v3) < 0 )
      {
        v6 = *(_QWORD *)v3;
        if ( v5 )
        {
          if ( !v6 )
            break;
          v6 ^= v3;
        }
        if ( !v6 )
          break;
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_17;
          v6 ^= v3;
        }
        if ( !v6 )
        {
LABEL_17:
          v4 = 1;
          break;
        }
      }
      v3 = v6;
    }
  }
  LOBYTE(v2) = v4;
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
