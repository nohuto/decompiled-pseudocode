/*
 * XREFs of MmGetNumberOfFreeSystemPtes @ 0x14021DC90
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x14062F588 (MiIssueNoPtesBugcheck.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14021E40C (MiGetNumberOfCachedPtes.c)
 */

__int64 MmGetNumberOfFreeSystemPtes()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rbx

  v0 = (qword_140C66DA0 << 9) - qword_140C69970;
  v1 = qword_140C69990 + (unsigned int)MiGetNumberOfCachedPtes(&qword_140C69940) + v0;
  if ( v1 >= 0x100000000LL )
    LODWORD(v1) = -1;
  return (unsigned int)v1;
}
