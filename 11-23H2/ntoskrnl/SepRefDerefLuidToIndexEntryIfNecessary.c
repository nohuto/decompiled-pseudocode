/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406B7AE4
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x1406B7654 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x140349EFC (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x14034B788 (SepReferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
