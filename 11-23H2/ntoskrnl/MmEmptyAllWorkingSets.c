/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140635650
 * Callers:
 *     EtwpSetMark @ 0x1409E68B0 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140AA5340 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14036AD70 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406346D8 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}
