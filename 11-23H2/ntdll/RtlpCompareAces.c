/*
 * XREFs of RtlpCompareAces @ 0x180010724
 * Callers:
 *     RtlpIsDuplicateAce @ 0x1800105FC (RtlpIsDuplicateAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F3290 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlpCompareKnownAces @ 0x18001075C (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x1800F3040 (RtlpCompareKnownObjectAces.c)
 */

char __fastcall RtlpCompareAces(_BYTE *a1, char *a2)
{
  char v2; // r10
  char v3; // al

  v2 = 0;
  v3 = *a2;
  if ( (unsigned __int8)(*a1 - 5) <= 3u )
  {
    if ( (unsigned __int8)(v3 - 5) > 3u )
      return v2;
    return RtlpCompareKnownObjectAces();
  }
  if ( (unsigned __int8)(v3 - 5) > 3u )
    return RtlpCompareKnownAces();
  return v2;
}
