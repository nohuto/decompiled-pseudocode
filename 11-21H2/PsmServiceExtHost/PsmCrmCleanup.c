/*
 * XREFs of PsmCrmCleanup @ 0x18006C860
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsCleanup @ 0x18006D798 (CrmGlobalsCleanup.c)
 */

__int64 *PsmCrmCleanup()
{
  CrmGlobalsCleanup();
  return CrmGlobalsInitialize();
}
