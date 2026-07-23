/*
 * XREFs of iswspace @ 0x1403DA3B0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409D3750 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409D4B14 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D5204 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403DC524 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
