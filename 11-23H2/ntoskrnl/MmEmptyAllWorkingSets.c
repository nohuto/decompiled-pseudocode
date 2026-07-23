/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140635BA0
 * Callers:
 *     EtwpSetMark @ 0x1409E6B40 (EtwpSetMark.c)
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140634C28 (MiEmptyAllWorkingSets.c)
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
