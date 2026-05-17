/*
 * XREFs of EtwpInsertGuidEntry @ 0x18005EF9C
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x18005EF2C (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x180039210 (RtlRbInsertNodeEx.c)
 *     EtwpGuidEntryCompare @ 0x180084660 (EtwpGuidEntryCompare.c)
 */

signed __int64 __fastcall EtwpInsertGuidEntry(unsigned __int64 a1)
{
  __int64 v2; // rdi
  bool v3; // bl
  int v4; // esi
  __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = EtwpGuidEntryTable;
  v3 = 0;
  if ( (qword_180188278 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v2 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v2 = 0LL;
  }
  v4 = qword_180188278 & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (int)EtwpGuidEntryCompare(a1 + 24, v2) < 0 )
      {
        v5 = *(_QWORD *)v2;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= v2;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(v2 + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_17;
          v5 ^= v2;
        }
        if ( !v5 )
        {
LABEL_17:
          v3 = 1;
          break;
        }
      }
      v2 = v5;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpGuidEntryTable, v2, v3, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
