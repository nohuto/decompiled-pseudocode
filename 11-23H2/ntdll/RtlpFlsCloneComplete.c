/*
 * XREFs of RtlpFlsCloneComplete @ 0x1801197EC
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009E920 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpFlsCloneComplete(__int64 a1, int a2)
{
  $2F38BEDF952D5DA5F266621B11247D04 v2; // rax
  __int64 v3; // rbx
  unsigned int v5; // edi
  int v6; // ecx
  __int64 v7; // r8
  _RTL_SRWLOCK *v8; // rcx

  v2 = RtlpFlsContext.0;
  v3 = (unsigned int)qword_180187F28;
  if ( a2 )
    v2 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  RtlpFlsContext.0 = v2;
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  if ( (_DWORD)v3 )
  {
    v5 = v3 + 16;
    do
    {
      _BitScanReverse((unsigned int *)&v6, v5);
      v7 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v6 - 4) + 1);
      if ( v7 )
        v8 = (_RTL_SRWLOCK *)(v7 + 8 * ((v5 ^ (1 << v6)) + 2LL * (v5 ^ (1 << v6)) + 1));
      else
        v8 = 0LL;
      if ( a2 )
        v8->Value = 1LL;
      RtlReleaseSRWLockExclusive(v8);
      --v5;
      --v3;
    }
    while ( v3 );
  }
}
