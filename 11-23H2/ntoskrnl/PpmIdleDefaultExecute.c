/*
 * XREFs of PpmIdleDefaultExecute @ 0x140393C50
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x14041AA10 (HalProcessorIdle.c)
 *     KeExecuteVerw @ 0x140435A80 (KeExecuteVerw.c)
 */

__int64 __fastcall PpmIdleDefaultExecute(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( (_WORD)a5 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a5) )
    KeExecuteVerw(a1, a2);
  HalProcessorIdle(a1, a2);
  if ( (_WORD)a5 )
    __writemsr(0x48u, (unsigned __int16)a5);
  else
    _mm_lfence();
  return 0LL;
}
