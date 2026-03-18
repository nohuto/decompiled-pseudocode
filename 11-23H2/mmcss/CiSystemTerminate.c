/*
 * XREFs of CiSystemTerminate @ 0x1C000DE04
 * Callers:
 *     CiSystemInitialize @ 0x1C000F400 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0005668 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}
