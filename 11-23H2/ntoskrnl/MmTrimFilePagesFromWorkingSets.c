/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x140635BEC
 * Callers:
 *     PopTransitionToSleep @ 0x140AA51B0 (PopTransitionToSleep.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035F068 (MiQueueWorkingSetRequest.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_140C698E4 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 128);
    }
  }
}
