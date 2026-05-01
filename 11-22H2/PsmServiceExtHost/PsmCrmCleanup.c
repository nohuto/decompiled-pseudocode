/*
 * XREFs of PsmCrmCleanup @ 0x18006C250
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x18006CEEC (CrmGlobalsCleanup.c)
 */

__int64 PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
