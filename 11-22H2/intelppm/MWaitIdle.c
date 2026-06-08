/*
 * XREFs of MWaitIdle @ 0x1C0001550
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x1C0004230 (IssueVerw.c)
 */

__int64 __fastcall MWaitIdle(const void **a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = a2;
  v3 = WORD1(a2);
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( (_WORD)v3 )
    IssueVerw((unsigned __int16)v3, a2);
  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  if ( v2 )
  {
    result = v2;
    __writemsr(0x48u, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
