/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x1800B13DA
 * Callers:
 *     RtlpWalkLFHBlock @ 0x1800B1434 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Value; ; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( i == &SRWLock[1] )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
