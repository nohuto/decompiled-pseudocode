/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x1800B13DA
 * Callers:
 *     RtlpWalkLFHBlock @ 0x1800B1434 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *i; // r8
  char v7; // bl

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v7 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v7;
}
