/*
 * XREFs of PsmCrmCleanup @ 0x18006C030
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x18006CCCC (CrmGlobalsCleanup.c)
 */

__int64 PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
