/*
 * XREFs of ReadAMDMsr @ 0x140428E40
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1405796E0 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
