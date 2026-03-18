/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x14021DCB0
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x14062F0A8 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F04 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14021E42C (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbx

  v0 = (qword_140C66EA0 << 9) - qword_140C69A70;
  v1 = qword_140C69A90 + (unsigned int)MiGetNumberOfCachedPtes(&qword_140C69A40) + v0;
  if ( v1 >= 0x100000000LL )
    LODWORD(v1) = -1;
  return (unsigned int)v1;
}
