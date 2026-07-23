/*
 * XREFs of MiMaximumCommitmentAvailable @ 0x14021DC3C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiMaximumCommitmentAvailable()
{
  if ( qword_140C6F8E8 > (unsigned __int64)qword_140C6F448 )
    return 0LL;
  else
    return qword_140C6F448 - qword_140C6F8E8;
}
