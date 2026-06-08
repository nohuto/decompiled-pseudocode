/*
 * XREFs of MWaitIdle @ 0x1C0001520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MWaitIdle(const void **a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 )
    __writemsr(0x48u, 0LL);
  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  if ( a2 )
  {
    result = a2;
    __writemsr(0x48u, a2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
