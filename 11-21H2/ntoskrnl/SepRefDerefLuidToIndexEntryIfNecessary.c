/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14067231C
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140672120 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x14023A798 (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14028ACE8 (SepDereferenceLuidToIndexEntry.c)
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
