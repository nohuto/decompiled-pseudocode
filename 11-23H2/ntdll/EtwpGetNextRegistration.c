/*
 * XREFs of EtwpGetNextRegistration @ 0x18005EBB4
 * Callers:
 *     EtwpDisableTraceProviders @ 0x18005E51C (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180124D90 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007A2F0 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(unsigned __int64 a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 j; // rbx
  unsigned __int64 v5; // rax
  __int64 i; // rbx
  _QWORD *v7; // rcx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
  {
    j = *(_QWORD *)(a1 + 8);
    v5 = a1;
    if ( j )
    {
      v7 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v5 )
          break;
        v5 = j;
      }
    }
  }
  else if ( (qword_180188290 & 1) != 0 )
  {
    if ( qword_180188290 == 1 )
      j = 0LL;
    else
      j = qword_180188290 ^ ((unsigned __int64)&EtwpRegistrationTable + 1);
  }
  else
  {
    j = qword_180188290;
  }
  while ( j )
  {
    v3 = j;
    if ( (unsigned __int8)RtlTryAcquireSRWLockShared(j + 72) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD ***)(j + 8);
    v10 = j;
    if ( v9 )
    {
      v11 = *v9;
      for ( j = *(_QWORD *)(j + 8); v11; v11 = (_QWORD *)*v11 )
        j = (unsigned __int64)v11;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v10 )
          break;
        v10 = j;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v3 & -(__int64)(v2 != 0);
}
