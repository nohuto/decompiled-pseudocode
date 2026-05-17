/*
 * XREFs of RtlpFlsCloneComplete @ 0x18011836C
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpFlsCloneComplete(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  signed __int64 result; // rax
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // r8
  volatile signed __int64 *v9; // rcx

  v2 = RtlpFlsContext;
  v3 = (unsigned int)qword_180184E28;
  if ( a2 )
    v2 = 1LL;
  RtlpFlsContext = v2;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  if ( (_DWORD)v3 )
  {
    v6 = v3 + 16;
    do
    {
      _BitScanReverse((unsigned int *)&v7, v6);
      v8 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v7 - 4) + 1);
      if ( v8 )
        v9 = (volatile signed __int64 *)(v8 + 8 * ((v6 ^ (1 << v7)) + 2LL * (v6 ^ (1 << v7)) + 1));
      else
        v9 = 0LL;
      if ( a2 )
        *v9 = 1LL;
      result = RtlReleaseSRWLockExclusive(v9);
      --v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
