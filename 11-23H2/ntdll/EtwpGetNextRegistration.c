/*
 * XREFs of EtwpGetNextRegistration @ 0x18005EBB4
 * Callers:
 *     EtwpDisableTraceProviders @ 0x18005E51C (EtwpDisableTraceProviders.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180124D60 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007A2F0 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall EtwpGetNextRegistration(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Value; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rbx
  _QWORD *v7; // rcx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
  {
    Value = a1[1].Value;
    v5 = (unsigned __int64)a1;
    if ( Value )
    {
      v7 = *(_QWORD **)Value;
      if ( *(_QWORD *)Value )
      {
        do
        {
          Value = (unsigned __int64)v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
    }
    else
    {
      for ( i = a1[2].Value; ; i = *(_QWORD *)(Value + 16) )
      {
        Value = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v5 )
          break;
        v5 = Value;
      }
    }
  }
  else if ( (*(_BYTE *)&EtwpRegistrationTable.0 & 1) != 0 )
  {
    if ( EtwpRegistrationTable.Min == (_RTL_BALANCED_NODE *)1 )
      Value = 0LL;
    else
      Value = (unsigned __int64)EtwpRegistrationTable.Min ^ ((unsigned __int64)&EtwpRegistrationTable.Root + 1);
  }
  else
  {
    Value = (unsigned __int64)EtwpRegistrationTable.Min;
  }
  while ( Value )
  {
    v3 = Value;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Value + 72)) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD ***)(Value + 8);
    v10 = Value;
    if ( v9 )
    {
      v11 = *v9;
      for ( Value = *(_QWORD *)(Value + 8); v11; v11 = (_QWORD *)*v11 )
        Value = (unsigned __int64)v11;
    }
    else
    {
      while ( 1 )
      {
        Value = *(_QWORD *)(Value + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Value || *(_QWORD *)Value == v10 )
          break;
        v10 = Value;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
