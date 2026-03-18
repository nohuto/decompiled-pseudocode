/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x14022CE74
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14022CAF0 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     SepShouldSetDelinkFlags @ 0x1407F15F0 (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x1406D9ED0 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  UNICODE_STRING *v2; // rbx
  int v3; // edi
  char result; // al

  v2 = &PotentialGlobalAttributePrefixes;
  v3 = 0;
  while ( 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
      result = v2->Length <= String2->Length && memcmp(v2->Buffer, String2->Buffer, v2->Length) == 0;
    else
      result = RtlPrefixUnicodeString(v2, String2, 1u);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 )
      return result;
  }
  return 1;
}
