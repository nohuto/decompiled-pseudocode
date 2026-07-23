/*
 * XREFs of RtlpFlsClonePrepare @ 0x18011989C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpFlsClonePrepare()
{
  unsigned int v0; // edi
  unsigned int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rbp
  int v4; // ecx
  __int64 v5; // r8
  _RTL_SRWLOCK *v6; // rcx
  __int64 result; // rax

  v0 = qword_180187F28;
  v1 = 1;
  while ( 1 )
  {
    if ( v1 <= v0 )
    {
      v2 = v1 + 16;
      v3 = v0 - v1 + 1;
      v1 = v0 + 1;
      do
      {
        _BitScanReverse((unsigned int *)&v4, v2);
        v5 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v4 - 4) + 1);
        if ( v5 )
          v6 = (_RTL_SRWLOCK *)(v5 + 8 * ((v2 ^ (1 << v4)) + 2LL * (v2 ^ (1 << v4)) + 1));
        else
          v6 = 0LL;
        RtlAcquireSRWLockExclusive(v6);
        ++v2;
        --v3;
      }
      while ( v3 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    result = qword_180187F28;
    if ( (unsigned int)qword_180187F28 <= v0 )
      break;
    v0 = qword_180187F28;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  return result;
}
