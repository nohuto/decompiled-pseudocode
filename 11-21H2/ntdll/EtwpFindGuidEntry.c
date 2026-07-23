/*
 * XREFs of EtwpFindGuidEntry @ 0x180016878
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180016194 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     EtwpReferenceUmGuidEntry @ 0x180007BD4 (EtwpReferenceUmGuidEntry.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     memcmp @ 0x180097B10 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _QWORD *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 && EtwpGuidEntryTable.Root )
    Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( v5 <= 0 )
    {
      i = (_QWORD *)Root;
LABEL_10:
      v6 = *(_QWORD *)Root;
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(Root + 8);
LABEL_11:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( i )
  {
    while ( !EtwpReferenceUmGuidEntry((__int64)i) )
    {
      v9 = (_QWORD **)i[1];
      if ( v9 )
      {
        v10 = *v9;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
      if ( i )
      {
        v11 = *Buf1 - i[3];
        if ( *Buf1 == i[3] )
          v11 = Buf1[1] - i[4];
        if ( !v11 )
          continue;
      }
      goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return i;
}
