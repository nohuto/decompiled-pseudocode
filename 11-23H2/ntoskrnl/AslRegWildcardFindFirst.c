/*
 * XREFs of AslRegWildcardFindFirst @ 0x140A56568
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x140A50A0C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     AslAlloc @ 0x140758688 (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x140A564E4 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x140A56628 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x140A567E8 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, PVOID **a2, const wchar_t *a3)
{
  wchar_t **v6; // rax
  PVOID *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = (wchar_t **)AslAlloc(a1, 0x20uLL);
  v7 = (PVOID *)v6;
  if ( !v6 )
    return 3221225495LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[1] = (wchar_t *)v6;
  *v6 = (wchar_t *)v6;
  Next = AslStringDuplicate(v6 + 3, a3);
  if ( Next < 0
    || (Next = AslpParsePattern(v7[3], v7), Next < 0)
    || (v7[2] = *v7, Next = AslRegWildcardFindNext(a1, v7), Next < 0) )
  {
    AslRegWildcardFindClose(v7);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)Next;
}
