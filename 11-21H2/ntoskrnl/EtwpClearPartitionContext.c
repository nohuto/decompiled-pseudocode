/*
 * XREFs of EtwpClearPartitionContext @ 0x14024DFC0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 */

__int64 __fastcall EtwpClearPartitionContext(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    PsDereferencePartition(v4, a2, a3);
    *a1 = 0LL;
  }
  return 0LL;
}
