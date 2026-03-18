/*
 * XREFs of ReadAMDMsr @ 0x140428AB0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1405791F0 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
