/*
 * XREFs of iswspace @ 0x1403D9B70
 * Callers:
 *     GetNextNoneWhiteSpace @ 0x1409D3600 (GetNextNoneWhiteSpace.c)
 *     LocalGetConditionForString @ 0x1409D49C4 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D50B4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     iswctype @ 0x1403DBCE4 (iswctype.c)
 */

int __cdecl iswspace(wint_t C)
{
  return iswctype(C, 8u);
}
