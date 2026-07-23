/*
 * XREFs of MmFlushAllPagesEx @ 0x14063C218
 * Callers:
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x14063A15C (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1);
  }
  return result;
}
