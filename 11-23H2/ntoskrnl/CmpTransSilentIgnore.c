/*
 * XREFs of CmpTransSilentIgnore @ 0x1402315B0
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
