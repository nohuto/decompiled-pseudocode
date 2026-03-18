/*
 * XREFs of iswspace @ 0x1403DA1D0
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409D3550 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409D4914 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D5004 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403DC344 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
