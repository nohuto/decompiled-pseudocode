/*
 * XREFs of EtwpClearPartitionContext @ 0x14031EE44
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    PsDereferencePartition(v2);
    *a1 = 0LL;
  }
  return 0LL;
}
